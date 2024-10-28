#include<iostream>
#include<iomanip>

int main() {
	int num1;
	double resultado = 0.0;
	std::cin >> num1;
	for(int i=1; i <= num1; i++) {
		resultado += 1 / i;
		}
	std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;
	return 0;
} 
	
