#include<stdio.h>
#include<string.h>
int main()
{
char s[100],x; 
int l,i;

scanf("%s",s);
l=strlen(s);
if(l%2==0)
{
for(i=0;i<l;i+=2)
{
x=s[i];
s[i]=s[i+1];
s[i+1]=x;

}
printf("%s",s);
}
else
{
for(i=0;i<(l-1);i+=2)
{
x=s[i];
s[i]=s[i+1];
s[i+1]=x;

}
printf("%s",s);
}
return 0;
}
