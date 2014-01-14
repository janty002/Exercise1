# include "Employee.h"
# include "Manager.h"
# include <iostream>
# include <string.h>
using namespace std;

Employee::Employee(int id, char* name){
	ID = id;
	_name = new char[strlen(name) + 1];
	strcpy(_name, name);
	boss = 0;
	hour = 0;	
}
Employee::~Employee(){
	if (_name){
		delete[] _name;
	}
}
void Employee::setBoss(Manager* newBoss){
	boss = newBoss;
}
void Employee::work(int numOfHours){
	hour = numOfHours;
}
void Employee::report(){
	if (boss){
		boss->getWorKerHours(this);
		hour = 0;
	}
}
int Employee::getId(){
	return ID;
}
int Employee::getHours(){
	return hour;
}
char* Employee::getName(){
	return _name;
}
void display(){}