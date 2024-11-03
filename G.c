#include <stdio.h>
float force(int, float);
float force(int mass, float gravity)
{
    float res = mass * gravity;
    return res;
}
int main()
{
    float f;
    int m;
    float g = 9.8;
    printf("Enter the mass and mass would be calculated as Kg ");
    scanf("%d", &m);
    f = force(m, g);
    printf("So, the force of attraction on the body would be %.0f newtons. If you have a specific mass in mind, let me know, and I can calculate it for you! ", f);
    return 0;
}