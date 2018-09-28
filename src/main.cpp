#include <iostream>
#include <iomanip>
//#include "nlohmann/json.hpp"
#include "include/JsonBox-master/include/JsonBox.h"
#include "include/JsonBox-master/include/JsonBox/Value.h"
#include <fstream>


int main()
{

    //read from file
    std::ifstream ifs("test.json");

    JsonBox::Value v2;
    v2.loadFromFile("test.json");

    //display
    //std::cout << j.dump(4) << std::endl;


    return 0;


}