#include"Location.h"
#include"iostream"

Location::Location()
{std::cout << "The inputted location is x:" << x << ", and y: " << y << "."<< std::endl;}

Location::Location(double x, double y): x(x), y(y){
std::cout << "The inputted location is x:" << x << ", and y: " << y << "."<< std::endl;}

