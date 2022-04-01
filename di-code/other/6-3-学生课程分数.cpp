#include <iostream>
using namespace std;

void find_best(int score[], int num_students, int num_courses)
{
    int m, n;
    int best_student;
    cout << "(Course) Best student:" << endl;
    for (m = 0; m < num_courses; m++)
    {
        best_student = 0;
        for (n = 0; n < num_students; n++)
        {
            if (score[n * num_courses + m] > score[best_student * num_courses + m])
                best_student = n;
        }
        cout << m + 1 << ": ";
        for (n = 0; n < num_students; n++) // 可能有同学都是最高分
        {
            if (score[n * num_courses + m] == score[best_student * num_courses + m])
                cout << "Student " << n + 1 << " (" << score[n * num_courses + m] << ") ";
        }
        cout << endl;
    }
}

void find_failed(int score[], int num_students, int num_courses)
{
    int m, n;
    bool has_failed;

    cout << "(Student) Failed:" << endl;
    for (m = 0; m < num_students; m++)
    {
        has_failed = false;
        for (n = 0; n < num_courses; n++)
        {
            if (score[m * num_courses + n] < 60)
            {
                has_failed = true;
                break;
            }
        }
        if (has_failed)
        {
            cout << m + 1 << ": ";
            for (n = 0; n < num_courses; n++)
            {
                cout << score[m * num_courses + n] << " ";
            }
            cout << endl;
        }
    }
}

void get_average_score(int score[], int num_students, int num_courses)
{
    int m, n;
    float total_score;
    cout << "(Student) Average score:" << endl;
    for (m = 0; m < num_students; m++)
    {
        total_score = 0;
        for (n = 0; n < num_courses; n++)
        {
            total_score += score[m * num_courses + n];
        }
        cout << m + 1 << ": " << total_score / num_courses << endl;
    }
}

int main()
{
    const int num_students = 5;
    const int num_courses = 4;
    int score[num_students * num_courses] = {100, 98, 100, 90,
                                             90, 95, 93, 100,
                                             80, 75, 90, 100,
                                             50, 70, 80, 55,
                                             58, 55, 60, 60};

    find_best(score, num_students, num_courses);
    cout << endl;
    find_failed(score, num_students, num_courses);
    cout << endl;
    get_average_score(score, num_students, num_courses);

    return 0;
}