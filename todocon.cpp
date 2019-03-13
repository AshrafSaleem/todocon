#include "todocon.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>

todocon::todocon()
{
    fileName = "list.txt";
}

void todocon::list()
{
    std::string input;
    ff.open(fileName, std::ios::in);
    while (ff >> input)
    {
        std::cout << input << std::endl;
    }
    ff.close();
}

void todocon::addData(char const *argv)
{
    ff.open(fileName, std::ios::out | std::ios::app);
    ff << argv << std::endl;
    ff.close();
}

void todocon::deleteData(char const *argv)
{
    std::vector<std::string> x;
    int count = 1;
    std::string temp;
    ff.open(fileName, std::ios::in);
    while (ff >> temp)
    {
        x.push_back(temp);
    }
    ff.close();
    std::remove(fileName.c_str());
    ff.open(fileName, std::ios::out);

    for (std::vector<std::string>::iterator it = x.begin(); it != x.end(); it++)
    {
        if (count != atoi(argv))
        {
            ff << (*it) << std::endl;
        }
        count++;
    }

    ff.close();
}