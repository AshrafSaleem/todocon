#include <iostream>
#include <fstream>
#include <string.h>

const char* fileName = "list.txt";

int main(
        int argc,           // Argument Counter : Number of arguments, default is 1 (first arguments are always the filename itself) 
        char const *argv[]  // Argument Value : The value of arguments
        )
{
    if (argc > 1)
        {
            if (strcmp(argv[1], "-i\n"))
            { 
                std::fstream ff; 
                ff.open(fileName,std::ios::out);
                ff << argv[2] << std::endl;   
                ff.close();  
                return 0; 
            }
        } 

   return 0;
}