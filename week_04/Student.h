#include<iostream>

using namespace std;

class Student {
	private:
		string _name;
		int _age;
	public:
		void setName(string name);
		void setAge(int age);
		int getAge();
		string getName();
		Student();
		Student(string name, int age);
		Student(Student &s);
		// Add Destructor
		~Student();
};
