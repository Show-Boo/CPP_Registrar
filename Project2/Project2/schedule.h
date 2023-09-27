#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#ifndef SCHEDULE_H
#define SCHEDULE_H

class Schedule {
private:
    vector<string> courses;
    int MAX = 10;          //한 학생의 최대 수강 가능 과목수를 10
    int current = 0;

public:
    void addCourse(const string& courseName);
    void print() const;
};

#endif


void Schedule::addCourse(const string& courseName) {
    if (current < MAX) {
        current++;
        courses.push_back(courseName);
    }
    else {
        cout << "수강과목 최대치입니다" << endl;
    }
}

void Schedule::print() const {
    cout << "List of Courses" << endl;
    for (const string & course : courses) {
        cout << course << endl;
    }
    cout << endl;
}
