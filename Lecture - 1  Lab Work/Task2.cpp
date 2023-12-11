#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    cout << "Enter a string : ";
    gets(str); 
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            if (islower(str[i]))
                str[i] = toupper(str[i]);
            else
                str[i] = tolower(str[i]);
        }
    }
    cout << "string : " << str;
}
