#include "planer.h"

#include <string>
#include <iostream>
#include <fstream>

BaseTask::BaseTask()
{

}

BaseTask::BaseTask(std::string n, std::string d, std::string u, std::string g)
{
	name = n;
	description = d;
	unit = u;
	goal = g;
	progress = '0';
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

