//
// Created by berkant on 30.11.2016.
//

#ifndef DENEME2_DENEME3_H
#define DENEME2_DENEME3_H

#endif //DENEME2_DENEME3_H

#include <iostream>
using namespace std;


class teacher{
    friend class teacher_list;
    char *name;
    int age,numOfStudents;
    teacher * next; // Pointer to next object of teacher
public:
    teacher(char *, int, int); // Constructor
    void print();
    char *getName(){return name;}
    ~teacher() // Destructor
    {
        cout<<" Destructor of teacher" << endl;
        delete name;
    }
};
/* linked list for teachers */
class teacher_list{
    teacher *head;
public:
    teacher_list(){head=0;}
    char append(char *,int,int);
    char del(char *);
    void print();
};