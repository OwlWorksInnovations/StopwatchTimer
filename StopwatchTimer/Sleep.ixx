#include <thread>
#include <chrono>
#include <string>

export module Sleep;

import Print;

export void Sleep(int seconds, bool printInfo = false) {

	if (printInfo) {
		std::string infoText = "Waiting for " + std::to_string(seconds) + " seconds";
		PrintFlush(infoText);
	}

	std::this_thread::sleep_for(std::chrono::seconds(seconds));

	if (printInfo) {
		Print("Finished waiting");
	}
};