//
//  main.c
//  9la
//
//  Created by Арсений Билецкий on 09/12/2019.
//  Copyright © 2019 Арсений Билецкий. All rights reserved.
//
//  main.c
//  99lab
//
//  Created by Арсений Билецкий on 07/12/2019.
//  Copyright © 2019 Арсений Билецкий. All rights reserved.
//
#include <math.h>
#include <stdio.h>
int max(int a, int b){
    return (a > b ? a : b);
    }
int min(int a, int b){
    return (a < b ? a : b);
}
int sign(int a){
    return (a==0) ? 0 : (a > 0) ? 1 : -1;
}
int mod(int a, int b)
{
  return (a % b < 0) ? ((a % b) + b) : (a % b);
}

int module(int a)
{
  return (a < 0) ? (-a) : a;
}

int main()
{
  int i = 18, j = -9, l = 5, n = 50, ik, jk, lk, p = 0, r=5, R=10;
  for (int k = 1; k <= n; k++)
  {
      ik =mod(i*max(j,l),30)+mod(j*min(i,l) , 20)+k;
      jk = min(l,max(j,min(l,max(i-l,j-l))));
      lk = sign(k-10)*module(i-j+l-k);
      if (((10-ik)*(10-ik)+(10-jk)*(10-jk)>=r*r) && ((10-ik)*(10-ik)+(10-jk)*(10-jk)<=R*R))
    {
        printf ("%s %d %s %d %d %s %d %s", " Точка попала в область, шаг попадания:",k ,"\n Ее координаты:", ik, jk, "\nПараметор движения:", lk, "\n");
        k=52;
        p=1;
    }
      i=ik;
      j=jk;
      l=lk;
  }
    if (p==0) {
        int h=52;
        printf("%s %d %d %s %d %s %d %s", " Точка не попала в область,ее координаты:",i,j ,"\n номер шага:",h,"\nПараметор движения:", l, "\n");
        }
    return 0;
}


