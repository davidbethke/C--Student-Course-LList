
#include <iostream>
#include "Student.h"
#include "Course.h"

using namespace std;

void addAllStudentsToCourse(Course*c, Student*f){
    while(f != NULL ){
        //f->addCourse(c);
        f->addCourse(new Course(*c));

        f=f->next;
    }
}

Student * getStudentsInCourse(string name, Student*f){
    Student *subListFirst=NULL,*subListLast=NULL;
    while(f != NULL){
        if(f->hasCourse(name)){
            
            addStudent(new Student(f->name,f->first),subListFirst,subListLast);
        }
        
        f=f->next;
            
    }
    return subListFirst;
    
}
bool Student::hasCourse(const string& n){
    Course *temp;
    temp=first;
    bool result=false;
    
    while(temp != NULL)
    {
        if(temp->name == n){
           // cout<<"Has course"<<endl;
            result=true;
        }
        temp=temp->next;
    }
    return result;
}
void addClass(Student*&f, Student*&l){
    addStudent(new Student("dave"),f,l);
    addStudent(new Student("kitty"),f,l);
    addStudent2(new Student("dave2"), &f,&l);
    addStudent(new Student("target"),f,l);
    addStudent(new Student("toney"),f,l);
    addStudent(new Student("student1"),f,l);
    addStudent(new Student("student6"),f,l);
    addStudent(new Student("student7"),f,l);
    addStudent(new Student("student2"),f,l);
    addStudent(new Student("student3"),f,l);
    addStudent(new Student("student4"),f,l);
    addStudent(new Student("student5"),f,l);

}
void addStudent(Student *s, Student *&f, Student *&l){
    if(f == NULL)
    {
        //cout <<"Initializing first pointer"<<endl;
        f=s;
    }
    else
        l->next=s;
    l=s;
}
Student * getStudent(string n,Student *f){
    Student *temp=NULL;
    while(f!=NULL){
        if(f->name == n){
            return f;
        }
        else
            f=f->next;
    }
    return temp;
    
}
void Student::addCourse(Course*c){
    
    if(first == NULL)
        first=c;
    else
        last->next=c;
    last=c;
        
}
void Student::printCourse(){
    Course *temp;
    temp=first;
    std::cout << name<<" ----CourseList---"<<endl;
    while(temp !=NULL)
    {
        cout << "-----"<<endl;
        cout << "Course:"<<temp->name<<endl;
        cout << "Hours:"<<temp->hours<<endl;
        cout << "Grade:"<<temp->grade<<endl;
        temp=temp->next;
        
    }
    cout <<"-----"<<endl;
}
void insertAt(Student*c, Student*f, int pos){
    if(f== NULL){
        std::cout << "Empty List"<<endl;
        return;
    }
    for(int i=0; i<pos;++i){
        f=f->next;
    }
    c->next=f->next;
    f->next=c;
}
void addStudent2(Student *s, Student **f, Student **l){
    if(*f==NULL)
        *f=s;
    else
        (*l)->next=s;
    *l=s;
}
void addFirstStudent(Student*&f){
    f= new Student("First");
    std::cout << "adding first:"<< f->name<<endl;
}
void print(Student *f){
    std::cout << "List --"<<endl;
    while(f!=NULL)
    {
        //cout << "Looping"<<endl;
        cout << f->name<<endl;
        f= f->next;
    }
    cout << "End --"<<endl;
}

