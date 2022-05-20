#ifndef DATE
#define DATE

class Date
{
public:
    void PrintDate();
    bool SetDate(int, int, int);
    void AddOneDay();

private:
    int year, month, day;
};

#endif