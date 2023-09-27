#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "roster.h"
using namespace std;

#ifndef COURSE_H
#define COURSE_H
class Course {
private:
    string courseName;
    int units;
    Roster roster;
    int MaxStudent;
    int CurrentStudent;

public:
    Course(const string& courseName, int units);
    Roster & getRoster();
    string getCourseName() const;
    void print() const;
};

#endif


Roster & Course::getRoster(){
    return roster;
}


Course::Course(const string& courseName, int units) : courseName(courseName), units(units) {}


string Course::getCourseName() const {
    return courseName;
}


void Course::print() const {
    cout << "Course Name: " << courseName << endl;
    cout << "Number of Units: " << units << endl;
    roster.print();
}