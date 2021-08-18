
#include "lrs.h"
#include "as_web.h"
#include "lrw_custom_body.h"


Image_1G_2Ads()
{


  
//  web_reg_find("Text/IC=Exception", "Fail=found", LAST);

//	web_reg_find("Text/IC=<Errors>", "Fail=found", LAST);

//	web_reg_find("Text/IC=<errorCode>0</errorCode>", "Fail=Notfound", LAST);

	//This is for image/graphic requests only
	
//	web_reg_find("Text/IC=<ImageData", "Fail=Notfound", LAST);

//    web_reg_find("Text/IC=<CLICKURL", "Fail=Notfound", LAST);

	web_disable_keep_alive ();

	web_reg_find("Text=<errorCode>0</errorCode>",LAST);

	lr_start_transaction("sas-dru-1g");

	web_custom_request("Image_1G_2Ads",
	   //"URL=http://rchperf.tvlport.com:31150/services/RailShopAPIService",
  	   "URL=http://Adserver-ESBPERF.tvlport.com:31510/services/AdData",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=",
		"Mode=HTTP",
		"Binary=1",
		"EncType=text/xml; charset=utf-8",
		//"Body=<?xml version=\"1.0\" encoding=\"utf-8\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:ads=\"http://adserver.ad.travelport.com/AdService/\"><soapenv:Header/><soapenv:Body><ads:AdTransact><!--Optional:--><ads:errorCode>?</ads:errorCode><ads:AdServiceReq><ads:REQUESTTYPE>I</ads:REQUESTTYPE><ads:ADID> </ads:ADID><ads:ADSIZE>180x150</ads:ADSIZE><ads:ADNAME> </ads:ADNAME><ads:AdDataInfo><ads:POSIATA>99883991</ads:POSIATA><ads:POSLNIATA>E4D412</ads:POSLNIATA><ads:DATE>2013-03-22</ads:DATE><ads:TIME>0887</ads:TIME><ads:SYSTIME>2349</ads:SYSTIME><ads:USERTYPE>T</ads:USERTYPE><ads:BILLABLE>Y</ads:BILLABLE><ads:SYSDATE>2013-03-21</ads:SYSDATE><ads:PROMODATE>2013-07-02</ads:PROMODATE><ads:PROMODAY>TUE</ads:PROMODAY><ads:PROMOMONTH>07</ads:PROMOMONTH><ads:VENDOR>CA</ads:VENDOR><ads:NOINPARTY>01</ads:NOINPARTY><ads:CLASSOFSERVICE>H</ads:CLASSOFSERVICE><ads:PARAMSTYLE>WS2</ads:PARAMSTYLE><ads:UNIQUEADS>yes</ads:UNIQUEADS><ads:MULTIADS>yes</ads:MULTIADS><ads:ORGSYSTEM>1P</ads:ORGSYSTEM><ads:PLATFORM>MG</ads:PLATFORM><ads:AIRLINE/><ads:FLIGHTNUMBER/><ads:POSCITY>DFW</ads:POSCITY><ads:ORGCITY>PEK</ads:ORGCITY><ads:DESCITY>IAH</ads:DESCITY><ads:POSCOUNTRY>TX</ads:POSCOUNTRY><ads:COUNTRY>US</ads:COUNTRY><ads:POSSTATEPROV/><ads:POSPCC>IT6</ads:POSPCC><ads:POSZIP/><ads:SYSNAME/><ads:NATACCT/><ads:PROPERTYCODE/><ads:CHAINCODE/><ads:VEHICLECODE/><ads:RATECODE/><ads:DEPCIPICKDATE>2013-05-13</ads:DEPCIPICKDATE><ads:RETCODROPDATE>2013-05-15</ads:RETCODROPDATE><ads:TILE>24323234</ads:TILE><ads:TRANSTYPE>A</ads:TRANSTYPE><ads:VENDORTYPE>A</ads:VENDORTYPE></ads:AdDataInfo></ads:AdServiceReq></ads:AdTransact></soapenv:Body></soapenv:Envelope>",
        //"Body=<?xml version=\"1.0\" encoding=\"utf-8\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:ads=\"http://adserver.ad.travelport.com/AdService/\"><soapenv:Header/><soapenv:Body><ads:AdTransact><!--Optional:--><ads:errorCode>?</ads:errorCode><ads:AdServiceReq><ads:REQUESTTYPE>I</ads:REQUESTTYPE><ads:ADID> </ads:ADID><ads:ADSIZE>180x150</ads:ADSIZE><ads:ADNAME> </ads:ADNAME><ads:AdDataInfo><ads:CANCELURL></ads:CANCELURL><ads:CLICKURL></ads:CLICKURL><ads:BOOKURL></ads:BOOKURL><ads:BROWSER>IE8</ads:BROWSER><ads:TRANSTYPE>A</ads:TRANSTYPE><ads:POSIATA>99883991</ads:POSIATA><ads:POSLNIATA>E4D412</ads:POSLNIATA><ads:DATE>2013-03-22</ads:DATE><ads:TIME>0887</ads:TIME><ads:SYSTIME>2349</ads:SYSTIME><ads:USERTYPE>T</ads:USERTYPE><ads:VENDORTYPE>H</ads:VENDORTYPE><ads:BILLABLE>Y</ads:BILLABLE><ads:SYSDATE>2013-03-21</ads:SYSDATE><ads:PROMODATE>2013-10-17</ads:PROMODATE><ads:PROMODAY>TUE</ads:PROMODAY><ads:PROMOMONTH>07</ads:PROMOMONTH><ads:VENDOR>CA</ads:VENDOR><ads:NOINPARTY>01</ads:NOINPARTY><ads:CLASSOFSERVICE>H</ads:CLASSOFSERVICE><ads:PARAMSTYLE>AG2</ads:PARAMSTYLE><ads:UNIQUEADS>yes</ads:UNIQUEADS><ads:MULTIADS>yes</ads:MULTIADS><ads:ORGSYSTEM>GALILEO</ads:ORGSYSTEM><ads:PLATFORM>NG</ads:PLATFORM><ads:AIRLINE></ads:AIRLINE><ads:FLIGHTNUMBER></ads:FLIGHTNUMBER><ads:POSCITY>DFW</ads:POSCITY><ads:ORGCITY>ATL</ads:ORGCITY><ads:DESCITY>SIN</ads:DESCITY><ads:POSCOUNTRY>TX</ads:POSCOUNTRY><ads:COUNTRY>US</ads:COUNTRY><ads:POSSTATEPROV></ads:POSSTATEPROV><ads:POSPCC>JX6</ads:POSPCC><ads:POSZIP></ads:POSZIP><ads:SYSNAME></ads:SYSNAME><ads:NATACCT></ads:NATACCT><ads:PROPERTYCODE></ads:PROPERTYCODE><ads:CHAINCODE></ads:CHAINCODE><ads:VEHICLECODE></ads:VEHICLECODE><ads:RATECODE></ads:RATECODE><ads:DEPCIPICKDATE>2013-06-13</ads:DEPCIPICKDATE><ads:RETCODROPDATE>2013-06-15</ads:RETCODROPDATE><ads:TILE>24323234</ads:TILE></ads:AdDataInfo></ads:AdServiceReq><ads:trackingId>11234</ads:trackingId></ads:AdTransact></soapenv:Body></soapenv:Envelope>",
        "Body=<?xml version=\"1.0\" encoding=\"utf-8\"?>"
		"<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:ads=\"http://adserver.ad.travelport.com/AdService/\">"
            "<soapenv:Header></soapenv:Header>"
            "<soapenv:Body>"
                "<ads:AdTransact>"
                    "<ads:errorCode>?</ads:errorCode>"
                    "<ads:AdServiceReq>"
                        "<ads:REQUESTTYPE>I</ads:REQUESTTYPE>"
                        "<ads:ADID></ads:ADID>"
                        "<ads:USERID>Tesing-muleapi123</ads:USERID>"
                        "<ads:ADSIZE>180x150</ads:ADSIZE>"
                        "<ads:ADNAME></ads:ADNAME>"
                        "<ads:AdDataInfo>"
                            "<ads:CANCELURL></ads:CANCELURL>"
                            "<ads:CLICKURL></ads:CLICKURL>"
                            "<ads:BOOKURL></ads:BOOKURL>"
                            "<ads:POSIATA></ads:POSIATA>"
                            "<ads:POSLNIATA>00000000Z</ads:POSLNIATA>"
                            "<ads:TIME>0931</ads:TIME>"
                            "<ads:SYSTIME>0931</ads:SYSTIME>"
                            "<ads:TRANSTYPE>A</ads:TRANSTYPE>"
                            "<ads:VENDORTYPE>A</ads:VENDORTYPE>"
                            "<ads:BILLABLE>yes</ads:BILLABLE>"
                            "<ads:SYSDATE>2021-07-12</ads:SYSDATE>"
                            "<ads:PROMODATE>2021-11-02</ads:PROMODATE>"
                            "<ads:PROMODAY>TUE</ads:PROMODAY>"
                            "<ads:PROMOMONTH>11</ads:PROMOMONTH>"
                            "<ads:POSSTATEPROV>WA</ads:POSSTATEPROV>"
                            "<ads:VENDOR></ads:VENDOR>"
                            "<ads:CLASSOFSERVICE></ads:CLASSOFSERVICE>"
                            "<ads:PARAMSTYLE>AG2</ads:PARAMSTYLE>"
                            "<ads:UNIQUEADS>yes</ads:UNIQUEADS>"
                            "<ads:MULTIADS>yes</ads:MULTIADS>"
                            "<ads:ORGSYSTEM>GALILEO</ads:ORGSYSTEM>"
                            "<ads:PLATFORM>NG</ads:PLATFORM>"
                            "<ads:AIRLINE></ads:AIRLINE>"
                            "<ads:FLIGHTNUMBER></ads:FLIGHTNUMBER>"
                            "<ads:POSCITY>ATL</ads:POSCITY>"
                            "<ads:POSPCC>1H1U</ads:POSPCC>"
                            "<ads:ORGCITY>BNA</ads:ORGCITY>"
                            "<ads:DESCITY>BNA</ads:DESCITY>"
                            "<ads:POSCOUNTRY>US</ads:POSCOUNTRY>"
                            "<ads:DEPCIPICKDATE>2021-11-02</ads:DEPCIPICKDATE>"
                            "<ads:RETCODROPDATE>2021-11-03</ads:RETCODROPDATE>"
                            "<ads:TILE>{Tile}</ads:TILE>"
                        "</ads:AdDataInfo>"
                    "</ads:AdServiceReq>"
                    "<ads:trackingId>{Tile}</ads:trackingId>"
                "</ads:AdTransact>"
            "</soapenv:Body>"
        "</soapenv:Envelope>",		
        LAST);
    
	lr_end_transaction("sas-dru-1g", LR_AUTO);

	lr_think_time(0.037);

	return 0;

}
