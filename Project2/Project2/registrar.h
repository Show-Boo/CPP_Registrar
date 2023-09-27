#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "schedule.h"
#include "course.h"
#include "roster.h"
#include "student.h"
using namespace std;


#ifndef REGISTRAR_H
#define REGISTRAR_H
class Registrar {
public:
    void enroll(Student& student, Course& course);
};

#endif

void Registrar::enroll(Student& student, Course& course) {
    Roster & roster = course.getRoster();
    roster.addStudent(student.getName());
    Schedule & schedule = student.getSchedule();
    schedule.addCourse(course.getCourseName());
}
