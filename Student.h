/* 
 * File:   Student.h
 * Author: davidbethke
 *
 * Created on November 6, 2011, 1:19 PM
 */

#ifndef STUDENT_H
#define	STUDENT_H
#include <string>

using namespace std;
struct Course;
struct Student {
        string name;
        Student *next;
        Student(string n="",Course *f=NULL, Course*l=NULL,Student *p=NULL):name(n),first(f),last(l),next(p){}
        Course *first, *last;
        void addCourse(Course *);
        void printCourse();
        bool hasCourse(const string&);
};



    
    void addStudent(Student*,Student*&,Student*&);
    void addStudent2(Student *, Student **, Student **);
    void addFirstStudent(Student*&);
    Student * getStudent(string,Student*);
    void insertAt(Student *,Student *, int);
    void print(Student*);
    void addClass(Student*&,Student*&);
    void addAllStudentsToCourse(Course *,Student *);
    Student* getStudentsInCourse(string,Student *);
    
    
#endif	/* STUDENT_H */

