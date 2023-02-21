#include &lt;stdlib.h&gt;
#include &lt;time.h&gt;
#include &lt;stdio.h&gt;
/**
* main - Prints the last digit of a randomly generated number
* and whether it is greater than 5, less than 6, or 0.
*
* Return: Always 0.
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ((n % 10) &gt; 5)
{
printf(&quot;Last digit of %d is %d and is greater than 5\n&quot;,
n, n % 10);

}
else if ((n % 10) &lt; 6 &amp;&amp; (n % 10) != 0)
{
printf(&quot;Last digit of %d is %d and is less than 6 and not 0\n&quot;,
n, n % 10);

}
else
{
printf(&quot;Last digit of %d is %d and is 0\n&quot;,
n, n % 10);

}
return (0);
}
