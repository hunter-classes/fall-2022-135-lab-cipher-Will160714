#include <iostream>
#include <string>
#include "funcs.h"

int main()
{
  std::string test = solve("byffi, qilfx. nby nbcha ypyls jlialuggyl wixym qbyh nbys uly fyulhcha u hyq fuhaouay");
  std::cout << "Encrypted Message: " << std::endl;
  std::cout << "byffi, qilfx. nby nbcha ypyls jlialuggyl wixym qbyh nbys uly fyulhcha u hyq fuhaouay" << std::endl;
  std::cout << "Decrypted Message: " << std::endl;
  std::cout << test << std::endl;
  return 0;
}
