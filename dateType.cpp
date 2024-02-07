#include "dateType.h"

int dateType::daysInMonths[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30,
31, 30, 31 };

dateType::dateType(int Month, int Day, int Year)
{
    setDate(Month, Day, Year);
}

void dateType::setDate(int Month, int Day, int Year)
{
    daysInMonths[1] = isleapYear() ? 29 : 28; // adjust February days based on leap year

    if (Month >= 1 && Month <= 12 && Day <= daysInMonths[Month - 1] && Year >= 1900)
    {
        currentMonth = Month;
        currentDay = Day;
        currentYear = Year;
    }
    else
    {
        cout << "Date invalid, setting to 1/1/1900" << endl;
        currentMonth = 1;
        currentDay = 1;
        currentYear = 1900;
    }
}

bool dateType::isleapYear() const
{
    if (currentYear % 100 == 0 && currentYear % 400 == 0)
    {
        return true;
    }
    else if (currentYear % 100 == 0 && currentYear % 400 != 0)
    {
        return false;
    }
    else if (currentYear % 100 != 0 && currentYear % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void dateType::print() const
{
    cout << currentMonth << "-" << currentDay << "-" << currentYear << endl;
}