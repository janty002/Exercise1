# include <iostream>
# include "Manager.h"
# include "Employee.h"
using namespace std;

Manager::Manager(){
	totalHours = 0;
}
void Manager::getWorKerHours(Employee* emp){
	cout << "Employee #" << emp->getId() << " has logged " 
		 << emp->getHours() << " hours..." << std::endl;
	cout << "Thanks " << emp->getName() << "!" << std::endl << std::endl;
	totalHours += emp->getHours();
}
void Manager::report(){
	cout << "A total of " << totalHours 
		<< " have been logged by employees since the last report." << std::endl << std::endl;
	totalHours = 0;
}