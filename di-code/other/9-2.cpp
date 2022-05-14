#include <iostream>
using namespace std;

struct student
{
    char name[15];
    char sex;
    double score;
};

void sort(student stu[])
{
    int n;
    student temp;
    for (int m = 0; m < 5 - 1; m++)
        for (n = 0; n < 5 - 1 - m; n++)
            if (stu[n].score < stu[n + 1].score)
            {
                temp = stu[n];
                stu[n] = stu[n + 1];
                stu[n + 1] = temp;
            }
}

int main()
{
    student stu[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "请输入第" << i + 1 << "位学生的信息(姓名 性别 成绩): " << endl;
        cin >> stu[i].name >> stu[i].sex >> stu[i].score;
    }

    sort(stu);

    cout << endl
         << "按成绩排序之后的学生信息为：" << endl;
    for (int i = 0; i < 5; i++)
        cout << "第" << i + 1 << "位学生的信息(姓名 性别 成绩): " << endl
             << stu[i].name << ' ' << stu[i].sex << ' ' << stu[i].score << endl;

    return 0;
}
