#include <iostream>
#include <string>
#include <math.h>
#include <Windows.h>


int main() {
	int p;
	int t;
	int E;

	//Beginning
	std::cout << "*****************************************************" << std::endl;
	std::cout << "Welcome to Sales Tax Calculator!" << std::endl;
	std::cout << "*****************************************************" << std::endl;
	
	//Product Price
	std::cout << "Please Enter your Product Price: " << std::endl;
	std::cin >> p;
	std::cout << "\n$" << p << "$" << std::endl;

	//Tax Percentage
	std::cout << "\n What is your Tax Percentage? (Decimals)" << std::endl;
	std::cin >> t;
	std::cout << "\n" << p << " X " << t  << "=" << std::endl;
	std::cout << "\n\n";

	//Multiply and Output
	int x = p * t;


	std::cout << x << "$" << std::endl;

	//System Clear
	std::cin >> E;
	system("cls");
	
	return 0;
}