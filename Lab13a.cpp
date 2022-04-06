// Created by Gabriel Perez
// Due Date: 03/30/22
// Program Description:
//		In this program, the user will input the inital loan amount, the annual interest
//		rate, and the total amount of years for the loan. The program will then calculate
//		how much you will have to pay monthly, and how much your total loan amount will be
//		at the end of the loan.

#include "Mortgage.h"
#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

int main() {
	Mortgage newLoan;
	double initialLoan, annualRate;
	int totalYears;
	char keepRunning = 'y';

	do {
		cout << "Enter the amount of the loan: ";
		cin >> initialLoan;
		newLoan.setLoanAmount(initialLoan);

		cout << "Enter the annual interest rate in decimal form (example .075): ";
		cin >> annualRate;
		newLoan.setAnnualInterestRate(annualRate);

		cout << "Enter the length of the loan in years: ";
		cin >> totalYears;
		newLoan.setTotalYearsOfLoan(totalYears);

		double monthlyInterestRate = newLoan.calculateMonthlyInterestRate(annualRate);
		double numberofPayments = newLoan.calculateNumbersOfPayments(totalYears);
		double powerFactor = newLoan.calculatePowerFactor(monthlyInterestRate, 
			numberofPayments);
		double monthlyPayments = newLoan.calculateMonthlyPayments(initialLoan, 
			monthlyInterestRate, powerFactor);
		double totalPayback = newLoan.calculateTotalPayback(monthlyPayments, numberofPayments);

		cout << "\nLoan Amount: $" << fixed << setprecision(2) << newLoan.getLoanAmount()
			<< endl;
		cout << "Annual Interest Rate: " << fixed << setprecision(5) <<
			newLoan.getAnnualInterestRate() << endl;
		cout << "Years to repay: " << newLoan.getTotalYearsofLoan() << endl;
		cout << "Monthly Payments: $" << fixed << setprecision(2) << monthlyPayments << endl;
		cout << "Total loan payback: $" << fixed << setprecision(2) << totalPayback << endl;

		cout << "\nDo you wish to process another loan? ";
		cin >> keepRunning;

		if (keepRunning != 'y' && keepRunning != 'n') {
			cout << "Enter 'y' to process another loan or enter 'n' to quit the program: ";
			cin >> keepRunning;
		}
	} while (keepRunning == 'y');

	return 0;
}
