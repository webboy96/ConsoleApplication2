#include "header.h"
void Quit::quit()
{
    std::string temp;
    std::cout << "Enter \"q\" or \"Q\" to quit." << std::endl;
    std::getline(std::cin, temp);
    if (temp == "q" || temp == "Q")
    {

    }
    else
    {
        quit();
    }
}