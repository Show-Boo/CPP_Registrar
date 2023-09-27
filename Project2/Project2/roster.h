#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;


#ifndef ROSTER_H
#define ROSTER_H

class Roster {
private:
    vector<string> students;   
    int MaxStudent = 300;     //강좌당 최대 수강 가능 인원수를 300명으로
    int CurrentStudent = 0;

public:
    void addStudent(const string& studentName);
    void print() const;
};

#endif



void Roster::addStudent(const string& studentName) {
    if (CurrentStudent < MaxStudent) {
        CurrentStudent++;
        students.push_back(studentName);
    }
    else {
        cout << "강좌당 수강 가능 인원수가 최대치입니다" << endl;
    }
}

void Roster::print() const {
    cout << "List of Students" << endl;
    for (const string & student : students) {
        cout << student << endl;
    }
    cout << endl;
}