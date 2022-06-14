#ifndef MAIN_H
#define MAIN_H
#include "Shape.h"
#include "ShapeFactory.h"
#include "Geometry.h"
#include <fstream>

int main()
{
    //read data in my_document.txt
    std::string filename("my_document.txt");
    std::vector<std::string> lines;
    std::string line;

    //open file
    std::ifstream input_file(filename);
    //check
    if (!input_file.is_open()) {
       std::cout << "Failed to open this file!" << std::endl;
        return -1;
    }
    // data push in vector lines
    while (std::getline(input_file, line)){
        lines.push_back(line);
    }

    for (int i = 0; i < lines[0].size(); i++)
    {
        std::cout << lines[i] << std::endl;
    }

    Geometry *geo;
    if (geo == nullptr)
    {
        std:: cout << "con tro nullptr !" << std::endl;
        return 0;
    }
    
    geo->fromString(lines[0]);
    std::cout << "---------------------" << std::endl;
    std::cout << geo->toString() << " " << geo->GetArea(5.5) << " " << geo->GetPerimeter(5.5) << std::endl;
    input_file.close();
    return 0;
}
#endif