#include &lt;stdio.h&gt;
void printBinary(int num) {
if (num == 0) {
printf(&quot;0&quot;);
return;
}
char binary[32];
int i = 0;
while (num &gt; 0) {
binary[i] = (num % 2) + &#39;0&#39;;
num = num/2;
i++;
}
for (int j = i - 1; j &gt;= 0; j--) {
printf(&quot;%c&quot;, binary[j]);
}
}
int main() {
int number;
printf(&quot;Enter a number: &quot;);
scanf(&quot;%d&quot;, &amp;number);
printf(&quot;Binary representation: &quot;);
printBinary(number);
printf(&quot;\n&quot;);
return 0;
}
