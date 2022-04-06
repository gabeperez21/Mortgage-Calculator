#ifndef MORTGAGE_H
#define MORTGAGE_H

class Mortgage
{
private:
	double loanAmount;
	double annualInterestRate;
	double monthlyInterestRate;
	int totalYearsToRepay;
	int numbersOfPayments;
	double powerFactor;
	double monthlyPayments;
	double totalLoan;
public:
	void setLoanAmount(double);
	void setAnnualInterestRate(double);
	void setTotalYearsOfLoan(int);
	double getLoanAmount() const;
	int getTotalYearsofLoan() const;
	double getAnnualInterestRate() const;
	double calculateNumbersOfPayments(int);
	double calculateMonthlyPayments(double, double, double);
	double calculateMonthlyInterestRate(double);
	double calculatePowerFactor(double, int );
	double calculateTotalPayback(double, int);
};

#endif
