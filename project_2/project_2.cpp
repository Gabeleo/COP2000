//Gabriel Leo
//COP2000.0xx (xx = your section number)
//calculate the percentages of the student population at a given institution
#include<iostream>
#include <iomanip>

int main()
{
    using std::cout, std::endl, std::cin, std::setprecision;
    
    int TotalStudent;
    int TotalStudentFull;
    int TotalStudentPart;
    int TotalStudentBAS;
    int TotalStudentAA;

    cout << "Demographic statistics: " << endl;

    //initial input provided by the user
    cout << "total number of students enrolled: ";
    cin >> TotalStudent;

    cout << "total number of students enrolled full-time: ";
    cin >> TotalStudentFull;

    cout << "total number of students enrolled part-time: ";
    cin >> TotalStudentPart;
    
    cout << "total number of students enrolled at the BAS level: ";
    cin >> TotalStudentBAS;

    cout << "total number of students enrolled at the AA/AS level: ";
    cin >> TotalStudentAA;

    //Operations to calculate percentages
    double PercentageFull = (static_cast<double>(TotalStudentFull) / static_cast<double>(TotalStudent)) * 100;
    double PercentagePart = (static_cast<double>(TotalStudentPart) / static_cast<double>(TotalStudent)) * 100;
    double PercentageBAS = (static_cast<double>(TotalStudentBAS) / static_cast<double>(TotalStudent)) * 100;
    double PercentageAA = (static_cast<double>(TotalStudentAA) / static_cast<double>(TotalStudent)) * 100;

    //output of values
    cout << "calculating..." << endl;
    cout << "Percentage of full-time students: " << setprecision(4) << PercentageFull << "%" << endl; 
    cout << "Percentage of part-time students: " << setprecision(4) << PercentagePart << "%" << endl;
    cout << "Percentage of BAS students: " << setprecision(4) << PercentageBAS << "%" << endl;
    cout << "Percentage of AA/AS students: " << setprecision(4) << PercentageAA << "%" << endl;

    cout << "End of Data";

    system("pause");
    return 0;
}
