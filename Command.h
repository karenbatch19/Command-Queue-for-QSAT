// Mock-up Command class header for testing purposes
class Command
{
	public:
		Command(int id);
		bool run();
		// Getters and setters...
		int getId();
		int getPriority();
		void setId(int id);
		void setPriority(int priority);
	private:
		int _id;
		int _priority;
		int _date; // not using this for now
};
