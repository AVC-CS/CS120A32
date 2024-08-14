#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int numFemale, numMale, numOthers;
  double percF, percM, percO;

  cout << "Enter the number of students: Male, Female and Others";
  cin >> numMale >> numFemale >> numOthers;
  /* ************************************
    Code your program here
  ************************************ */

  cout << setprecision(2) << fixed;
  cout << "Percentage of Male: " << percF << endl;
  cout << "Percentage of Female: " << percM << endl;
  cout << "Percentage of Others: " << percO << endl;
}
