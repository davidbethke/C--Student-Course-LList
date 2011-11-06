/* 
 * File:   StudentTests.cpp
 * Author: davidbethke
 *
 * Created on Nov 6, 2011, 2:08:35 PM
 */

#include <stdlib.h>
#include <iostream>
#include "Student.h"
#include "Course.h"


/*
 * Simple C++ Test Suite
 */

void testAddCourse() {
    Course p0("Course1");
    Student student;
    student.addCourse(&p0);
    
    
    if (student.first->name!= "Course1") {
        
        std::cout << "%TEST_FAILED% time=0 testname=testAddCourse (StudentTests) message=error message sample" << std::endl;
    }
}

void testHasCourse() {
    Course c("Course1");
    Student student;
    student.addCourse(&c);
    bool result = student.hasCourse(c.name);
    if (!result) {
        std::cout << "%TEST_FAILED% time=0 testname=testHasCourse (StudentTests) message=error message sample" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% StudentTests" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testAddCourse (StudentTests)" << std::endl;
    testAddCourse();
    std::cout << "%TEST_FINISHED% time=0 testAddCourse (StudentTests)" << std::endl;

    std::cout << "%TEST_STARTED% testHasCourse (StudentTests)" << std::endl;
    testHasCourse();
    std::cout << "%TEST_FINISHED% time=0 testHasCourse (StudentTests)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

