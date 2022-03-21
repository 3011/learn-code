#include <iostream>
using namespace std;

int main()
{
    int height_apple[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> height_apple[i];
    }
    
    int height_hand;
    cin >> height_hand;

    int count_apple = 0;
    for (int i = 0; i < 10; i++)
    {
        if ((height_hand + 30) >= height_apple[i])
        {
            count_apple++;
        }
    }
    cout << count_apple << endl;

    return 0;
}