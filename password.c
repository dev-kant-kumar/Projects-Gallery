// This program check both length and strength of password
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void takepassword();
void checkpassword( char password[]);
void takecpassword( char password[]); // cpassword=confirm password
int main()
 {
    printf("\n\n");
    printf("\033[1;44mPassword Checking System \033[0m\n\n");
    takepassword();
    return 0;
 }
void takepassword()
 {
    char password[9];
    printf("Enter your password :");
    scanf(" %[^\n]s",password);
    checkpassword(password);
 } 
void checkpassword(char password[])
 {
    if(strlen(password)==8)
     {
        int digit=0,smallcase=0,uppercase=0,specialchar=0,space=0;
        for(int i=0;password[i]!='\0';i++)
         {
            if(isdigit(password[i]))
             {
                digit++;
             }
            else if(islower(password[i]))
             {
                smallcase++;
             }
            else if(isupper(password[i]))
             {
                uppercase++;
             }
            else if(ispunct(password[i]))
             {
                specialchar++;
             }
            else if(isspace(password[i]))
             {
                printf("\033[5;31mPassword must not contain spaces\033[0m\n");
                takepassword();
             }
            else
             {
                printf("\033[5;31mPassword can only be number,smallcase lettert,uppercase letter and special symbol(e.g., !, @, #, $, %, ^, &, *) \033[0m\n");
                takepassword();
             } 
         }     
            if(digit>=1 && smallcase>=1 && uppercase>=1 && specialchar>=1)
             {
                printf("\033[1;32mYour password is strong \033[0m\n");
                takecpassword(password);
             }
            else 
             {
                printf("\033[5;31mPassword must cointain atleast a number,smallcase letter,uppercase letter,special symbol(e.g., !, @, #, $, %, ^, &, *) \033[0m\n");
                takepassword();
             } 

     }
    else if(strlen(password)<8)
     {
        printf("\033[5;31mPassword must be 8 characters long \033[0m\n");
        takepassword();
     }
    else
     {
        printf("\033[5;31mPassword length must not exceed 8 characters \033[0m\n");
        takepassword();
     }  

 }
void takecpassword(char password[])
 {
    char confirmpassword[9];
    printf("Re-enter your password :");
    scanf(" %[^\n]",confirmpassword);
    if(strcmp(confirmpassword,password)==0)
     {
        printf("\033[1;32mPassword Set Successfully \033[0m\n");
     }
    else
     {
        printf("\033[5;31mConfirm password must match password \033[0m\n");
        takecpassword(password);
     } 
 }  
  