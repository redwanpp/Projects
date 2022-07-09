//Creatring a digital clock with C

#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main() {
    int h, m, s;

    printf("Set Time:\n");
    scanf("%d %d %d", &h, &m, &s);

    if(h > 12 || m > 60 || s > 60) {
        printf("Error!!!!");
        exit(0);
    }

    while(true) {
        s++;
        if(s > 59) {
            m++;
            s = 0;            
        }
        if (m > 59) {
                h++;
                m = 0;
        }
        if(h > 12) {
            h = 1;
        }
        printf("\n Clock : ");
        printf("\n %02d:%02d:%02d", h, m, s);//printing time

        Sleep(1000);//for delaying
        system("cls");//for clear screen
    }

    return 0;
}