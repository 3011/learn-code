// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     // int e = 1, f = 4, g = 2;
//     // float m = 10.5, n = 4.0, k;
//     // k = (e + f) / g + sqrt((double)n) * 1.2 / g + m;
//     // printf("%f\n", k);

//     // float x = 2.5, y = 4.7;
//     // int a = 7;
//     // printf("%f\n", x + a % 3 * (int)(x + y) % 2 / 4);

//     int a, b;
//     a = 2, b = 5, a++, b++, a + b;
//     printf("%d %d\n", a, b);
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a1, a2;
//     int i = 5, j = 7, k = 0;
//     a1 = !k;
//     a2 = i != j;
//     cout << "a1 = " << a1 << '\t'
//          << "a2= " << a2 << endl;
// }

#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    x = 1;
    y = 1;
    z = 1;
    x = x || y && z;
    cout << x << "," << (x && !y || z) << endl;
}
