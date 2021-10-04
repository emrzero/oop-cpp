//
//  Loan.h
//  9.2-Classes
//
//  Created by Eliot Reyes on 10/3/21.
//

#ifndef Loan_h
#define Loan_h

class Loan {
public:
    Loan();
    Loan(double rate, int years, double amount);
    double getAnnualInterestRate();
    int getNumberOfYears();
    double getLoanAmount();
    void setAnnualInterestRate(double rate);
    void setNumberOfYears(int years);
    void setLoanAmount(double amount);
    double getMonthlyPayment();
    double getTotalPayment();
    
private:
    double annualInterestRate;
    int numberOfYears;
    double loanAmount;
    
};

#endif /* Loan_h */
