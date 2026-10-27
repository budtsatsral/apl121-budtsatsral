
#include <stdio.h>

int inputcheck(void);
int numbersum(int n);

int main(void)
{
    int a, b, c, n;
    int sum1, sum2, sum3, sum;
    int maxsum, i, multiply;
    int maxnum = 0;

    printf("Ehnii toogoo oruulna uu:\n");
    a = inputcheck();
    sum1 = numbersum(a);

    printf("Hoyrdahi too oruulna uu:\n");
    b = inputcheck();
    sum2 = numbersum(b);

    printf("Guravdahi too oruulna uu:\n");
    c = inputcheck();
    sum3 = numbersum(c);

    printf("n toog oruulna uu:\n");
    n = inputcheck();

    sum = numbersum(n);

    // Urjuuleh husnegt
    printf("\n--- Urjuuleh husnegt ---\n");
    printf("%-10s %6s %8s\n", "Too", "Urjuur", "Ur dun");
    printf("-------------------------------\n");

    for (i = 1; i <= 10; i++)
    {
        multiply = n * i;
        printf("%-10d %6d %8d\n", n, i, multiply);
    }

    // Gurvan toonii hamgiin ih tsifriin niilber
    maxsum = sum1;

    if (sum2 > maxsum)
    {
        maxsum = sum2;
    }

    if (sum3 > maxsum)
    {
        maxsum = sum3;
    }

    printf("\nHamgiin ih tsifriin niilber: %d\n", maxsum);

    maxsum = sum1;
    maxnum = 1;
    if (sum2 > maxsum)
    {
        maxsum = sum2;
        maxnum = 2;
    }
    if (sum3 > maxsum)
    {
        maxsum = sum3;
        maxnum = 3;
    }

    if (sum1 == sum2 && sum2 == sum3)
    {
        printf("gurvantoo ijil baina");
    }
    else if (sum1 == maxsum || sum2 == maxsum || sum3 == maxsum)
    {
        printf("hamgiin ih tsifriin niilber%d\n", maxsum);
        printf("ene ni oruulsan %d dahi too baina\n", maxnum);
    }

    return 0;
}

// Eyreg, 5 orontoi too shalgah
int inputcheck(void)
{
    int n;
    do
    {
        printf("Eyreg too bolon hamgiin urtdaa 5 orontoi too oruulna uu:\n");
        scanf("%d", &n);
    } while (n < 1 || n > 99999);
    // tegsh sondgoi
    if (n % 2 == 0)
    {
        printf("tegsh too baina \n");
    }
    else
    {
        printf("sondgoi too baina \n");
    }
    return n;
}

// Tsifriin niilber oloh
int numbersum(int n)
{
    int sum = 0;
    int reverse = 0;
    int digit = 0;
    int original = n;
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    printf("urvuu too: %d\n", reverse);
    printf("toonii niilber: %d\n", sum);
    return original;
}
