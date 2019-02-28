#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
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
            if ((strcmp(argv[i], "-i") == 0) && (i + 1) != argc)
            {
                std::fstream ff;
                ff.open(fileName, std::ios::out | std::ios::app);
                ff << argv[i + 1] << std::endl;
                ff.close();
            }
            else if ((strcmp(argv[i], "-ls") == 0))
            {
                std::string input;
                std::ifstream ff;
                ff.open(fileName, std::ios::in);
                while (ff >> input)
                {
                    std::cout << input << std::endl;
                }
                ff.close();
            }
            else if ((strcmp(argv[i], "-d") == 0))
            {    
                std::vector<std::string> x;
                int count = 1;
                  std::string temp;
                  std::ifstream ff;
                  ff.open(fileName, std::ios::in);
                  while (ff >> temp)
                {
                    x.push_back(temp);
                }
                  
                
                 
                 for(std::vector<std::string>::iterator it = x.begin(); it != x.end(); it++){
                     if(count != atoi(argv[i+1])){
                        std::cout << *it << std::endl; 
                     }
                     count++;
                 }
            }

            i++;
        }
    }

    return 0;
}
