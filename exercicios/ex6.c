#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

 double sq = 0, num = 3.123213, res=0;
     sq = sqrt(num); 
     res = log(sq);
     printf("r2 %.1f = %.2f \n", num, sq);
     printf("log(%.1f) = %.2f \n", sq, res);
  return 0;
}
