#include <iostream>
#include "ConfigParser.hpp"

int main()
{
    using namespace std;
    std::string params_filepath =
        "/home/tobiaszfic/school/kms/argon-cpp/params.json";

    auto params = ConfigParser::Parse(params_filepath);
    params.Print();

    cout << "hello, world!\n" << endl;
    return 0;
}