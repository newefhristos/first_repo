// ypologismos triwnymou ax^2+bx+c=0
#include <stdio.h>
#include <math.h>



int main()
{

if(system("cls")) system("clear");  //ka8arizei o8onh

float a, b, c, d, x1, x2;  //dhlwnw tis parametrous tou triwnymou a,b,c th d gia th diakrinousa kai tis x1, x2 gia tis rizes
int exit; //ayth h metavlhth einai gia thn erwthsh exodos h oxi apo to programma
printf("auto to programma ypologizei tis rizes toy triwnymoy ax^2+bx+c=0\n");
printf("pata enter kai dwse ta a b kai c\n");
getchar();


printf("dwse to a:");
scanf("%f", &a);  //eisagwgh timhs gia thn a apo ton xrhsth
printf("dwse to b:");
scanf("%f", &b);  //to idio gia thn metavlhth b
printf("dwse to c:");
scanf("%f", &c);  //kai gia thn c
printf("\n");
printf("to triwnymo einai:%.2fx^2 %+.2fx %+.2f = 0 \n", a, b, c); //to %.2f typwnei thn a kai krata mono dyo dekadika pshfia apo to apotelesma. ta %+.2f typwnei thn b kai th c me duo dekadika pshfia alla kai to proshmo toys
printf("\n");

d=pow(b,2.0)-4.0*a*c;   //ypologizei diakrinoysa, to pow einai ypsvno eis thn...


if (d<0.0)
{
          printf( "kai den exei pragmatikes rizes\n");
}

else
      {
        printf("h diakrinousa einai d=%.3f", d);
        printf(" h teragwnikh ths riza %.4f\n", sqrt(d));
        x1=(-b+sqrt(d))/(2.0*a); /*giana xrhsimopoihseis to sqrt prpepei
                                   na kaneis link kai otan kaneis compile
                                   grafontas gcc -o filename filename.c -lm*/
        x2=(-b-sqrt(d))/(2.0*a);
        printf("kai exei rizes:x1=%.3f kai x2=%.3f\n", x1, x2);


       }

printf("\n");




printf("gia na synexiseis pata 1, gia exodo pata 0 \n");
scanf("%d", &exit);

switch(exit)
          {
             case 1:
             printf("\n");
             return main(); //epistrefei sthn arxh

             case 0:
             printf("geia sou\n");
             break;

             default:
            printf("eipame pata 1 h 0, esy pathses %d", exit);
            printf(" pas kala?\n");
           }

return 0;
}
