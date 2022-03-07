#include <string>
class Student {
	private:
		std::string _studentName;
		int _studentID;
		double _studentGPA;
	public:		
		Student();
		std::string getStudentName()const;
		int getStudentID()const;
		double getStudentGPA()const;
		
		void setStudentName(std::string name);
		void setStudentID(int id);
		void setStudentGPA(double gpa);
};