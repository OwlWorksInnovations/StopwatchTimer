// Includes
#include <iostream>
#include <string>

// Modules
import Print;
import Sleep;
import Input;

// Main
int main() {
	int timerSeconds = 0;

	timerSeconds = InputInt("How long should the timer run (Seconds): ");
	Sleep(timerSeconds);
	Print("Waited for " + std::to_string(timerSeconds) + " seconds.");

	system("pause");
	return 0;
}