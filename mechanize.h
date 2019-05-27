#include <iostream>
#include <vector>
#include <curl/curl.h>
#include <string>

using namespace std;

static size_t write_response(void *curl,size_t size,size_t count,void *response){
((string*)response)->append((char*)curl,size*count);
return size*count;
}

class Response{

	public:
		string response;
			

};

class Cookies{
	
	public:
		bool  activate_cookies;	

};




class Mechanize{

	public:
		Response RESPONSE;
		string response;
		Cookies COOKIES;
		CURL *curl;
		CURLcode res;
	
	public:
		Response get(const char *url);



};

#include "MECHINCLUDE/get.cpp"
