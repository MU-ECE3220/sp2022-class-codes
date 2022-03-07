#include "MyTemplateClass.hpp"
#include "Teacher.hpp"
#include "Student.hpp"

// using namespace std;

// override operator



std::ostream& operator<<(std::ostream &strm, const Student &s) {
	return strm << "Student(" << s.getStudentName() << ", " << s.getStudentID() << ", " << s.getStudentGPA() << ")";
}

std::ostream& operator<<(std::ostream &strm, const Teacher &t) {
	return strm << "Teacher(" << t.getTeacherName() << ", " << t.getTeacherID() << ")";
}

int main() {
    
	MyTemplateClass<std::string> mt1("name");
	std::cout << mt1.getElement() << std::endl;

	Teacher t1;
	t1.setTeacherName("Ekincan");
	t1.setTeacherID(123);

	MyTemplateClass<Teacher> mt2(t1);
	std::cout << mt2.getElement() << std::endl;

	Student s1;
	s1.setStudentName("John");
	s1.setStudentID(101);
	s1.setStudentGPA(4.00);

	MyTemplateClass<Student> mt3(s1);
	std::cout << mt3.getElement() << std::endl;
	

	return EXIT_SUCCESS;
}