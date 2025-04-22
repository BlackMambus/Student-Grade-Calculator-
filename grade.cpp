#include <iostream>
#include <string>
using namespace std;

char calculateGrade(float average) 
{
    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}

int main() 
{
    string studentName;
    int numSubjects;

    cout << "Enter student's name: ";
    getline(cin, studentName);

    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    float total = 0;
    for (int i = 1; i <= numSubjects; i++) {
        float mark;
        cout << "Enter marks for subject " << i << ": ";
        cin >> mark;

        while (mark < 0 || mark > 100) {
            cout << "Invalid mark. Please enter a value between 0 and 100: ";
            cin >> mark;
        }

        total += mark;
    }

    float average = total / numSubjects;
    char grade = calculateGrade(average);

    cout << "\n--- Report Card ---" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

