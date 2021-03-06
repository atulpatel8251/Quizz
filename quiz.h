#ifndef QUIZ_H_INCLUDED
#define QUIZ_H_INCLUDED

#include <string>
#include <vector>

using namespace std;

class User{
protected:
    char userid[20];
    char pwd[20];

    char uname[50];

public:
    void setUserDetails(string,string,string);
    string getName(string);
    string getName();
    string getUserID();
    int checkUserExists(string);
    void show();
    int input();

};
class Student:public User{
public:
    void add();
    void Remove();
    void showStudentDetails();
    void quiz();
    void viewPerformance();
};
class Admin:public User{
public:
    static void create_admin(string,string,string);
    void addStudent();
    void removeStudent();
    void viewStudent();
    void addQuestion();
    void removeQuestion();
    void viewQuestion();
    void editQuestion();

};

class Question{
private:
   int quesid;
   int tot_marks;
   char ques[500],op1[100],op2[100],op3[100],op4[100],ans;
public:
    void add();
    void Remove();
    void setQuestionDetails(int,string,string,string,string,string,char);
    void show();
    void viewQuestion();
    void startQuiz(string);
    int ques_count();
    void edit();
    void editBySlideView();
    void editByQuestionID();
};
class StudentPerformance{
char studid[10];
int marks;
int tot_marks;
public:
    void setMarksDetails(string,int,int);
    void saveMarksDetails();
    void  viewDetails(string);
    void show();

};
bool ispresent(vector<int>&,int);

#endif // QUIZ_H_INCLUDED
