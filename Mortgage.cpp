#include "Mortgage.h"
#include <iostream>
#include <cmath>
using namespace std;

void Mortgage::setLoanAmount(double loan) {
	loanAmount = loan;
}

void Mortgage::setAnnualInterestRate(double annualRate) {
	annualInterestRate = annualRate;
}

void Mortgage::setTotalYearsOfLoan(int totalYears) {
	totalYearsToRepay = totalYears;
}

double Mortgage::getLoanAmount() const {
	return loanAmount;
}

double Mortgage::getAnnualInterestRate() const {
	return annualInterestRate;
}

int Mortgage::getTotalYearsofLoan() const {
	return totalYearsToRepay;
}

double Mortgage::calculateMonthlyInterestRate(double annualInterestRate) {
	return monthlyInterestRate = annualInterestRate / 12;
}

double Mortgage::calculateNumbersOfPayments(int totalYearsToRepay) {
	return numbersOfPayments = totalYearsToRepay * 12;
}

double Mortgage::calculatePowerFactor(double monthlyInterestRate, int numberOfPayments) {
	return powerFactor = pow((1 + monthlyInterestRate), numberOfPayments);
}

double Mortgage::calculateMonthlyPayments(double loanAmount, double monthlyInterestRate, 
	double powerFactor) {
	return monthlyPayments = (loanAmount * monthlyInterestRate * powerFactor) /
		(powerFactor - 1);
}

double Mortgage::calculateTotalPayback(double monthlyPayments, int numberofPayments){
	return totalLoan = monthlyPayments * numberofPayments;
}