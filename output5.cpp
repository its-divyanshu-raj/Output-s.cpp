/* What is the output

What will be the output of the following code ?
#include <iostream>
using namespace std;
#include <cstring>

class Student{
    public :
    char *name;
    int rollNo;

    // Constructor 1
    Student(int num){
        rollNo = num;
        name = new char[10];
        strcpy(name, "abc");
    }

    // Constructor 2
    Student(int num, char *str){
        rollNo = num;
        name = new char[strlen(str) + 1];
        strcpy(name, str);
    }

    void print(){
        cout << name << " "  <<  rollNo << " ";
    }
};

int main() {
    Student s1(101);
    s1.print();
    char str[] ="xyz";
    Student *s2 = new Student(150, str);
    s2 -> print();
} */

Options
This problem has only one correct answer
Error
GarbageValue 101 xyz 150
abc 101 xyz 150 
None

Correct Answer - abc 101 xyz 150 
