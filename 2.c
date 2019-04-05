#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    double x, leftX = -1, rightX = 1;

    printf("Enter x, N: ");
    if (scanf("%lf %d", &x, &N) != 2) {
        printf("Invalid input\n");
        return -1;
    }

    if (x < leftX || x > rightX) {
        char* fmt = "Incorrect %.4f. Need from [%.4f, %.4f]\n";
        printf(fmt, x, leftX, rightX);
        return -1;
    }

    double a = 1, S = 0;

    for (int n = 1; n <= N; ++n) {
        double q = -(pow(x,1.0/3)*n)/(n+1);
        S += a;
        a *= q;

    }

    S = S/3.0;

    printf("S=%.7f\n", S);
    double y = (1.0/3)*log(1+pow(x,1.0/3));
    printf("y=%.7f\n", y);
    double eps = fabs(y-S)/fabs(S)*100;
    printf("e=%.2f%%\n", eps);

    return 0;
}
