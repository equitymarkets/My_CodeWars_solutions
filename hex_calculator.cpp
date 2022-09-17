/*
The rgb function is incomplete. Complete it so that passing in RGB decimal values 
will result in a hexadecimal representation being returned. Valid decimal values 
for RGB are 0 - 255. Any values that fall out of that range must be rounded to the closest valid value.

Note: Your answer should always be 6 characters long, the shorthand with 3 will not work here.
*/
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class RGBToHex
{
  public:
    static std::string rgb(int r, int g, int b)
      {
        if(r < 0) r=0;                          //TODO: consolidate all arguments
        if(r > 255) r = 255;
        if(g < 0) g = 0;
        if(g > 255) g = 255;
        if(b < 0) b = 0;
        if(b > 255) b = 255;
        std::stringstream result;
        result << std::uppercase << std::setfill('0') << std::setw(2) 
        << std::hex << r << std::setw(2) << g << std::setw(2) << b;
        std::string RGB = result.str();
        return RGB;
      }
};
