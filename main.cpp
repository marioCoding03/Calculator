#include <iostream>

std::string result;
void check_y_Or_n(){
	do {
		std::cout << "Please specify 'y' or 'n': ";
		std::cin >> result;
	} while (result != "y" && result != "n");
}

void check() {
	std::cout << "Add more numbers?" << std::endl;
	check_y_Or_n();
	if (result == "y") {
		std::cout << "yes";
	}
	else {
		std::cout << "no";
	}
}

void add() {
	double numbers = {};
	std::cout << "enter a number: ";
	std::cin >> numbers;
	check();
}

int main()
{
	add();
	return 0;
}
