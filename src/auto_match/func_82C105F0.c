typedef struct E { int used; int a; int b; } E;

int fn_82C105F0(E *e, int i, int a, int b)
{
    int hr = 0;
    if (i >= 7) {
        hr = 0x80070057;
    } else {
        E *p = &e[i];
        p->used = 1;
        p->a = a;
        p->b = b;
    }
    return hr;
}
