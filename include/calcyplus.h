#ifndef CALCYPLUS
#define CALCYPLUS


#include <string>

struct output
{
    double Re = 0;
    double y = 0;

};

output calcYPlus(int yplus, double c, std::string fluid, double length);


#endif