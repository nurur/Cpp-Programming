// main program

#include <iostream>
#include "myAddition.h"
#include "mySubtraction.h"
using namespace std;


int main()
{
  cout << "The sum of 3 and 4 is : " << add(3, 4)      << endl;
  cout << "The diff of 3 and 4 is: " << subtract(3, 4) << endl;

  return (0);
}

