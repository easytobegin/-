#include<iostream>
#include"Capture.h"
#include <afxwin.h>

#include "gdiplus.h" 
using namespace Gdiplus; 
using namespace std;

unsigned char* Capture::ScreenShot(int &imgSize,char *str)  
{  
	CWnd* pDesktop = CWnd::GetDesktopWindow();
	CDC *pdeskdc = pDesktop->GetDC();  
	CRect re;  
	//获取窗口的大小  
	pDesktop->GetClientRect(&re);  
	CBitmap bmp;  
	bmp.CreateCompatibleBitmap(pdeskdc, re.Width(), re.Height());  
	//创建一个兼容的内存画板  
	CDC memorydc;  
	memorydc.CreateCompatibleDC(pdeskdc);  
	//选中画笔  
	CBitmap *pold = memorydc.SelectObject(&bmp);  
	//绘制图像  
	memorydc.BitBlt(0, 0, re.Width(), re.Height(), pdeskdc, 0, 0, SRCCOPY);  
	//获取鼠标位置，然后添加鼠标图像  
	CPoint po;  
	GetCursorPos(&po);  
	HICON hinco = (HICON)GetCursor();  
	memorydc.DrawIcon(po.x - 10, po.y - 10, hinco);  
	//选中原来的画笔  
	memorydc.SelectObject(pold);  
	BITMAP bit;  
	bmp.GetBitmap(&bit);  
	//定义 图像大小（单位：byte）  
	DWORD size = bit.bmWidthBytes * bit.bmHeight;  
	
	LPSTR lpdata = (LPSTR)GlobalAlloc(GPTR, size);  
	//后面是创建一个bmp文件的必须文件头  
	BITMAPINFOHEADER pbitinfo;  
	pbitinfo.biBitCount = 24;  
	pbitinfo.biClrImportant = 0;  
	pbitinfo.biCompression = BI_RGB;  
	pbitinfo.biHeight = bit.bmHeight;  
	pbitinfo.biPlanes = 1;  
	pbitinfo.biSize = sizeof(BITMAPINFOHEADER);  
	pbitinfo.biSizeImage = size;  
	pbitinfo.biWidth = bit.bmWidth;  
	pbitinfo.biXPelsPerMeter = 0;  
	pbitinfo.biYPelsPerMeter = 0;  
	GetDIBits(pdeskdc->m_hDC, bmp, 0, pbitinfo.biHeight, lpdata, (BITMAPINFO*)  
		&pbitinfo, DIB_RGB_COLORS);  
	BITMAPFILEHEADER bfh;  
	bfh.bfReserved1 = bfh.bfReserved2 = 0;  
	bfh.bfType = ((WORD)('M' << 8) | 'B');  
	bfh.bfSize = size + 54;  
	bfh.bfOffBits = 54;  
	//写入文件  
	CFile file;  
	CString strFileName(_T("C:\\testdemoScreenShot\\"));  
	//strFileName += _T("ScreenShot\\");  
	CreateDirectory((LPCTSTR)strFileName, NULL);  
	CTime t = CTime::GetCurrentTime();  
	CString tt = t.Format("%Y%m%d%H%M%S");  
	strFileName += tt;  
	strFileName += _T(".jpg");    //可修改画质
	if (file.Open((LPCTSTR)strFileName, CFile::modeCreate | CFile::modeWrite))  
	{  
		file.Write(&bfh, sizeof(BITMAPFILEHEADER));  
		file.Write(&pbitinfo, sizeof(BITMAPINFOHEADER));  
		file.Write(lpdata, size);  
		file.Close();  
	}  


	CFile   imageFile; 
	imageFile.Open(strFileName,CFile::modeRead); 
	unsigned char*   imageBuffer; 
	long   nlength   =   imageFile.GetLength(); 
	imageBuffer   =   new  unsigned char[nlength+2]; 
	imageFile.Read(imageBuffer,nlength); 

	//GlobalFree(lpdata);  
	imgSize = nlength;
	strcpy(str,tt);
	return imageBuffer;   //返回图片字节流,size为长、宽
}