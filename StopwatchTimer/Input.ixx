#include <iostream>
#include <string>

export module Input;

import Print;

export auto InputInt(std::string questionText) {
	int variable;
	Print(questionText, false);

	std::cin >> variable;

	return variable;
};