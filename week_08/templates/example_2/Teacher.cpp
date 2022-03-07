#include "Teacher.hpp"

Teacher::Teacher(){
    //...
}

std::string Teacher::getTeacherName() const {
    return _teacherName;
}
		
int Teacher::getTeacherID() const {
    return _teacherID;
}
		
void Teacher::setTeacherName(std::string name) {
    _teacherName = name;
}

void Teacher::setTeacherID(int id) {
    _teacherID = id;
}