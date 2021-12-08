#define _CRT_SECURE_NO_WARNINGS 

#include <iostream> 
#include <ObjIdl.h>

using namespace std;

int Itr(char* str)
{
    int  count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] == 'b') && (str[i - 1] == 'a') && (str[i + 1] == 'c'))
        {
            count++;
        }
    }
    return count;
}


char* Replace(char* str)
{
    int i = 0;
    for (i = 0; str[i] != '\0' && str[i + 1] != '\0' && str[i + 2] != '\0'; i++)
    {
        if ((str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c'))
        {
            str[i] = '*';
            str[i + 1] = '*';
            str[i + 2] = ' ';
        }
    }
    return str;
}
int main()
{
    char s[40];
    char str[40];
    cout << "Enter string:" << endl;
    cin.getline(str, 40);
    cout << endl << "Count abc =" << Itr(str) << endl;
    char* changed = new char[40];
    changed = Replace(str);
    cout << "S=   " << changed << endl;
}