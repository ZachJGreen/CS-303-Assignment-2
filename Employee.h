
class Employee{
    private:
        double weekly_salary;
        int vacation_days;
        double healthcare_contribution;
    public:
        virtual double calcWeeklySalary() = 0;
        virtual int calcVacationDays() = 0;
        virtual double calcHealthcareContribution() = 0;


};
