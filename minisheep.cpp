// ���Դ���  

#include"test.h"
#include"Capture.h"
#include<string>
#include <fstream>
#include"ImgSvrSoap.nsmap"
#include"soapStub.h"
#include"soapH.h"


using namespace std;

string result = "";

string readTxt(string file)
{
	ifstream infile; 
	infile.open(file.data());   //���ļ����������ļ��������� 
	//assert(infile.is_open());   //��ʧ��,�����������Ϣ,����ֹ�������� 

	string s;
	while(getline(infile,s))
	{
		//cout<<s<<endl;
		infile.close();             //�ر��ļ������� 
		return s;
	}
}

void OutputImage(byte pic[]){
	std::fstream OutputFile;
    std::string FileName = "001.JPG";
     
    OutputFile.open( FileName.c_str(), std::ios::binary | std::ios::out );
    OutputFile.write( (char*)pic, 1358*681*3 );
     
   // OutputFile.seekp(0, ios::end);
 
    OutputFile.close();
}

void NotifyAction(DWORD dwAction, LPWSTR szFile, DWORD dwLength)  
{  
	switch(dwAction)  
	{  
	case FILE_ACTION_ADDED:  
		wprintf(L"FILE_ACTION_ADDED: \n\t");  
		break;  

	case FILE_ACTION_REMOVED:  
		wprintf(L"FILE_ACTION_REMOVED: \n\t");  
		break;  

	case FILE_ACTION_MODIFIED:  
		wprintf(L"FILE_ACTION_MODIFIED: \n\t");  
		break;  

	case FILE_ACTION_RENAMED_OLD_NAME:  
		wprintf(L"FILE_ACTION_RENAMED_OLD_NAME: \n\t");  
		break;  

	case FILE_ACTION_RENAMED_NEW_NAME:  
		wprintf(L"FILE_ACTION_RENAMED_NEW_NAME: \n\t");  
		break;  

	default:  
		break;  
	}  
	WCHAR szPath[MAX_PATH] = {0};  
	wmemcpy(szPath, szFile, min(dwLength, MAX_PATH));  
	wprintf(L"%s\n", szPath);  

	result = "change";
}  


void SOAP(byte pic[],int size,char *timeStr)   //byte������ͼƬ�ֽ���
{
	bool iRet = false;
	struct soap imgSoap;
	struct _ns1__UpLoadImg uploadImg;
	struct _ns1__UpLoadImgResponse uploadImgResponse;

	const char *pcAddr="http://10.1.16.103:9091/ImgSvr.asmx?WSDL";
	//const char *pcAddr="http://192.168.1.110:14241/ImgSvr.asmx?WSDL";

	//����
	uploadImg.ID = "test";
	//uploadImg.pic = pic;
	uploadImg.pic.__ptr = pic;

	/*int cnt = 0;
	for(int i=0;i<size;i++){
		if(pic[i] >= 0 && pic[i] <= 255){
			cnt++;
		}
	}
	cout<<cnt<<endl;*/
	//cout<<"size:"<<size<<endl;
	uploadImg.pic.__size = size;
	
	/*for(int i=0;i<1358*681;i++){
		cout<<(int)pic[i]<<endl;
	}*/
	

	uploadImg.timeStr = timeStr;

	//OutputImage(pic);
	
	//ini,���Ա��
	soap_init(&imgSoap);
	iRet=soap_call___ns1__UpLoadImg(&imgSoap,pcAddr,NULL,&uploadImg,&uploadImgResponse);
	if(uploadImgResponse.UpLoadImgResult == false)
	{
		//printf("�ϴ�ʧ��!��%s\n",uploadImgResponse);
		printf("�ϴ�ʧ��!\n");
	}
	else if(uploadImgResponse.UpLoadImgResult == true)
	{
		//printf("�ϴ��ɹ���%s\n",uploadImgResponse);
		printf("�ϴ��ɹ�!\n");
	}
	soap_destroy(&imgSoap);   
	soap_end(&imgSoap);   
	soap_done(&imgSoap);   
}


int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])  
{  
	CDirectoryWatch watch;  
	string path = "";
	string pic_path = "";
	string startpath = "";
	TCHAR str1[MAX_PATH] = { 0 };
	//string debug_path = "";
	GetModuleFileName(NULL,str1,MAX_PATH);
	string temp = str1;
	int total_length = temp.length();
	string res = temp.substr(0,total_length - 9);
	
	string config_path = res + "\config.txt";
	string readtext = readTxt(config_path);
	cout<<config_path<<endl;
	cout<<readtext<<endl;
	path = readtext;
	wprintf(L"Start Directory Watch ...\n");  
	//cout<<"��������Ҫ��ص�·��:"<<endl;
	//cin>>path;
	while(1){
		Sleep(1000); 
		//wprintf(L"Start Directory Watch ...\n");  
		watch.StartDirectoryWatch(path.c_str(), NotifyAction);  
		//watch.StartDirectoryWatch(_T("C:\\vs2005"), NotifyAction);  

		if(result == "change"){   //����ı�
			result = "nochange";  //Ϊ��һ����׼��
			//startpath = "start " + path;
			//cout<<"startpath:"<<startpath<<endl;
			//system(startpath.c_str());  //������߼���������д,�ȴ򿪱��޸ĺ�·���ĵط�,�ٷ��������Ǽ�⵽�ı�
			//system("PAUSE");
			
			//Ȼ��ظ�ͼ
			Capture *cap = new Capture();
			unsigned char *image = new unsigned char();
			int size = 0;

			char* timeStr = new char[100];
			image = cap->ScreenShot(size,timeStr);


			byte *bImage = new byte();
			bImage = (byte*)image;
		
			/*for(int i=0;i<size;i++){
				if(bImage[i] == 255 || bImage[i] == 0)
				cout<<(int)bImage[i]<<endl;
			}*/
			cout<<"size:"<<size<<endl;

			SOAP(bImage,size,timeStr);
			
			if(image != NULL){
				delete image;
				image = NULL;
			}

			if(bImage != NULL){
				delete bImage;
				bImage = NULL;
			}

			if(timeStr != NULL)
			{
				delete timeStr;
				timeStr = NULL;
			}
			if(cap != NULL){
				delete cap;
				cap = NULL;
			}

			//SOAP();
			//system("exit C:\\vs2005");
			//Sleep(10000);
			Sleep(2000);
			
			
			
		}
		
	}
	return 0;  
} 