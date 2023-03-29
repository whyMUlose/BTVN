#include <iostream>
using namespace std;
int strlen(char s[])
{
    int len = 0;
    while(s[len] != '\0')
    {
        len++;
    }
    return len;
}
 void reverse(char s[])
{
    int n=strlen(s);
    for (int i=0;i<n/2;i++)
    {
        char k=s[i];
        s[i] = s[n-i-1] ;
        s[n-i-1] = k;
    }
};
void xoa(char s[], int vtxoa)
{}
void delete_char(char s[], char c)
{
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
     if(s[i]=='c')
     {
         for(int j = i;i<n;j++)
         {s[j] = s[j+1];
         }
         n--;
     }
    }
}
void pad_right(char s[], int n)
{
    if(strlen(s) < n)
    { int i =strlen(s);
        while(i<n){
            s[i] = '_';
    i++;
    }
    s[i] = '\0';
    }
}
void pad_left(char s[], int n)
{
    if (strlen(s) < n) {
		for (int i = strlen(s); i < n; ++i) {
			s = "0" + s;
		}
}
}
void truncate(char s[], int n){
    int len = strlen(s);
    if (len>n){
        int i = len-1;
        while (len>n && i>=0){
            i--;
        }
        a[i+1]='\0';
    }
}

