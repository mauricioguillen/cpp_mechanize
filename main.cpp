#include "mechanize.h"


int main(){

Mechanize mech;

Response response;

response = mech.get("https://www.google.com");

cout << response.response << "\n";

//cout <<  mech.response << "\n";

return 0;
}
