#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 int main()
 {int sayi,c,d;
 unsigned short sayi2;
 short a,b;
 FILE *dosya1,*dosya2;
 dosya1=fopen("sayilar0.txt","w");
 dosya2=fopen("sayilar1.txt","w");
 srand(time(NULL));
 	for(int i=0;i<100;i++)
 	{
 		sayi=rand()%100;
 		printf("%d\n",sayi);
 		sayi2=sayi;
 		a=sayi2>>4;
 		if(a%2==0)
 		{
 			b=sayi2>>3;
 			b=b|1;
 			b=b<<3;
 		    b=sayi2|b;
		 	fprintf(dosya1,"%d\n",b);
		}
 	    else
 	    {
 	       for(c=2;c<=2;c++)
 	       {
 	       	sayi2&=~(1 << c);
 	       	d=sayi2;
 	       	fprintf(dosya2,"%d\n",d);
			}
		 }
	 }
	 fclose(dosya1);
	 fclose(dosya2);
	 return 0;
 }
 
