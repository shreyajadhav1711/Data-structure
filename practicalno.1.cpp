#include <iostream>
#include <string>
using namespace std;


struct Student {
    int rollNumber;
    string name;
    float marks;
};

int main() {
    const int MAX_STUDENTS = 100;
    Student students[MAX_STUDENTS];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    
    if (n <= 0 || n > MAX_STUDENTS) {
        cout << "Invalid number of students!" << endl;
        return 1;
    }

   
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";

        cout << "Roll Number: ";
        cin >> students[i].rollNumber;

        cin.ignore(); 

        cout << "Name: ";
        getline(cin, students[i].name);

        cout << "Marks: ";
        cin >> students[i].marks;
    }

   
    cout << "\n=====================================\n";
    cout << "        STUDENT RECORDS\n";
    cout << "=====================================\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << students[i].rollNumber << endl;
        cout << "Name        : " << students[i].name << endl;
        cout << "Marks       : " << students[i].marks << endl;
    }

    return 0;
}

