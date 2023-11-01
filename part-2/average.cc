// Ernie Sena
// ernj05@csu.fullerton.edu
// @ernj05
// Partners: @Amir-League

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number" << std::endl;
    return 1;
  }

  double sum = 0.0;
  int count = 0;

  for (int i = 1; i < arguments.size(); ++i) {
    double num = std::stod(arguments[i]);
    sum += num;
    count++;
  }

  if (count > 0) {
    double average = sum / count;
    std::cout << "average = " << average << std::endl;
  }

  return 0;
}
