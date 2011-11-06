/* 
 * File:   main.cpp
 * Author: davidbethke
 *
 * Created on November 4, 2011, 12:01 PM
 */

#include <iostream>
#include "Student.h"
#include "Course.h"

using namespace std;

/*
 * 
 */




int main(int argc, char** argv) {
    Student *first=NULL,*last=NULL,*temp;
     addClass(first,last);
     addAllStudentsToCourse(new Course("Orientation",1),first);
    
    first->addCourse(new Course("C++",3,"A"));
    first->addCourse(new Course("SBM",3,"A"));
    first->addCourse(new Course("Goofing Off",3,"A"));
    insertAt(new Student("doggy"),first,1);
   
        temp=getStudent("toney",first);
        if(temp !=NULL)
        {
            temp->addCourse(new Course("Meowing",2,"A"));
            temp->addCourse(new Course("Eating",3,"A"));
            temp->printCourse();
        }
        else
            cout << "Toney not found"<<endl;

    getStudent("kitty",first)->addCourse(new Course("licking"));
   
    getStudent("target",first)->addCourse(new Course("purring",2,"C"));
    getStudent("target",first)->addCourse(new Course("licking",2,"C"));

    getStudent("student1",first)->addCourse(new Course("student stuff"));
    
    temp=NULL;
     cout << "Students in course licking"<<endl;
    temp=getStudentsInCourse("licking",first);
   
    print(temp);
    
    return 0;
}
