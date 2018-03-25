// C++ file for simple first attempt Command Manager
#include "CommandManager.h"

CommandManager::CommandManager()
{
	
}

void CommandManager::addCommand(Command cmd)
{
	_lowPriority.push(cmd);
}

void CommandManager::executeTop()
{
	// eventually want to default to default mode but for now this will do
	if (!_lowPriority.empty())
	{
		Command cmd = _lowPriority.front();
		cmd.run();
		_lowPriority.pop();
	}
}
