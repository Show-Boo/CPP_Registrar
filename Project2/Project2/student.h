#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "schedule.h"
using namespace std;


#ifndef STUDENT_H
#define STUDENT_H


class Student {
private:
    string name;
    Schedule schedule;

public:
    Student(const string& name);
    Schedule& getSchedule();
    string getName() const;
    void print() const;
};

#endif

Student::Student(const string& name) : name(name) {} /* 수강과목 최대치 설정 */

Schedule& Student::getSchedule() {
    return schedule;
}

string Student::getName() const {
    return name;
}

void Student::print() const {
    cout << "Student Name: " << name << endl;
    schedule.print();
}