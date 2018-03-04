// QSET Command Queue (implemented using a priority queue)

#include <queue>
#include <function>

enum class CommandType {
	Payload1(),
    Payload2()
};

// these are the objects that are going to be held by the queue
class Command {
    
    // thinking don't need priority because only executing left over calls to
    // payloads
	//int priorityRating; // 1 = high, 2 = medium, 3 = low
    
	CommandType type;
    
	//std::function<void()> func;

	//void (*function)(void);

	time_t timeAddedToQueue;

};


class CommandManager {
    
    // WILL ONLY NEED ONE QUEUE...SEE ABOVE
    // ground input will go here
	//std::queue<Command> highPriority;
    // everything else goes into either medium or low priority queue 
    // if it needs to be executed now
	//std::queue<Command> mediumPriority;
	std::queue<Command> lowPriority;

    /*
	bool addCommand(Command cmd) {
		if (cmd.priorityRating == 1)
			highPriority.push(cmd);
		else if (cmd.priorityRating == 2)
			mediumPriority.push(cmd);
		else
			lowPriority.push(cmd);
	}
    */
    
    bool addCommand(Command cmd) {
        lowPriority.push(cmd);
    }
    
    Command executeTopCommand() {
        Command command;
        if (lowPriority.empty()) {  // if the queues are empty, run DefaultMode() always
            command = DefaultMode();
        } else {
            command = lowPriority.pop();
        }
        return command;
    }
    
    /*
	Command executeTopCommand() {
		Command command;
		if (!highPriority.empty())
			command = highPriority.pop();
		else if (!mediumPriority.empty())
			command = mediumPriority.pop();
		else if (!lowPriority.empty())
			command = lowPriority.pop();
		return command;
	}
    */
    
    

	// need to add a function that [CHANGES THE PRIORITY AND ADDS TO HIGHER QUEUE] 
    // executes a command in the medium priority queue if it has been waiting in 
    // the queue for X time

};