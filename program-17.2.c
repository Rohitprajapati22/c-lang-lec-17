#include<stdio.h>


int main() {
	
    int length, j, a = 0;
    char email[20];

    printf("-------------SIGN UP-------------\n");
    
    printf("Enter your Email address : ");
    gets(email);

    length = strlen(email);

    for (j = 0; j <= length; j++) {
        if (email[j] == '@') {
            if (strcmp(&email[j],"@gmail.com") == 0)
                a = 1;
        }
    }

    if (a > 0 && length > 12) {
        printf("Valid email address.\n");
    } 
	else {
        printf("Invalid email address.\n");
    }


    
    int len, i, upr = 0, lwr = 0, num = 0, sym = 0;
    char pass[20];

    printf("\n\n Enter your Password : ");
    gets(pass);

    len = strlen(pass);

    for (i = 0; i < len; i++) {
    	
        if (pass[i] >= 65 && pass[i] <= 90) upr++;
        if (pass[i] >= 97 && pass[i] <= 122) lwr++;
        if (pass[i] >= 48 && pass[i] <= 57) num++;
        if (pass[i] >= 33 && pass[i] <= 47 || pass[i] == '@') sym++;
    }

    if (upr > 0 && lwr > 0 && num > 0 && sym > 0) {	
        printf("Your password is strong\n");
    }
	 else {
        printf("Your password is weak\n");
    }
    

    char em[25], pas[20];

    if (a > 0 && length > 12 && upr > 0 && lwr > 0 && num > 0 && sym > 0) {
    	
        printf("-------------LOGIN-------------\n");
        
        printf("Enter your Email address : ");
        gets(em);

        if (strcmp(em, email) == 0) {
            printf("Your Email address is right.\n");
        } 
		else {
            printf("your Email address is wrong .\n");
        }

        printf("\n\nEnter your Password : ");
        gets(pas);

        if (strcmp(pas, pass) == 0) {
            printf("\nYour password is right.\n");
            
        }
		 else {
            printf("\nYour password is wrong.\n");
        }
        
        if(strcmp(em , email) == strcmp(pas , pass)){
        	printf("\nYour Login Successfully..\n");
		}
		else{
			printf("\nLogin Failed. Invalid Credentials...");
		}

    }

}
