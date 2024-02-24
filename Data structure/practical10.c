#include <stdio.h>
void towerOfHanoi(int n, char beg, char aux, char end)
{
if (n==1)
{
printf("\n The Disk is moved from %c to %c", beg, end);
return;
}
towerOfHanoi(n-1, beg, end, aux);
printf("\n The disk is moved from %c to %c", beg, end);
towerOfHanoi(n-1, aux, beg, end);
}
int main()
{
printf("We are solving tower of Hanoi problem for 4 disk:\n");
int n=4;
towerOfHanoi(n, 'A', 'B', 'C');
return 0; }