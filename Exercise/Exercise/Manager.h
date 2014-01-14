class Employee;
class Manager{
private:
	int totalHours;
protected:
public:
	Manager();
	void getWorKerHours(Employee* emp);
	void report();
	void display();
};