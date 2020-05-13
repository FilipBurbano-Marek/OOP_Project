#ifndef PLANER_H
#define PLANER_H

#include <string>


class BaseTask
{
	private:
		std::string name;
		std::string description;
		std::string unit;
		int progress;
		int goal;

	public:
		BaseTask(std::string n, std::string desc, std::string u, int g); // name, desc, unit, goal
		void printStatus();
		void addProgress(int count);
		void saveToFile();

};

#endif
