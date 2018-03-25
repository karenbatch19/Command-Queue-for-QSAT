// Very simple Command Manager... just FIFO with no time limits
#include <queue>
#include "Command.h"

class CommandManager {
	public:
		CommandManager();
		void addCommand(Command cmd);
		void executeTop();
	private:
		std::queue<Command> _lowPriority;
};
