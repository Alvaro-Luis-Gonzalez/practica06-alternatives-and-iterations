#include<iostream>

int main() {
	int num1, num2;
	std::cin >> num1 >> num2;
	if(num1 < num2) {
		int a = num1;
		while(a <= (num2 - 1)) {
			std::cout << a << ",";
			a+=1;
		}	
		std::cout << num2 << std::endl;
	}		
	else if(num1 = num2) {
		std::cout << num1 << std::endl;
	}
	return 0;
}

