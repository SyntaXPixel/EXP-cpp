#include <iostream>
#include <string>

using namespace std;

class COURSE {
private:
    string CourseName;
    string CourseCode;
    int Credits;
    int MaxStudents;
    string* StudentsList;

public:

    void setInfo() {
        cout << "Enter Course Name" << endl;
        cin >> CourseName;

        cout << "Enter Course Code" << endl;
        cin >> CourseCode;

        cout << "Enter Credits" << endl;
        cin >> Credits;

        cout << "Enter Credits" << endl;
        cin >> Credits;

        cout << "Enter Max Students" << endl;
        cin >> MaxStudents;

        StudentsList = new string[MaxStudents];
    }
}
   
