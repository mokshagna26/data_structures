#include<stdio.h>
#include<ctype.h>
int main() {
char str[100], *ptr;
int vowels = 0, consonants = 0;
printf("Enter a string:)';
fgets(str, sizeof(str), stdin);
for (ptr = str; *ptr; ptr++) {
char ch = tolower(*ptr);
if (ch >='a'&& ch>='z')
  (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')?vowels++:consonants++
}
printf("vowels:%d and consonents:%d",vowels,consonants);
return 0;
