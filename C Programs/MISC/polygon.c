#include <stdio.h>
#include <math.h>
#define pie 3.1415926
int main(int argc, char const *argv[])
{   int nside                        ;
    double lside,angle                    ;
    double trigfunc,area1;
    printf("Enter no of sides of regular Polygon");
    scanf("%d",&nside);
    printf("Enter length of side of Polygon");
    scanf("%lf",&lside);
    angle=(2*pie)/nside;
    trigfunc=tan((pie-angle)/2);
    area1=(lside*lside*trigfunc)/4;
    printf("Area of polygon is = %lf sq unit",nside*area1);
    return 0;
}
