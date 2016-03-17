//*****************************************|
//Author:Kailean Hunter                    |
//File Name:Assignment 1                   |
//Project: Basic Login Process		       |
//Date: 3/2/2016                           |
//*****************************************|

//Pre-Processors

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
//declarations
int username = 123456;
int password = 1234;
int a;
int b;
int c;
int newp;
int pass2;

//First login process
for(a = 1; a <=3; a++)
	{
	printf("Username:");
	scanf("%d", &username);
	printf("Password:");
	scanf("%d", &password);
	printf("--------------------------------------\n");
		
		if(username == 123456 && password == 1234)
		{
			printf("Succesfull Login, Please Change Your Password Below\nNew password must be 4-digits and different from the temporary password\nNew Password:");
			scanf("%d", &newp);
			printf("--------------------------------------\n");
			
				//new password process
				for(b = 1; b <=1000; b++)
				{
					if(newp <= 999 || newp >= 10000 || newp == 1234)
					{
						printf("New password must be 4-digits and different from the temporary password\nPlease try again\n");
						printf("New Password:");
						scanf("%d", &newp);
						printf("--------------------------------------\n");
					}
					
					else if( newp > 999 && newp < 10000)
					{
						printf("Successful password change!\n");
						
							//last login process, with new password
							for(c = 1; c <=3; c++)
							{															
							printf("Please sign in with your new credentials\nUsername:");
							scanf("%d", &username);
							printf("New Password:");
							scanf("%d", &pass2);
							printf("--------------------------------------\n");
							
							//setting for pass2 
							newp == pass2;
								
								if(username == 123456 && pass2 == newp)
								{
									printf("Access granted, You Rock!!");
									return 0;
								}
								
								else if (username != 123456 || pass2 != newp)
								{
								printf("Invalid credentials, program terminates after 3 failed attempts\nPlease Try Again\n");
								printf("Failed Attempts = %d\n", c);
								printf("--------------------------------------\n");	
								
								//termination process
									if(c==3)
									{
										printf("Number of failed attempts reached\nProgram terminates");
										return 0;
									}
								}
							}
						
					}
				}
		}
		
		
		else if(username != 123456 || password != 1234)
		{
			printf("Invalid credentials, program terminates after 3 failed attempts\nPlease Try Again\n");
			printf("Failed Attempts = %d\n", a);
			printf("--------------------------------------\n");
		}
	}
	
	return 0;
}
