#include<stdio.h>
#include<conio.h>

int main()
{
	 float x[50], y[50], xp, yp=0, p;
	 int i,j,n;
	//  clrscr();
	  
	 /* Input Section */
	 printf("Enter number of data: ");
	 scanf("%d", &n);
	 
	 printf("Enter values of x and y data:\n");
	 for(i=1;i<=n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
	 }
	 printf("Enter interpolation point: ");
	 scanf("%f", &xp);
	 
	 /* Implementing Lagrange Interpolation */
	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	p = p* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  yp = yp + p * y[i];
	 }
	 printf("Interpolated value at %.2f is %.3f .", xp, yp);
	 getch();
	 return 0;
}