#include<stdio.h>
void printBinary(int num) {
if (num == 0) {
printf("0");
return;
}
char binary[32];
int i = 0;
while (num >0) {
binary[i] = (num % 2) +'0';
num = num/2;
i++;
}
for (int j = i - 1; j >= 0; j--) {
printf("%c", binary[j]);
}
}
int main() {
int number;
printf("Enter a number:" );
scanf("%d",number);
printf("Binary representation:");
printBinary(number);
printf("\n");
return 0;
}
