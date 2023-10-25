#include "Patient.h"

//precondition:
//postcondition:
Patient::Patient() : priority(0),checkedInTime(0),name("unknown"), age(0), gender('u'),admittedTime(0) {}

//precondition: going to get the checkedInTime 
//postcondition: going to return the private checkedInTime
unsigned int Patient::getCheckedInTime() const{
	return checkedInTime;
}
//precondition: going to get the new checkedInTime
//postcondition: going to set the private checkedInTime with the new checkedInTime member
void Patient::setCheckedInTime(unsigned int newT){
	checkedInTime = newT;
}

//precondition: going to get the priority 
//postcondition: going to return the private priority
int Patient::getPriority() const{
	return priority;
}
//precondition: going to get the new priority
//postcondition: going to set the private priority with the new priority member
void Patient::setPriority(int newPriority){
	priority = newPriority;
}

//precondition: going to get the name 
//postcondition: going to return the private name
string Patient::getName() const{
	return name;
}
//precondition: going to get the new name
//postcondition: going to set the private name with the new name member
void Patient::setName(string newName){
	name = newName;
}

//precondition: going to get the age 
//postcondition: going to return the private age
int Patient::getAge() const{
	return age;
}

//precondition: going to get the new age
//postcondition: going to set the private age with the new age member
void Patient::setAge(int newAge){
	age = newAge;
}

//precondition: going to get the gender 
//postcondition: going to return the private gender
char Patient::getGender() const{
	return gender;
}
//precondition: going to get the new gender
//postcondition: going to set the private gender with the new gender member
void Patient::setGender(char newGender){
	gender = newGender;
}

//precondition:
//postcondition:
bool operator<(const Patient& P1, const Patient& P2){
	return P1.priority < P2.priority;
}
//precondition: 
//postcondition:
string Patient::ER_description[5] = { "Stable, with no resources anticipated or prescriptions", "Stable, with only one type of resource anticipated " ,"Stable, with multiple types of resources needed to investigate or treat", "High risk of deterioration, or signs of a time-critical problem", "Immediate, life-saving intervention required without delay" };

//precondition:
//postcondition:
ostream& operator<<(ostream& outs, const Patient& obj){
	outs << "ER level: " << obj.getPriority() << " - " << obj.ER_description[obj.getPriority() - 1] << '\n';
	outs << "\t\t\tChecked-In time: " << obj.getCheckedInTime() << '\n';
	outs << "\t\t\tPatient's name: " << obj.getName() << '\n';
	outs << "\t\t\tPatient's age: " << obj.getAge() << '\n';
	outs << "\t\t\tPatient's gender: " << obj.getGender() << '\n';
	return outs;
}

//precondition:
//postcondition:
void Patient::menuInformation(){
	system("cls");
	cout << "\n\t2> Simulation of an emergency room (ER) using priority queue STL\n";
	do{
		cout << "\n\t\t A> Register a patient";
		cout << "\n\t\t B> Transfer patient(s) to the designation";
		cout << "\n\t\t C> Display transferred patients";
		cout << "\n\t\t 0> return\n";
		switch (toupper(inputChar("\t\t Option: ", "ABC0"))){
		case 'A':{
			Patient patient;
			string name;
			cout << "\n\t\tEnter the patient's name: ";
			getline(cin, name);
			patient.setName(name);
			patient.setAge(inputInteger("\t\tEnter the patient's age: ", true));
			patient.setCheckedInTime(time(0));
			patient.setGender(toupper(inputChar("\t\tChoose the patient's gender (F-female or M - male) : ", 'F', 'M')));
			patient.setPriority(inputInteger("\t\tChoose the ER level 1)Non-urgent, 2)Less Urgent, 3)Urgent, 4)Emergent, or 5)Resuscitation: ", 1, 5));
			pq2.push(patient); // enqueue
			cout << "\n\t\tPatient information has been registered.\n";
		}
				break;
		case 'B':{
			//check if its empty first
			if (pq2.empty()){
				cout << "\n\t\tNo register patient to transfer to the designation.\n";
				break;
			}
			if (pq2.top().getPriority() == 5) {
				submit.push(pq2.top());
				cout << "\n\t\t" << pq2.top().getName() << " - transfers to ICU...\n";
				pq2.pop(); // dequeue
				break;
			}
			else if (pq2.top().getPriority() == 4) {
				submit.push(pq2.top());
				cout << "\n\t\t" << pq2.top().getName() << " - transfers to surgery room...\n";
				pq2.pop();
				break;
			}
			else if (pq2.top().getPriority() == 3) {
				submit.push(pq2.top());
				cout << "\n\t\t" << pq2.top().getName() << " - transfers to emergency room...\n";
				pq2.pop();
				break;
			}
			else if (pq2.top().getPriority() == 2) {
				submit.push(pq2.top());
				cout << "\n\t\t" << pq2.top().getName() << " - transfers to xray lab...\n";
				pq2.pop();
				break;
			}
			else if (pq2.top().getPriority() == 1) {
				submit.push(pq2.top());
				cout << "\n\t\t" << pq2.top().getName() << " - examines and gives prescription...\n";
				pq2.pop();
				break;
			}
		}
				break;
		case 'C':{
			//check if its empty first (the vector data)
			if (submit.empty()){
				cout << "\n\t\tNo patient has been transferred.\n";
				break;
			}
			//COPY PRIORITY QUEUE
			copy = submit;

			cout << "\n";
			for (int i = 0; i < submit.size(); i++) {
				cout << "\t\t" << i + 1 << " - " << copy.top()<< '\n';
				copy.pop();
			}
		}
				break;
		case '0': {
			return;
		}
		}
	} while (true);
}