#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define CAPTCHA_LEN 6

/* Generate random captcha text */
void generate_captcha(char captcha[]){
    char pool[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for(int i=0;i<CAPTCHA_LEN;i++){
        captcha[i] = pool[rand() % (sizeof(pool)-1)];
    }

    captcha[CAPTCHA_LEN] = '\0';
}

/* Print captcha with noise */
void display_captcha(char captcha[]){

    char noise[] = "@#$%&*!";

    printf("\n===== CAPTCHA =====\n");

    for(int i=0;i<CAPTCHA_LEN;i++){

        /* print random noise */
        if(rand()%2)
            printf("%c", noise[rand()%7]);

        printf("%c", captcha[i]);

        if(rand()%2)
            printf("%c", noise[rand()%7]);
    }

    printf("\n===================\n");
}

/* Main captcha system */
int main(){

    srand(time(NULL));

    char captcha[CAPTCHA_LEN+1];
    char user_input[20];

    generate_captcha(captcha);
    display_captcha(captcha);

    printf("Enter the CAPTCHA (series of letters and numbers): ");
    scanf("%s", user_input);

    if(strcmp(user_input, captcha) == 0)
        printf("Access Granted\n");
    else
        printf("Wrong CAPTCHA\n");

    return 0;
}
