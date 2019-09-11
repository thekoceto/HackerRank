#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int num1;
    long num2 ;
    char ch;
    float num3;
    double num4;
  
    scanf("%d %ld %c %f %lf", &num1, &num2, &ch, &num3, &num4);
    
    printf("%d\n",num1);
    printf("%ld\n",num2);
    printf("%c\n",ch);
    printf("%.3f\n",num3);
    printf("%.9lf\n",num4);
    
    return 0;
}
