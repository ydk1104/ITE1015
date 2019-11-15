#include<iostream>
#include<vector>
#include"clock_time.h"

int main(void){
	int tick;
	std::cin >> tick;
	std::vector<Clock*> clocks = {new SundialClock(0, 0, 0), new CuckooClock(0, 0, 0), new GrandFatherClock(0, 0, 0), new WristClock(0, 0, 0), new AtomicClock(0, 0, 0)};
	for(const auto& i : clocks) i->reset();
	std::cout << "Reported clock times after resetting.\n";
	for(const auto& i : clocks) i->displayTime();

	std::cout << "\nRunning the clocks...\n\n";
	while(tick--) for(const auto& i : clocks) i->tick();
	std::cout << "Reported clock times after running:\n";
	for(const auto& i : clocks) i->displayTime();
	for(const auto& i : clocks) delete i;
}
