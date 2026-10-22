extern void *fn_82E50BE8(int a, int b, int c, int d, int e);
extern char lbl_82154D40[];

typedef struct S {
    void *vt;
    int ref;
    void *h;
    int size;
    int x;
} S;

S *fn_82E59050(S *p, int size, int *phr)
{
    int hr;
    p->size = size;
    p->h = 0;
    p->vt = lbl_82154D40;
    p->ref = 1;
    p->x = 0;
    p->h = fn_82E50BE8(size, 0, 0, 0, 0);
    if (p->h != 0) {
        hr = 0;
    } else {
        p->x = 0;
        p->size = 0;
        hr = 0x8007000e;
    }
    if (phr != 0) {
        *phr = hr;
    }
    return p;
}
