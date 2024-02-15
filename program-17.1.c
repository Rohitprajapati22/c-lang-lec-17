#include<stdio.h>

main()
{
	int i,len,upr=0,lwr=0,num=0,spe=0;
	
	char a[20];
	printf("Enter your password :");
	gets(a);
	
	len = strlen(a);
	
	for(i = 0; i <= len ;i++){
		if(a[i] >= 65 && a[i] <= 90) upr++;
		if(a[i] >= 97 && a[i] <= 122) lwr++;
		if(a[i] >= 48 && a[i] <= 57) num++;
		if(a[i] == '@' || a[i] == '#' || a[i] == '$') spe++;
	}
	
	if(upr > 0 && lwr > 0 && num > 0 && spe >0){
		printf("Your password is Strong...");
	}
	else{
		printf("Your password is not Strong...");
	}
	
}
