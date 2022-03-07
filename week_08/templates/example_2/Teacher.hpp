#include <string>

class Teacher {
	private:
		std::string _teacherName;
		int _teacherID;
	public:		
		Teacher();

		std::string getTeacherName()const;
		int getTeacherID()const;
		
		void setTeacherName(std::string name);
		void setTeacherID(int id);
};