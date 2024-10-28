#include<iostream>

int main () {
  char letra;
  std::cin >> letra;
  if (letra < 'a') {
    std::cout << (char)(letra+('a'-'A')) << std::endl;
  }
  else
    std::cout << (char)(letra+('A'-'a')) << std::endl;
  return 0;
  } 
