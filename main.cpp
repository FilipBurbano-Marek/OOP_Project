#include "planer.h"

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

int main (int argc, char *argv[])
{
	std::vector<BaseTask> tasks;

<<<<<<< HEAD
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
			task.name = line;
	
			getline(data, line);
			task.description = line;
	
			getline(data, line);
			task.unit = line;
		
			getline(data, line);
			task.progress = line;
	
			getline(data, line);
			task.goal = line;
	
			tasks.push_back(task);
	
			//debug
			std::cout << "Task import success, printing content: \n";
			task.printStatus();
			//debug end
	
		}

	}

	data.close();
=======
	std::fstream data;
	data.open("data.txt");
	while (!data.eof())
	{
	
	}

>>>>>>> 495b627ade366d14dbda5a66b935cae4a848d75a

	//main loop
	return 1;
}
