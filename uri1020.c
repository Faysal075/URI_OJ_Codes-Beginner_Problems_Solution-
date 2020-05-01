/*Read an integer value corresponding to a person's age (in days)
 and print it in years, months and days, followed by
  its respective message “ano(s)”, “mes(es)”, “dia(s)”.*/
  #include<stdio.h>
  int main()
  {
      int d,y,m;
      scanf("%d",&d);
      y=d/365;
      d=d%365;
      m=d/30;
      d=d%30;
      printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
      return 0;

  }

