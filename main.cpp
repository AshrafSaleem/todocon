#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include "todocon.h"

int main(
    int argc,          // Argument Counter : Number of arguments, default is 1 (first arguments are always the filename itself)
    char const *argv[] // Argument Value : The value of arguments
)
{
    todocon tdc;
    if (argc > 1)
    {
        int i = 0;
        while (i < argc)
        {
            //Adding a input
            if ((strcmp(argv[i], "-i") == 0) && (i + 1) != argc)
            {
                tdc.addData(argv[i+1]);
                tdc.list();
            }
            // Read file and print out each line by line.
            else if ((strcmp(argv[i], "-ls") == 0))
            {
                tdc.list();
            }
            //To not print otu selected index user specified (aka delete)
            else if ((strcmp(argv[i], "-d") == 0))
            {
                tdc.deleteData(argv[i+1]);
                tdc.list();
            }       

            i++;
        }
    }

    return 0;
}
