#include <iostream>
#include "../include/nlohmann/json_fwd.hpp" //json parser
#include "nlohmann/json.hpp"
#include <fstream>
using json = nlohmann::json;

int main()
{


    std::ifstream i("../files/json/mylist.json");
    json jMyList = json::parse(i);


    std::cout << "j" << std::endl;
    return 0;



}