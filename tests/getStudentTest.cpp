/* 
 * File:   newsimpletest.cpp
 * Author: davidbethke
 *
 * Created on Nov 6, 2011, 1:26:59 PM
 */

#include <stdlib.h>
#include <iostream>
#include </Users/davidbethke/NetBeansProjects/linky_1/Student.h>
#include </Users/davidbethke/NetBeansProjects/linky_1/Course.h>

/*
 * Simple C++ Test Suite
 */
using namespace std;

void test1() {
    std::cout << "test getStudent test 1" << std::endl;
    Student *first=NULL, *last=NULL,*temp=NULL;
    addStudent(new Student("dave"),first,last);
    temp=getStudent("dave",first);
    if(temp->name == "dave")
        std::cout << "%TEST_PASSED% time=0 testname=test1 (getStudent) message=error message sample" << std::endl;
    
    else
        std::cout << "%TEST_FAILED% time=0 testname=test1 (getStudent) message=error message sample" << std::endl;
    
    
    
}


int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% getStudent" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% test1 (getStudent)" << std::endl;
    test1();
    std::cout << "%TEST_FINISHED% time=0 test1 (getStudent)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

