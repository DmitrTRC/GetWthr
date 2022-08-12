#include <iostream>
#include <cpr/cpr.h>


int main (int argc, char **argv) {

    cpr::Response r = cpr::Get (cpr::Url{"wttr.in"});

    std::cout << r.status_code << std::endl;                  // 200
    std::cout << r.header["content-type"] << std::endl;       // application/json; charset=utf-8
    std::cout << r.text << std::endl;                         // JSON text string

    return 0;
}
