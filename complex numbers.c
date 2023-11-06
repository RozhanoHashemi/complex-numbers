
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



struct complex{
	float real ;
	float img ;
}z[2];


int main() {

	struct complex sum ;
	struct complex min ;
	struct complex mult ;
	struct complex div ;
	int n ;


	for(int i=0;i<2;i++){
	scanf("%f" , &z[i].real) ;
	scanf("%f" , &z[i].img) ;

	}
sum.real=z[0].real + z[1].real ;
sum.img= z[0].img + z[1].img ;

min.real=z[0].real - z[1].real ;
min.img=z[0].img - z[1].img ;

mult.real = (z[0].real*z[1].real)-(z[0].img * z[1].img);
mult.img = (z[0].real*z[1].img)+(z[0].img * z[1].real);

div.real  = (((z[0].real) * (z[1].real))+((z[0].img) * (z[1].img)))/ (pow(z[1].real , 2)+pow(z[1].img , 2) );
div.img  = (((z[0].img) * (z[1].real))-((z[0].real) * (z[1].img))) /(pow(z[1].real , 2)+pow(z[1].img , 2) ) ;


if (sum.real==0)
   printf("%fi" , sum.img ) ;
else if (sum.img==0)
   printf("%f" , sum.real) ;
else {

    printf("%f" , sum.real );
    if(sum.img>0)
    printf("+%fi" ,sum.img);
    else
    printf("%fi" , sum.img);

}
    printf("\n");

 if(min.real==0 && min.img==0)
    printf("0");
else  if (min.real==0)
   printf("%fi" , min.img ) ;
else if (min.img==0)
   printf("%f" , min.real) ;

else {



    printf("%f" , min.real );
    if(min.img>0)
    printf("+%fi" ,min.img);
    else
    printf("%fi" , min.img);

}
 printf("\n");

 if (mult.real==0)
   printf("%fi" , mult.img ) ;
else if (mult.img==0)
   printf("%f" , mult.real) ;
else {

    printf("%f" ,mult.real );
    if(mult.img>0)
    printf("+%fi" ,mult.img);
    else
    printf("%fi" , mult.img);
}
 printf("\n");


 if (div.real==0)
   printf("%fi" ,div .img ) ;
else if (div.img==0)
   printf("%f" , div.real) ;
else {

    printf("%f" , div.real );
    if(div.img>0)
    printf("+%fi" ,div.img);
    else
    printf("%fi" , div.img);
}



return 0 ;
}
