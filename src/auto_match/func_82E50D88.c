extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_82A1E650(int h, int t);

typedef struct S {
    char pad[0x20];
    int h;
    int a;
    int b;
    unsigned int c;
    unsigned int d;
} S;

int fn_82E50D88(S *p)
{
    int f = 0;
    RtlEnterCriticalSection(p);
    if (p->d > 0 || p->c > 0) {
        f = 1;
        p->a++;
    } else {
        p->b++;
    }
    RtlLeaveCriticalSection(p);
    if (f) {
        fn_82A1E650(p->h, -1);
    }
    return 0;
}
