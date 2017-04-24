/* soapClient.c
   Generated by gSOAP 2.8.45 for ImageUpload.h

gSOAP XML Web services tools
Copyright (C) 2000-2017, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"
#ifdef __cplusplus
extern "C" {
#endif

SOAP_SOURCE_STAMP("@(#) soapClient.c ver 2.8.45 2017-04-18 03:18:26 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetSysTime(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__GetSysTime *ns1__GetSysTime, struct _ns1__GetSysTimeResponse *ns1__GetSysTimeResponse)
{	struct __ns1__GetSysTime soap_tmp___ns1__GetSysTime;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://10.1.16.103:9091/ImgSvr.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/GetSysTime";
	soap_tmp___ns1__GetSysTime.ns1__GetSysTime = ns1__GetSysTime;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__GetSysTime(soap, &soap_tmp___ns1__GetSysTime);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetSysTime(soap, &soap_tmp___ns1__GetSysTime, "-ns1:GetSysTime", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetSysTime(soap, &soap_tmp___ns1__GetSysTime, "-ns1:GetSysTime", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetSysTimeResponse)
		return soap_closesock(soap);
	soap_default__ns1__GetSysTimeResponse(soap, ns1__GetSysTimeResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__GetSysTimeResponse(soap, ns1__GetSysTimeResponse, "ns1:GetSysTimeResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__UpLoadImg(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__UpLoadImg *ns1__UpLoadImg, struct _ns1__UpLoadImgResponse *ns1__UpLoadImgResponse)
{	struct __ns1__UpLoadImg soap_tmp___ns1__UpLoadImg;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://10.1.16.103:9091/ImgSvr.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/UpLoadImg";
	soap_tmp___ns1__UpLoadImg.ns1__UpLoadImg = ns1__UpLoadImg;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__UpLoadImg(soap, &soap_tmp___ns1__UpLoadImg);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__UpLoadImg(soap, &soap_tmp___ns1__UpLoadImg, "-ns1:UpLoadImg", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__UpLoadImg(soap, &soap_tmp___ns1__UpLoadImg, "-ns1:UpLoadImg", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__UpLoadImgResponse)
		return soap_closesock(soap);
	soap_default__ns1__UpLoadImgResponse(soap, ns1__UpLoadImgResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__UpLoadImgResponse(soap, ns1__UpLoadImgResponse, "ns1:UpLoadImgResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__SetCurrentBillWay(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__SetCurrentBillWay *ns1__SetCurrentBillWay, struct _ns1__SetCurrentBillWayResponse *ns1__SetCurrentBillWayResponse)
{	struct __ns1__SetCurrentBillWay soap_tmp___ns1__SetCurrentBillWay;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://10.1.16.103:9091/ImgSvr.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/SetCurrentBillWay";
	soap_tmp___ns1__SetCurrentBillWay.ns1__SetCurrentBillWay = ns1__SetCurrentBillWay;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__SetCurrentBillWay(soap, &soap_tmp___ns1__SetCurrentBillWay);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__SetCurrentBillWay(soap, &soap_tmp___ns1__SetCurrentBillWay, "-ns1:SetCurrentBillWay", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__SetCurrentBillWay(soap, &soap_tmp___ns1__SetCurrentBillWay, "-ns1:SetCurrentBillWay", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__SetCurrentBillWayResponse)
		return soap_closesock(soap);
	soap_default__ns1__SetCurrentBillWayResponse(soap, ns1__SetCurrentBillWayResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__SetCurrentBillWayResponse(soap, ns1__SetCurrentBillWayResponse, "ns1:SetCurrentBillWayResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetCurrentImg(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__GetCurrentImg *ns1__GetCurrentImg, struct _ns1__GetCurrentImgResponse *ns1__GetCurrentImgResponse)
{	struct __ns1__GetCurrentImg soap_tmp___ns1__GetCurrentImg;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://10.1.16.103:9091/ImgSvr.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/GetCurrentImg";
	soap_tmp___ns1__GetCurrentImg.ns1__GetCurrentImg = ns1__GetCurrentImg;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__GetCurrentImg(soap, &soap_tmp___ns1__GetCurrentImg);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetCurrentImg(soap, &soap_tmp___ns1__GetCurrentImg, "-ns1:GetCurrentImg", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetCurrentImg(soap, &soap_tmp___ns1__GetCurrentImg, "-ns1:GetCurrentImg", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetCurrentImgResponse)
		return soap_closesock(soap);
	soap_default__ns1__GetCurrentImgResponse(soap, ns1__GetCurrentImgResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__GetCurrentImgResponse(soap, ns1__GetCurrentImgResponse, "ns1:GetCurrentImgResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetSysTime_(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__GetSysTime *ns1__GetSysTime, struct _ns1__GetSysTimeResponse *ns1__GetSysTimeResponse)
{	struct __ns1__GetSysTime_ soap_tmp___ns1__GetSysTime_;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://10.1.16.103:9091/ImgSvr.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/GetSysTime";
	soap_tmp___ns1__GetSysTime_.ns1__GetSysTime = ns1__GetSysTime;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__GetSysTime_(soap, &soap_tmp___ns1__GetSysTime_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetSysTime_(soap, &soap_tmp___ns1__GetSysTime_, "-ns1:GetSysTime", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetSysTime_(soap, &soap_tmp___ns1__GetSysTime_, "-ns1:GetSysTime", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetSysTimeResponse)
		return soap_closesock(soap);
	soap_default__ns1__GetSysTimeResponse(soap, ns1__GetSysTimeResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__GetSysTimeResponse(soap, ns1__GetSysTimeResponse, "ns1:GetSysTimeResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__UpLoadImg_(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__UpLoadImg *ns1__UpLoadImg, struct _ns1__UpLoadImgResponse *ns1__UpLoadImgResponse)
{	struct __ns1__UpLoadImg_ soap_tmp___ns1__UpLoadImg_;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://10.1.16.103:9091/ImgSvr.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/UpLoadImg";
	soap_tmp___ns1__UpLoadImg_.ns1__UpLoadImg = ns1__UpLoadImg;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__UpLoadImg_(soap, &soap_tmp___ns1__UpLoadImg_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__UpLoadImg_(soap, &soap_tmp___ns1__UpLoadImg_, "-ns1:UpLoadImg", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__UpLoadImg_(soap, &soap_tmp___ns1__UpLoadImg_, "-ns1:UpLoadImg", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__UpLoadImgResponse)
		return soap_closesock(soap);
	soap_default__ns1__UpLoadImgResponse(soap, ns1__UpLoadImgResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__UpLoadImgResponse(soap, ns1__UpLoadImgResponse, "ns1:UpLoadImgResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__SetCurrentBillWay_(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__SetCurrentBillWay *ns1__SetCurrentBillWay, struct _ns1__SetCurrentBillWayResponse *ns1__SetCurrentBillWayResponse)
{	struct __ns1__SetCurrentBillWay_ soap_tmp___ns1__SetCurrentBillWay_;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://10.1.16.103:9091/ImgSvr.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/SetCurrentBillWay";
	soap_tmp___ns1__SetCurrentBillWay_.ns1__SetCurrentBillWay = ns1__SetCurrentBillWay;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__SetCurrentBillWay_(soap, &soap_tmp___ns1__SetCurrentBillWay_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__SetCurrentBillWay_(soap, &soap_tmp___ns1__SetCurrentBillWay_, "-ns1:SetCurrentBillWay", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__SetCurrentBillWay_(soap, &soap_tmp___ns1__SetCurrentBillWay_, "-ns1:SetCurrentBillWay", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__SetCurrentBillWayResponse)
		return soap_closesock(soap);
	soap_default__ns1__SetCurrentBillWayResponse(soap, ns1__SetCurrentBillWayResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__SetCurrentBillWayResponse(soap, ns1__SetCurrentBillWayResponse, "ns1:SetCurrentBillWayResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetCurrentImg_(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct _ns1__GetCurrentImg *ns1__GetCurrentImg, struct _ns1__GetCurrentImgResponse *ns1__GetCurrentImgResponse)
{	struct __ns1__GetCurrentImg_ soap_tmp___ns1__GetCurrentImg_;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://10.1.16.103:9091/ImgSvr.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/GetCurrentImg";
	soap_tmp___ns1__GetCurrentImg_.ns1__GetCurrentImg = ns1__GetCurrentImg;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__GetCurrentImg_(soap, &soap_tmp___ns1__GetCurrentImg_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__GetCurrentImg_(soap, &soap_tmp___ns1__GetCurrentImg_, "-ns1:GetCurrentImg", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__GetCurrentImg_(soap, &soap_tmp___ns1__GetCurrentImg_, "-ns1:GetCurrentImg", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__GetCurrentImgResponse)
		return soap_closesock(soap);
	soap_default__ns1__GetCurrentImgResponse(soap, ns1__GetCurrentImgResponse);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_get__ns1__GetCurrentImgResponse(soap, ns1__GetCurrentImgResponse, "ns1:GetCurrentImgResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#ifdef __cplusplus
}
#endif

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.c */
