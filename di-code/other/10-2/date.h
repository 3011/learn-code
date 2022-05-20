#ifndef DATE
#define DATE

class Date
{
private:
    int year, month, day;

public:
    void PrintDate();
    bool SetDate(int, int, int);
    void AddOneDay();
};

#endif