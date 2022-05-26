#include <iostream>

int main(int argc, char* argv[]) {
	
	int a = 1;
	a = a << 1;
	a <<= 1;
	std::cout << "Hello, world" << std::endl;
	std::cout << a << "\n\n";
	std::cout << "Hello" << std::endl << "nice to meet you" << std::endl;

	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++)
			std::cout << i << '*' << j << '=' << i * j<<std::endl;
		std::cout << std::endl;
	}

	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++)
			std::cout << j << '*' << i << '=' << i * j << "\t";
		std::cout << std::endl;
	}

		return 0;
}