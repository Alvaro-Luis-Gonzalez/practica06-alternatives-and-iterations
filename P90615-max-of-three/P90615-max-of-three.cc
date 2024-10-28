#include<iostream>

int main() {
	int num1, num2, num3;
	std::cin >> num1 && num2 >> num3;
	if (num1 >= num2 && num1 >= num3) {
		std::cout << num1;
	}
	else if(num2 >= num1 && num2 >= num3) {
		std::cout << num2;
	}
	else {
		std::cout << num3;
	}
	return 0;
}
