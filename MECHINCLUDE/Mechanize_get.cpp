//============================================//
//
//===========================================//

Response Mechanize::get(const char *url){

this->curl = curl_easy_init();

if(this->curl){

if(this->COOKIES.activate_cookies){

curl_easy_setopt(this->curl,CURLOPT_COOKIEFILE,"");


}

curl_easy_setopt(this->curl,CURLOPT_URL, url);
curl_easy_setopt(this->curl,CURLOPT_WRITEFUNCTION,write_response);
curl_easy_setopt(this->curl,CURLOPT_WRITEDATA,&this->response);

this->res = curl_easy_perform(this->curl);

if(this->res != CURLE_OK){

fprintf(stderr,"curl_easy_perform() failed: %s\n",curl_easy_strerror(this->res));

curl_easy_cleanup(this->curl);

exit(1);
}


}



this->RESPONSE.response = this->response;

return this->RESPONSE;
}
