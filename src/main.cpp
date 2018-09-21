#include <iostream>
#include <iomanip>
#include "nlohmann/json.hpp"
#include <fstream>

using json = nlohmann::json;

int main()
{

    //read from file
    std::ifstream ifs("test.json");

    //create object
    json j(ifs);

    //At this poinr "process finish with error 11

    //dump object as a string
    //std::string s = j.dump();

    //display
    //std::cout << j.dump(4) << std::endl;


    return 0;


}