#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class User
{
public: // remember to change private again
    string Username, Password;

public:
    User(string username, string password)
    {
        Username = username;
        Password = password;
    }
    void setAccount(string username, string password)
    {
        Username = username;
        Password = password;
    }
    void login()
    {
        string username, password;

        system("CLS");
        cout << "***----------------------      Welcome to Student Login Section    -----------------***" << endl;
        cout << "Enter your username: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;
        Student student(username, password, "", "", "", "", "", "");
    }

    bool checkAccount(string username, string password)
    {
        if (Username == username && Password == password)
            return true;
        return false;
    }
    // void LogOut();
    // void ChangePassword();
    // virtual void ViewPersonalInfo();
};

class Student : public User
{
public: // remember to change private again
    // student's properties
    string ID, LastName, FirstName, Gender, DateOfBirth, SocialID;

    // student's operations
public:
    // create a custom destructor or initial value for Student
    Student(string username, string password, string id, string lastName, string firstName, string gender, string dateOfBirth, string socialID) : User(username, password)
    {
        ID = id;
        LastName = lastName;
        FirstName = firstName;
        Gender = gender;
        DateOfBirth = dateOfBirth;
        SocialID = socialID;
    }

    // void CourseRegister();
    // void ViewCoursesEnrolled();
    // void ViewCoursesNotEnrolled();
    // void ViewScore();
};

// class Course
// {
// private:
//     string ID, Name, Teachername, Max, S1Day, S1Time, S2Day, S2Time;
//     int NumberOfCredits;

// public:
//     void Delete();
//     void Update();
//     void ViewInfo();
//     void ViewStudents();
// };

// class Staff
// {
// private:
//     string ID, LastName, FirstName;

// public:
//     void createSchoolYear(); // create a new folder
//     void displaySchoolYear();
//     void createSemester(); // create a new folder
//     void displaySemester();
//     void displayClass();
// };

// class Teacher
// {
// private:
// public:
// };

void start();

// void staffLogin();