extern long _InterlockedDecrement(long *);

typedef struct Obj_82F34B50 {
    void (**vt)(struct Obj_82F34B50 *, int);
    char pad[0x48 - 4];
    long count;
} Obj_82F34B50;

unsigned long fn_82F34B50(Obj_82F34B50 *p)
{
    unsigned long n = _InterlockedDecrement(&p->count);
    if (n == 0) {
        if (p != 0)
            p->vt[0x6c / 4](p, 1);
        return 0;
    }
    return n;
}
