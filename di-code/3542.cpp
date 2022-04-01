#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *matrix = new int[n * n];

    int i;
    for (i = 0; i < n * n; i++)
    {
        cin >> matrix[i];
    }
    
    int count = 0;
    for (i = 0; i < n; i++)
    {
        count += matrix[i * (n + 1)] + matrix[(i + 1) * (n - 1)];
    }
    cout << count << endl;

    return 0;
}