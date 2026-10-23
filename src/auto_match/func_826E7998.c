typedef int (*code)();

typedef struct S {
    char pad0[0x10];
    int **obj;
    char pad14[0x2c - 0x14];
    unsigned int a;
    unsigned int b;
    unsigned int c;
} S;

void fn_826E7998(S *p)
{
    int r;

    r = (*(code *)(*p->obj + 0x38 / 4))(p->obj, (p->c - p->b) + p->a, 0);
    if (r != -1) {
        p->c = r;
        p->a = 0;
        p->b = 0;
    }
}
