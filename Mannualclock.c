#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main(){
    int min,hour,sec;
    printf("               ------------------------------mannual time clock------------------------------\n");
    printf("-->Enter your Current time(in HH:MM:SS format)");
    scanf("%d%d%d",&hour,&min,&sec);

    while(1){
        system("cls");
        
        printf("%02d : %02d : %02d",hour,min,sec);
       fflush(stdout);

        sec++;
        if(sec==60){
            min+=1;
            sec=0;

        }
        if(min==60){
            hour+=1;
            min=0;
        }
        if(hour==24){
            hour=0;
            min=0;
            sec=0;
        }
       Sleep(1000);
        
    }
    return 0;
}
