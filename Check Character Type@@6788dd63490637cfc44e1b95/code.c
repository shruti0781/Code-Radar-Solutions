#include <stdio.h>
int main() {
    int a;
    scanf("%c",&a);
    if (a =='a'|| a =='e'||a=='i'||a=='o'||a=='u')
    {
        printf("Vowel");
    }
    else if (a>'b'&& a<='d'|| a>'f' && a<='h' ||a>'j' && a<='n'|| a>'p' && a<='t'|| a>'v'&& a<='z')
    {
        printf("Consonant");
    }
    else if (a =='@'|| a =='#' || a=='$'|| a=='!'|| a==':'||a=='~'|| a==';')
    {
        printf("Special Character");
    }
    else{
        printf("Digit");
    }
}