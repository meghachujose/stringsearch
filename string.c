#include<stdio.h>
#include<string.h>
char str[100],pat[100],rep[100],res[100];
int flag=0;
void read();
void search();
void read()
{
 printf(“\n enter the main word”);
gets(str);
printf(“\n enter the pattern”);
gets(str);
printf(“\nenter the replacing word”);
gets(pat);
}
void search()
{
Int i=0,j=0,k=0,l=0;
While(str[i]!=’\0’);
{
 If (str[i]==pat[i])
{
i++;
j++;
if(pat[j]==’\0’)
{
i++;
j++;
if(pat[j]==’\0’)
{
flag=1;
for(k=0;rep[k]!=’\0’;k++)
{
res[i]=rep[k];
i++;
}
J=0;
}
}
else{
res[l]=strstr[i];
l++;
i++;
}
}
}
void main()
{
read();
search();
if(flag==1)
printf(“\n the resulted word is %s \n”,res);
else
printf(“error! Pattern not found\n”);
}
