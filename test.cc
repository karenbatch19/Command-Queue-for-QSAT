// Running tests on the Command Manager class
#include "CommandManager.h"

int main()
{
	Command cmd1(1);
	Command cmd2(2);
	Command cmd3(3);
	CommandManager cmdMan;

	cmdMan.addCommand(cmd2);
	cmdMan.addCommand(cmd1);
	cmdMan.addCommand(cmd3);

	cmdMan.executeTop();
	cmdMan.executeTop();
	cmdMan.executeTop();
}
