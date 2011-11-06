/* 
 * File:   addclass.cpp
 * Author: davidbethke
 *
 * Created on Nov 6, 2011, 2:18:08 PM
 */

#include <stdlib.h>
#include <iostream>
#include "Student.h"

/*
 * Simple C++ Test Suite
 */

void testAddClass() {
    Student* first=NULL;
    Student* last=NULL;
    Student* temp=NULL;
    addClass(first, last);
    temp=getStudent("student6",first);
    if (temp->name != "student6") {
        std::cout << "%TEST_FAILED% time=0 testname=testAddClass (addclass) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% addclass" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testAddClass (addclass)" << std::endl;
    testAddClass();
    std::cout << "%TEST_FINISHED% time=0 testAddClass (addclass)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

