#include<stdio.h>
int main()
{
    int a=0, b=0;
    char str[100]={0},c=0;
    while(1){
        a=b=c=0;

        printf("Please input(! to exit) : ");
        fflush(stdin);
        gets(str);
        if(str[0] == '!') return 0;

        for(int i=0; str[i]!='\0'; i++){
            if(str[i] == ' ') continue;
            if(str[i] > '9' || str[i] < '0') {
                c = str[i];
                continue;
            }
            if(c == 0) a = a*10 + (str[i] -'0');
            else b = b*10 + (str[i] - '0');
        }
        printf("\nAnswer is : ");

        if(c==0) printf("ERROR INPUT");
        else if(c == '+') printf("%d %c %d = %d\n\n",a,c,b,a+b);
        else if(c == '-') printf("%d %c %d = %d\n\n",a,c,b,a-b);
        else if(c == '*') printf("%d %c %d = %d\n\n",a,c,b,a*b);
        else if(c == '/') printf("%d %c %d = %d\n\n",a,c,b,a/b);
    }
}
