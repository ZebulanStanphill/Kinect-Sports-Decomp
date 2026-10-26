extern void fn_8267C4F0(void *p);

typedef struct { void *h; } H;
typedef struct { H *h; } S;

void fn_826F6B80(S *p)
{
    if (p->h->h) {
        fn_8267C4F0(p->h->h);
        p->h->h = 0;
    }
}
