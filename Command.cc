// Mock-up Command class testing purposes
#include <iostream>
#include "Command.h"

Command::Command(int id)
{
	setId(id);
	setPriority(1);
}

bool Command::run()
{
	std::cout << "Command #" << _id << " is running.\n";
	return 1;
}

int Command::getId()
{
	return _id;
}

int Command::getPriority()
{
	return _priority;
}

void Command::setId(int id)
{
	_id = id;
}

void Command::setPriority(int p)
{
	_priority = p;
}

