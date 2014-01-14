class Manager;
class Employee{
private:
	int ID;
	char* _name;
	Manager* boss;
	int hour;
protected:
public:
	Employee(int id, char*name);
	~Employee();
	void setBoss(Manager* newBoss);
	void work(int numOfHour);
	void report();
	int getHours();
	int getId();
	char* getName();
};