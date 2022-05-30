#include <iostream>
using namespace std;

class Circle
{
private:
    double x;
    double y;
    double r;

public:
    void print();
    Circle(double x = 0, double y = 0, double r = 0) : x(x), y(y), r(r) {}
};

void Circle::print()
{
    cout << "圆心为：" << x << ", " << y << endl
         << "半径为：" << r << endl;
}

int main()
{
    //不提供参数构造对象
    Circle c1;
    c1.print(); //打印成员值
    //提供参数构造对象
    Circle c2(1.0, 2.0, 2.5); //分别初始化x, y, r
    c2.print();

    return 0;
}
