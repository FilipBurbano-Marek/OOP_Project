#ifndef PLANER_H
#define PLANER_H

#include <string>


class BaseTask
{
	public:
		std::string name;
		std::string description;
		std::string unit;
		std::string progress;
		std::string goal;

		BaseTask(std::string n, std::string desc, std::string u, std::string g); // name, desc, unit, goal
		BaseTask();
		void printStatus();
		void addProgress(int count);
		void saveToFile();

};

#endif
