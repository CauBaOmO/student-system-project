#pragma once

#include <iostream>
using namespace std;

class User
{
private:
    string username, password;

public:
    void Login();
    virtual void CheckAccount();
    void LogOut();
    void ChangePassword();
    virtual void ViewPersonalInfo();
};

class Student
{
private:
    // student's properties
    string ID, LastName, FirstName, Gender, DateOfBirth, SocialID;

    // student's operations
public:
    // create a custom destructor or initial value for Student
    Student(string id, string lastName, string firstName, string gender, string dateOfBirth, string socialID);

    void CourseRegister();
    void ViewCoursesEnrolled();
    void ViewCoursesNotEnrolled();
    void ViewScore();
};

class Course
{
private:
    string ID, Name, Teachername, Max, S1Day, S1Time, S2Day, S2Time;
    int NumberOfCredits;

public:
    void Delete();
    void Update();
    void ViewInfo();
    void ViewStudents();
};

class Staff
{
private:
    string ID, LastName, FirstName;

public:
    void createSchoolYear(); // create a new folder
    void displaySchoolYear();
    void createSemester(); // create a new folder
    void displaySemester();
    void displayClass();
};

class Teacher
{
private:
public:
};