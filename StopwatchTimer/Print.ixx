#include <iostream>
#include <string>

export module Print;

export void Print(std::string text, bool endl = true) {
	
	if (endl) {
		std::cout << text << std::endl;
	}
	else {
		std::cout << text;
	}
};

export void PrintFlush(std::string text) {
	std::cout << text << std::flush << std::endl;
}