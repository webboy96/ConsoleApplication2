// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//#include "header.h"
#include <iostream>
#include <string>


int main()
{
    std::string s = "abcabcbb";
    std::string d = s;
    int length = s.length();
    int count_symb = 1;
    int first_symb = NULL;
    for (int i = 0; i < length; i++)
    {
        for (int k = i+1; k < length; k++)
        {
            if (s[k] != s[i])
            {
                count_symb++;
                if (first_symb == NULL)
                {
                    first_symb = i;
                }
                else
                {
                    for (int b = first_symb+1; b < i; b++)
                    {
                        
                        {
                            if (s[b] == s[k])
                            {
                                std::cout << "Count_symb = " << count_symb << " First symb = " << first_symb + 1 << std::endl;
                                first_symb = NULL;
                                count_symb = 1;
                                break;
                            }

                        }
                    }

                }
                

            }
            else
            {
                std::cout << "Count_symb = " << count_symb << " First symb = " << first_symb+1 << std::endl;
                first_symb = NULL;
                count_symb = 1;
                break;
            }
          
        }
    }

    

}


