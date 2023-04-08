/* 
	Dirk Catpo
	CIS 165
	Date: 1 April 2020
	Description: This program allows a family to enter their family data to help 
			     them financially and budget their money better
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	// Local Declarations
		int fam_id_number, num_in_fam;
		float income, total_debt, fam_liv_exp, debt_free, fam_sav, serv_fee;
		const float LIV_EXP_1 = 4500.50;
		const float LIV_EXP_2 = 4700.30;
		const float LIV_EXP_3 = 5000.00;
		const float SERV_RATE_1 = 0.01;
		const float SERV_RATE_2 = 0.02;
		
	// Program Statements 
	
		cout<<"dont add commas when entering income and debt amount\n\n";
	
		cout<<"Enter family ID number: ";
		cin>>fam_id_number;
		
		cout<<"Enter amount of people in family: ";
		cin>>num_in_fam;
		
		cout<<"Enter annual income: ";
		cin>>income;
		
		cout<<"Enter total debt: ";
		cin>>total_debt;
		
	// This is where the family's living expenses is calculated
		if (num_in_fam > 4)
			fam_liv_exp = LIV_EXP_1 * num_in_fam;
		else if (num_in_fam == 4)
			fam_liv_exp = LIV_EXP_2 * num_in_fam;
		else
			fam_liv_exp = LIV_EXP_3 * num_in_fam;
			
	// This is where the monthly payments to pay off the debt is calculated 
		if (total_debt > 4000.00)
			debt_free = total_debt / 24;
		else 
			debt_free = total_debt / 12;
			
	// This is where the amount of money the family should save is calculated 
		fam_sav = num_in_fam * 0.02 * (income - total_debt);
	
	// This is where the service fee is calculated	
		if (income <= 30000.00)
			serv_fee = SERV_RATE_1 * income;
		else
			serv_fee = SERV_RATE_2 * income; 
			
	// This is how the output will be manipulated and arranged
		cout<<setiosflags (ios::fixed)
			<<setiosflags (ios::showpoint)
			<<setprecision (2);
			
	// This is the main code or output
		cout<<"\n";
		cout<<"% % % % % % % % % % % % % % % % % % % % % % % % % % %\n";
		cout<<"      Family Budget Assistance Center\n";
		cout<<"             November 2019\n";
		cout<<"      Telephone:  (800)555-1234\n";
		cout<<"% % % % % % % % % % % % % % % % % % % % % % % % % % %\n";
		cout<<"\n";
		cout<<"Identification number\t\t"<<setw(7)<<fam_id_number<<"\n";
		cout<<"Family size\t\t\t"<<setw(7)<<num_in_fam<<"\n";
		cout<<"Annual income\t\t\t"<<"$"<<setw(9)<<income<<"\n";
		cout<<"Total debt\t\t\t"<<"$"<<setw(9)<<total_debt<<"\n";
		cout<<"Expected living expenses\t"<<"$"<<setw(9)<<fam_liv_exp<<"\n";
		cout<<"Monthly payment\t\t\t"<<"$"<<setw(9)<<debt_free<<"\n";
		cout<<"Savings\t\t\t\t"<<"$"<<setw(9)<<fam_sav<<"\n";
		cout<<"Service fee\t\t\t"<<"$"<<setw(9)<<serv_fee<<"\n";
		
return 0;
}
