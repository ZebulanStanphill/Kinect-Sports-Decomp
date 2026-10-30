typedef struct { int kind; int ver; int x8, xc, x10; unsigned int mask; int arg; int x1c, x20, x24; } Desc;
typedef union { unsigned __int64 q[5]; Desc d; } Self;

void fn_82631450(Self *s, int arg)
{
    int i;
    for (i = 0; i < 5; i++) {
        s->q[i] = 0;
    }
    s->d.kind = 7;
    s->d.ver = 1;
    s->d.mask = 0xffff0000;
    s->d.arg = arg;
}
