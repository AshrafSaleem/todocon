#include <iostream>
#include <fstream>
#include <string.h>

const char *fileName = "list.txt";

int main(
    int argc,          // Argument Counter : Number of arguments, default is 1 (first arguments are always the filename itself)
    char const *argv[] // Argument Value : The value of arguments
)
{
    if (argc > 1)
    {
        int i = 0;
        while (i < argc)
        {
            if ((strcmp(argv[i], "-i") == 0) && (i+1) != argc) 
            {
                std::fstream ff;
                ff.open(fileName, std::ios::out|std::ios::app);
                ff << argv[i+1] << std::endl;
                ff.close();
            }

            i++;
        }
    }

    return 0;
}