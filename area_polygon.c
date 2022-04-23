#include <stdio.h>
#include <math.h>
void area_Rectangle(){
    int Length;
    int Width;
    scanf("%d",&Length);
    scanf("%d",&Width);
    int Area;
    Area = Length * Width; 
    printf("%d\n",Area);

    
};
void area_Triangle(){
    int base;
    int height;
    int Area;
    scanf("%d",&base);
    scanf("%d",&height);
    Area = (base*height)/2;
    printf("%d\n",Area);
};

void area_Circle(){
    float radius;
    float Area;
    scanf("%f",&radius);
    Area = 3.142*radius*radius;
    printf("%0.4f\n",Area);
};
 int main(){
    // t ,r,c
    char choice;
    scanf("%hhd",&choice);
    switch (expression)
    {
    case 1 :
        area_Circle();
        break;
    case 2:
        area_Rectangle();
        break;
    case 3:
        area_Triangle;
        break;
    
    default:
        break;
    }
    
    
}