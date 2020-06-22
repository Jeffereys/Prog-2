//
//  Proj3.cpp
//  Project3
//
//  Created by Jefferey Stephens on 6/22/20.
//  Copyright © 2020 Tcc. All rights reserved.
//

#include "Proj3.h"


/*float friend computeBonusBudget()
  {
      
      cout<<"Bonus Budget = ";
      return (bonusBudgetRate*getNetIncome());
  }*/
void theMeat(Company pet)
{
    cout << "Enter Divison Name: ";
    string name;
   
    getline(cin, name);
    pet.setDivisionName(name);

    cout << "Enter total Sales: ";
    int sales;
    cin >> sales;
    pet.setTotalSales(sales);

    cout << "Enter Total Expenses: ";
    int expenses;
    cin >> expenses;
    pet.setTotalExpenses(expenses);


    cout <<endl<<"==========================================="<<endl;
    cout<<"Company name: " << pet.getCompanyName() << endl;
    cout << "Division name: " << pet.getDivisionName() << endl;
    cout << "Quarter: " << pet.getQuarter() << endl;
    cout << "Net Income: " << pet.getNetIncome() << endl;
    

    cout<<"==========================================="<<endl;

    cin.ignore();
}
void computeBonusBudget(Company Pet)
{
    cout<<"Bonus Budget= ";
    cout<< Pet.getBonusBudgetRate()*Pet.getNetIncome();
}
string Company::companyName=COMPANY_NAME;           //static Instances
char Company::quarter=QUARTER;                      //static instance

int main()
{
    
    Company Dog;
    Company Cat;
    
    theMeat(Dog);
    //computeBonusBudget(Dog.getNetIncome(),BONUS_BUDGET_RATE);
    theMeat(Cat);
    
    computeBonusBudget(Cat);
 

    
    
    return 0;
}

