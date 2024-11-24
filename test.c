// test.c

int main(void)
{
    int a, b, temp;
    int * p1, * p2, * p;

    a = 10;
    b = 20;

    p1 = &a;
    p2 = &b;

    p = p1;
    p1 = p2;
    p2 = p;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    return 0;
}