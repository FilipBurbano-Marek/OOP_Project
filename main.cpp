#include "planer.h"

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

int main (int argc, char *argv[])
{
	std::vector<BaseTask> tasks;

	BaseTask task;

	std::fstream data;
	data.open("data.txt");
	if (data.is_open())
	{
		std::string line;
		while (!data.eof())
		{
			std::string line;

			getline(data, line);
			if (line == "") break;
			task.setName(line);
	
			getline(data, line);
			task.setDescription(line);
	
			getline(data, line);
			task.setUnit(line);
		
			getline(data, line);
			task.setProgress(std::stoi(line));
	
			getline(data, line);
			task.setGoal(std::stoi(line));

			getline(data, line);
			task.setDate(line);
	
			tasks.push_back(task);
	
			//debug
			std::cout << "Imported task content: \n";
			task.printStatus();
	
		}

	}

	data.close();

	//debug
	std::cout << "Loaded " << tasks.size() << " tasks.\n\n";
	
	tasks[0].setName("lul");
	tasks[0].setDescription("asdasd");
	tasks[0].setProgress(16);
	tasks[0].addProgress(100);
	tasks[0].setUnit("times");
	tasks[0].setGoal(117);
	tasks[0].setDate("date");
	tasks[0].printStatus();

	//main loop
	return 1;
}



