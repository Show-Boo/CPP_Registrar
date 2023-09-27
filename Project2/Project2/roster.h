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
    int MaxStudent = 300;     //���´� �ִ� ���� ���� �ο����� 300������
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
        cout << "���´� ���� ���� �ο����� �ִ�ġ�Դϴ�" << endl;
    }
}

void Roster::print() const {
    cout << "List of Students" << endl;
    for (const string & student : students) {
        cout << student << endl;
    }
    cout << endl;
}