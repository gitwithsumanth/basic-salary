#include <iostream>

float calculateGrossSalary(float basicSalary) {
 
    float ta = 0.10 * basicSalary;
    float da = 0.12 * basicSalary;
    float grossSalary = basicSalary + ta + da;
    
    return grossSalary;
}

int main() {
    float basicSalary;
    
    cout << "Enter the basic salary: ";
    cin >> basicSalary;
    
   
    float grossSalary = calculateGrossSalary(basicSalary);
    cout << "Gross Salary: " << grossSalary << endl;
    
    return 0;
}
