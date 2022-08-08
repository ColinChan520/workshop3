#include<iostream>
#include <iomanip>
using namespace std;

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

int main() {

    //first we initialize all arrays as specified in the question
    string courses[4] = {"Comiler Design", "Machine Learning", "Computer Network", "Database Management"};

    int totalStudents = 6;            //this defines the rows in the report_card array 

    string students[totalStudents] = {"Josheph Alderson", "Sia Jorden", "Mikhayl Wek", "Akimov Dyaltov", "Maria Moses", "John walker"};

    int report_card[totalStudents][4] = {{78, 56, 67, 89}, {98, 93, 94, 99}, {73, 87, 69, 80}, {97, 93, 94, 99}, {78, 56, 81, 79}, {57, 63, 74, 59}};

    //now call the method to print the information in specified format

    print_class(courses, students, report_card, totalStudents);

    cout << endl;
    return 0;
}

//following is the implementation of the print_class method

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents) {

    //fist print the first line
    cout << "\nReport Card\n" << endl;
    
    //now we prepare the header of our table
    cout << setw(20) << "Student Name ";

    for (int i = 0; i < 4; i++) {
        cout << setw(24) << courses[i] << " ";
    }

    cout << endl;

    //now we iterate to print the information in report_card and students array

    for (int i = 0; i < nstudents; i++) {
        //first we print the students name
        cout << "\n" << setw(20)<< students[i];

        //then we print the marks for this student
        for (int j = 0; j < 4; j++) {
            cout << setw(24)<< report_card[i][j] << " ";
        }
        
        //changing the line
        cout << endl;
    }

}