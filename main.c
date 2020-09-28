#include <stdio.h>
int main(){

    //Test printf
    printf("Hello World!\n");
    printf("My name is Sasha\n");
    
    //Testing types
    int a = 100;
    int b = 100000000000;
    float c = 1.12345678999;
    unsigned int d = 12345678999;
    char x = '1';
    short f =  32770;
    
    //prints 109
    printf("%d\n",a+9);
    
    //"implicit conversion from long to int changes value"
    printf("%d\n",b);
    
    //float appears to round down
	printf("%lf\n",c);
    
    //int out of bounds wraps around, we get -539222889
    printf("%i\n",d);
    
    //prints the : symbol
    printf("%c\n",x+9);
    printf("%d\n",f-1);
    printf("%d\n",f+1);
    
    return 0;
}