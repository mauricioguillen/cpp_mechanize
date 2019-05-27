#include "mechanize.h"


int main(){

Mechanize mech;

Cookies cookie = Cookies::init();

mech.cookie_jar();

Response response = mech.get("https://www.google.com");

cout << response.response << "\n";

//cout <<  mech.response << "\n";

return 0;
}
