#include "planer.h"

#include <string>
#include <iostream>
#include <fstream>



Activity::Activity()
{
	progress = 0;
}

Activity::Activity(std::string n)
{
	name = n;
	progress = 0;
}

void Activity::addProgress(int n)
{
	progress += n;

}

void Activity::setName(std::string n)
{
	name = n;
}

void Activity::setProgress(int p)
{
	progress = p;
}


////////////////////


BaseTask::BaseTask()
{

}

BaseTask::BaseTask(std::string n, std::string desc, std::string u, int g, std::string dat)
{
	name = n;
	description = desc;
	unit = u;
	goal = g;
	progress = '0';
	date = dat;
}

void BaseTask::printStatus()
{
	std::cout  << name << " | " << description << " | " << progress << " " <<	" / " << goal << " " << unit << " | " << date << "\n\n";
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
	file << date << std::endl;

	file.close();
}

void BaseTask::setDescription(std::string desc)
{
	description = desc;
}

void BaseTask::setUnit(std::string u)
{
	unit = u;
}

void BaseTask::setGoal(int g)
{
	goal = g;
}

void BaseTask::setDate(std::string dat)
{
	date = dat;
}

