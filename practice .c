#include <stdio.h>

void main()
{
    int x = 2, y = 3, z = 6;
    int ans1, ans2, ans3;
    ans1 = x / z * y;
    ans2 = y + z / y * 2;
    ans3 = z / x + x * y;
    printf("%d %d %d", ans1, ans2, ans3);
}
