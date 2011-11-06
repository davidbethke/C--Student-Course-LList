/* 
 * File:   Course.h
 * Author: davidbethke
 *
 * Created on November 6, 2011, 1:17 PM
 */

#ifndef COURSE_H
#define	COURSE_H
#include <string>
using namespace std;
struct Course{
    string name;
    int hours;
    string grade;
    Course *next;
    Course(string n="",int h=0,string g="",Course *p=NULL):name(n),hours(h),grade(g),next(p){}
   
            
};

#endif	/* COURSE_H */

