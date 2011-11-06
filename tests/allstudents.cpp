/* 
 * File:   allstudents.cpp
 * Author: davidbethke
 *
 * Created on Nov 6, 2011, 2:20:38 PM
 */

#include <stdlib.h>
#include <iostream>
#include "Student.h"
#include "Course.h"

/*
 * Simple C++ Test Suite
 */

void testAddAllStudentsToCourse() {
    Course c("Course1");
    Student *first=NULL,*last=NULL,*temp=NULL;
    addClass(first,last);
    
    addAllStudentsToCourse(&c, first);
    temp=getStudent("student5",first);
    if (!(temp->hasCourse("Course1"))) {
        std::cout << "%TEST_FAILED% time=0 testname=testAddAllStudentsToCourse (allstudents) message=error message sample" << std::endl;
    }
}

void testGetStudentsInCourse() {
    Course c("Course1");
    Course c2("Course2");
    Student s1("student1"),s2("student2"),s3("student3");
    Student *first=NULL, *last=NULL;
    s1.addCourse(&c);
    s2.addCourse(&c);
    s3.addCourse(&c2);
    addStudent(&s1,first,last);
    addStudent(&s2,first,last);
    addStudent(&s3,first,last);

    Student* result = getStudentsInCourse("Course1", first);
    
    if (!((result->name == "student1") && (result->next->name == "student2")&& (result->next->next)== NULL)) {
        std::cout << "%TEST_FAILED% time=0 testname=testGetStudentsInCourse (allstudents) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% allstudents" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testAddAllStudentsToCourse (allstudents)" << std::endl;
    testAddAllStudentsToCourse();
    std::cout << "%TEST_FINISHED% time=0 testAddAllStudentsToCourse (allstudents)" << std::endl;

    std::cout << "%TEST_STARTED% testGetStudentsInCourse (allstudents)" << std::endl;
    testGetStudentsInCourse();
    std::cout << "%TEST_FINISHED% time=0 testGetStudentsInCourse (allstudents)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

