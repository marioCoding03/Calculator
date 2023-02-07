#include <iostream>

std::string result;
void check() {
    do {
        std::cout << "Add more numbers?" << std::endl;
        std::cout << "Please specify 'y' or 'n': ";
        std::cin >> result;
    } while (result != "y" && result != "n");

}

void add() {
	double numbers = {};
	std::cout << "enter a number: ";
	std::cin >> numbers;
    std::cout << "enter another number: ";
    std::cin >> numbers;
    check();
    if (result == "y") {
        do{
            std::cout << "enter another number: ";
            std::cin >> numbers;
            check();
        }while(result != "no");
    }
    else {
        double add_result = 0;
        for(int i {0}; i < numbers; i++){
            add_result += numbers;
        }
        std::cout << "Added numbers:  = " << add_result << std::endl;
    }
}

int main()
{
	add();
	return 0;
}
