// Program to find day on a given Date
#include <stdio.h>
int leapchecker(int year);
int main()
{
  char daye[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  int year, month, day, rem400, quot100, quot4, compyear, remcent, i, oddday, rem100, rem4, remmonth = 0, remday;
shubham:
  printf("Please enter the date for which the day should be found (Day-Month-Year) \n");
  scanf("%d %d %d", &day, &month, &year);
  compyear = year - 1;
  int monthrem[12] = {3, 0, 3, 2, 3, 2, 3, 3, 3, 2, 3, 2};
  if (leapchecker(year))
    monthrem[1] = 1;
  rem400 = compyear % 400;
  quot100 = (rem400) / 100;
  rem100 = (rem400) % 100;
  quot4 = (rem100) / 4;
  rem4 = (rem100) % 4;
  remcent = (5 * quot100) + (rem100 - quot4) + (quot4 * 2);
  for (i = 0; i < month - 1; i++)
  {
    remmonth = remmonth + monthrem[i];
  }
  remday = day % 7;
  oddday = (remcent + remmonth + remday) % 7;
  printf("Day is %s \n", daye[oddday]);
  return 0;
}
int leapchecker(int year)
{
  int leap;
  if (year % 100 == 0)
  {
    if (year % 400 == 0)
      leap = 1;
    else
      leap = 0;
  }
  else
  {
    if (year % 4 == 0)
      leap = 1;
    else
      leap = 0;
  }
  return (leap);
}