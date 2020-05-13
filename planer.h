#ifndef PLANER_H
#define PLANER_H

#include <string>

class Activity
{
	protected:
		std::string name;
		int progress;
	public:
		Activity();
		Activity(std::string);
		void addProgress(int);
		void setName(std::string);
		void setProgress(int);

};


class BaseTask : public Activity
{
	protected:
		std::string description;
		std::string unit;
		int goal;
		std::string date;
	public:
		BaseTask(std::string, std::string, std::string, int, std::string); // name, desc, unit, goal
		BaseTask();
		void printStatus();
		void saveToFile();
		void setDescription(std::string);
		void setUnit(std::string);
		void setGoal(int);
		void setDate(std::string);

};

#endif
