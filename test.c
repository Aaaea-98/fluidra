#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main(void)
 {
  float x;
  float cosAprx;
  int n = 10;
  int k;            // index summation
  int twoK;
  int i;
//unsigned long int twoKFact;
  float err= 0.0;
 float cosExact;
 float twoFact;
 float newErr = 0.0;

 printf("Enter x (rod): ");
  scanf("%f", &x);
  //cosExact = cos(x);
  //printf("Cos value %f:\n",cosExact);
               //summation loop
               for(k = 0; k <= n; k++)
               {
               newErr=err;
                   //2k
                   twoK=2*k;

              //(2k)! = 1 * 2 * ... * 2k
              //
              twoFact = 1; // 0!
               if(k !=0)
               for(i = 2; i <= twoK; i++)
              {
                twoFact = twoFact * i;

               }
               //cosExact = cos(x);
 cosAprx = cosAprx + ((pow(-1,k) * pow(x,twoK)) / twoFact);
        err = fabs (cosAprx - cosExact);
if (err == newErr){
break;
}

         printf("k: %2d, cosAprx: %f, cosExact: %f, err: %2e\n, ", k, cosAprx, cosExact, err);
 }

 return(0);

 /*pi= 3.14 printed 9 iterations into the terminal which is the right answer
     * pi/2= 1.57 showed 8 iterations
     * pi/3= 1.046 showed 5 iterations
     * pi/4= 0.785 showed 4 iterations
     */
 }
