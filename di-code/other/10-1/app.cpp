#include "cat.h"
#include <iostream>
using namespace std;

int main()
{
    Cat frisky;
    frisky.SetAge(5);
    frisky.Meow();
    cout << "frisky is cat who is " << frisky.GetAge() << "years old." << endl;
    frisky.Meow();

    return 0;
}