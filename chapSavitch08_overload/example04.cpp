// Example
// Return by reference 
/*
int m  = 44;
int& n = m;      //reference 
int* p = &m;     //pointer
*/


#include <iostream>
using namespace std;


double& sampleFunction (double& variable)
{
  cout << "Inside : " << variable << endl;
  return variable;
}



int main()
{
  double m = 99;
  cout << sampleFunction(m) << endl;

  sampleFunction(m) = 44;
  cout << m << endl;


  return 0;
}
