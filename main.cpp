#include <iostream>
#include <vector>
#include <string>
int main()
{
  std::cout << "hello world" << std::endl;
  std::vector<std::string> list {"Hello", "World", "!"};
  std::vector<std::string>::iterator it;
  for(it = list.begin(); it != list.end(); it++)
    std::cout << *it << " ";
  std::cout << std::endl;


}
