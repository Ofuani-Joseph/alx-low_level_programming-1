#include &lt;stdlib.h&gt;
#include &lt;time.h&gt;
#include &lt;stdio.h&gt;
/**
* main - Determines if a number is positive, negative or zero.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n &gt; 0)
{
printf(&quot;%d is positive\n&quot;, n);
}
else if (n == 0)
{
printf(&quot;%d is zero\n&quot;, n);
}
else
{
printf(&quot;%d is negative\n&quot;, n);
}
return (0);
}
