#include <iostream>
using namespace std;

struct Student
{
    char name[15];
    int mid_score;
    int end_score;
    double avg_score;
};

int main()
{
    Student stu;
    cout << "学生姓名：";
    cin >> stu.name;
    cout << "期中成绩：";
    cin >> stu.mid_score;
    cout << "期末成绩：";
    cin >> stu.end_score;

    stu.avg_score = (stu.mid_score + stu.end_score) / 2.0;
    cout << stu.name << " 的平时成绩为：" << stu.avg_score << endl;

    return 0;
}