#ifndef _TODOCON_H_
#define _TODOCON_H_

#include <iostream>
#include <string.h>
#include <fstream>
class todocon
{
  public:
    todocon();
    void list();
    void addData(char const *argv);
    void deleteData(char const *argv);

  private:
    std::fstream ff;
    std::string fileName;
};

#endif