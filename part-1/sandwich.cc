// Ernie Sena
// ernj05@csu.fullerton.edu
// @ernj05
// Partners: @Amir-League

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4) {
    std::cout << "Error: Invalid number of arguments. Usage: sandwich"
                 "<protein> <bread> <condiment>\n";
    return 1;
  }

  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << ".\n";

  return 0;
}
