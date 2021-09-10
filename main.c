#include <stdio.h>
#define x 10
#define y 30
#define SUM(a,b) (a)+(b)
#define MUL(a,b) (a)*(b)

// Hi
//void print_hello(void);

int main(void)
{
    char arr[5];
    printf("arr = %p\n&arr[0] = %p\n&arr = %p", arr, &arr[0], &arr);
    /*int *p = 0;
    printf("%p", p);
    /*union a{
        int i;
        char ch[2];
    };
    union a u;
    u.ch[0] = 3;
    u.ch[1] = 2;
    printf("%d, %d, %d\n", u.ch[0], u.ch[1], u.i);
    /*enum color {red, green, blue};
    typedef enum color myColor;
    myColor m = red;
    printf("%d\n", m);
    /*odd_or_even(7);
    print_hello();
    /*int num1, num2;
    printf("Enter value of num1:\n");
    scanf("%d", &num1);

    printf("Enter value of num2:\n");
    scanf("%d", &num2);

    if (num1 < x)
            printf("%d is less than %d\n", num1, x);

    if (num2 < y)
            printf("%d is less than %d\n", num2, y);

    printf("The sum of %d and %d is %d\n", num1, num2, SUM(num1, num2));
    printf("The multiplication of %d and %d is %d\n", num1, num2, MUL(num1, num2));
    printf("The (%d + %d) * %d = %d\n", num1, num2, num1, MUL(SUM(num1, num2), num1));*/
	return 0;
}

/*void print_hello(void){
    void odd_or_even(int);
    printf("Hello\n");
}

void odd_or_even(int num)
{
    if((num % 2) == 0){
        printf("Even\n");
        return;
    }
    printf("Odd\n");
}*/
