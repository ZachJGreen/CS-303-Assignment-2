#include "Employee.h"
class Nonprofessional: public Employee{
    private:
        int hours_worked;
        double hourly_rate;
    public:
        double calcWeeklySalary(double hourly_rate, int hours_worked);
        double calcHealthcareContribution();
        int calcVacationDays();
};