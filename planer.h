#ifndef PLANER_H
#define PLANER_H

#include <string>


class BaseTask
{
<<<<<<< HEAD
	public:
		std::string name;
		std::string description;
		std::string unit;
		std::string progress;
		std::string goal;

		BaseTask(std::string n, std::string desc, std::string u, std::string g); // name, desc, unit, goal
		BaseTask();
=======
	private:
		std::string name;
		std::string description;
		std::string unit;
		int progress;
		int goal;

	public:
		BaseTask(std::string n, std::string desc, std::string u, int g); // name, desc, unit, goal
>>>>>>> 495b627ade366d14dbda5a66b935cae4a848d75a
		void printStatus();
		void addProgress(int count);
		void saveToFile();

};

#endif
