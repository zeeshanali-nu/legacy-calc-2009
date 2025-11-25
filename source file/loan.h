#ifndef LOAN_H
#define LOAN_H
class Loan{
private:

long double amount;
long double interestRate;
int years;
public:
Loan(long double a,long double r,int y);
long double calculateTotalamount();
long double calculateTotalinterest();
long  double calculateMonthlyamount();


};
#endif
