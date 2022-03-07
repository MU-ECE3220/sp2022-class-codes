#include "Student.hpp"

Student::Student(){
    //...
}

std::string Student::getStudentName() const {
    return _studentName;
}

int Student::getStudentID() const {
    return _studentID;
}

double Student::getStudentGPA() const {
    return _studentGPA;
}
		
void Student::setStudentName(std::string name) {
    _studentName = name;
}
		
void Student::setStudentID(int id) {
    _studentID = id;
}
		
void Student::setStudentGPA(double gpa) {
    _studentGPA = gpa;
}