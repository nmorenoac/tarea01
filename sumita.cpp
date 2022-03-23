#include <cmath>
#include <iostream>

int main ()
{
  int n = 0;
  double result = 0;
  for (n = 10; n < 100; n++){
    if (n%2 != 0){
      result = result + 1.0/n ; 
 
      std::cout << n << "\t" << result << "\n";
    
    }
  }
  return 0;
}
