#include "planer.h"

#include <string>
#include <iostream>
#include <fstream>

<<<<<<< HEAD
BaseTask::BaseTask()
{

}

BaseTask::BaseTask(std::string n, std::string d, std::string u, std::string g)
=======
BaseTask::BaseTask(std::string n, std::string d, std::string u, int g)
>>>>>>> 495b627ade366d14dbda5a66b935cae4a848d75a
{
	name = n;
	description = d;
	unit = u;
	goal = g;
<<<<<<< HEAD
	progress = '0';
=======
	progress = 0;
>>>>>>> 495b627ade366d14dbda5a66b935cae4a848d75a
}

void BaseTask::printStatus()
{
	std::cout << "Name: " << name << "\nDescription: " << description << "\nStatus: " << progress << " " << unit <<	" / " << goal << " " << unit << "\n\n";
}

void BaseTask::addProgress(int count)
{
	progress += count;
}

void BaseTask::saveToFile()
{
	std::ofstream file;
	file.open("data.txt", std::ios::app);
	file << name << std::endl;
	file << description << std::endl;
	file << unit << std::endl;
	file << progress << std::endl;
	file << goal << std::endl;

	file.close();
}

