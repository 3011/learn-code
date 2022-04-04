#include <iostream>
using namespace std;

int main()
{
    const int matrix_size = 3 * 3;
    int matrix_1[matrix_size] = {5, 7, 8,
                                 2, -2, 4,
                                 1, 1, 1};
    int matrix_2[matrix_size] = {4, -2, 3,
                                 3, 9, 4,
                                 8, -1, 2};
    int matrix[matrix_size];

    // 矩阵相加
    for (int i = 0; i < matrix_size; i++)
    {
        matrix[i] = matrix_1[i] + matrix_2[i];
    }

    for (int i = 0; i < matrix_size; i++)
    {
        if (i % 3 == 0)
            cout << endl;
        cout << matrix[i] << " ";
    }

    return 0;
}