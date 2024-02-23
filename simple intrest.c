# include <stdio.h>
int main()
{
  int profit;
  int time;
  int ROI;
  float simpleintrest;

  printf("enter the value of profit\n");
  scanf("%d",&profit);
  printf("enter the value of time\n");
  scanf("%d",&time);
  printf("enter the value of ROI\n");
  scanf("%d",&ROI);
  simpleintrest=(profit*time*ROI)/100;
  printf("The simple intrest is%f",simpleintrest);

      return 0;

}