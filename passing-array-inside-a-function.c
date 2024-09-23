#include<stdio.h>

#include<string.h>

void str(char yn[])

{  printf("your name is ");
  
puts(yn);

}

int main()

{ char name[20];
  
printf("Enter name= ");
  
fgets(name,sizeof(name),stdin);
  
name[strcspn(name,"\n")]='\0';
  
str(name);
    
return 0;

}