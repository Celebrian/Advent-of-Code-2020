#include <iostream>
#include <map>
using namespace std;

int main() {
  //Each line in the input
  std::string line;
  //Map of all input with index
  std::map<int, int> input;

  //Iterator for the index number
  int index = 0;
  //Read all input and insert into map
  while (std::getline(std::cin, line))
  {
    //   input.insert({++index, std::stoi(line)});
    input[++index] = std::stoi(line);
  }

  //Loop through and compare, print the product when 2 factors equals 2020
  for (int i = 1; i <= input.size(); i++)
  {
      for (int  j = i + 1; j <= input.size(); j++)
      {

          if (input[i] + input[j] == 2020)
          {
              std::cout << (input.at(i) * input.at(j));
              break;
          }
      }
  }

  return 0;
}
