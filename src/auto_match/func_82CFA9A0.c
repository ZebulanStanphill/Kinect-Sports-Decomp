extern int fn_82CE5250();
extern int fn_82CE5410();

typedef struct S {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
} S;

S *fn_82CFA9A0(S *p, int n)
{
    int t = fn_82CE5410();
    p->a = fn_82CE5250(*(int *)(t + 0x10), n, 0x40);
    p->d = n;
    p->b = 0;
    p->c = 0;
    p->e = -1;
    p->f = -1;
    return p;
}
