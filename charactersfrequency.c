#include<stdio.h>
#include<string.h>
int main()
{
char alpha[20];
int num[20];
char str[20];
scanf("%s",str);
int front=0,rear=0;
int len=strlen(str);
alpha[rear]=str[0];
num[rear]=1;
for(int i=1;i<len;i++)
{
if(str[i]==alpha[rear])
num[rear]++;
else
{
alpha[++rear]=str[i];
num[rear]=1;
}
}
while(front<=rear){
printf("%c%d",alpha[front],num[front]);
front++;}
}
