#include<stdio.h>

char passc(char pas[10])
{
    int i=0;
    char c;
        while(c!=13)
    {
        c=getch();
        if(c==13)
          break;
        else
        {
            printf("%c",c);
            sleep(100);
            printf("\b");
            printf("*");
            pas[i]=c;
            i++;
        }    
    }
    return pas;
}    

main(){
    int i=0;
    char pass[10];
    printf("enter your password: ");
    passc(pass);
    printf("\n\npassword is ");
    puts(pass);
    getch();
return 0;
}
