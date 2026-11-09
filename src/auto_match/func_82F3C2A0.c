extern long _InterlockedDecrement(long *);

typedef struct Obj_82F3C2A0 {
    void (**vt)(struct Obj_82F3C2A0 *, int);
    char pad[0x48 - 4];
    long count;
} Obj_82F3C2A0;

unsigned long fn_82F3C2A0(Obj_82F3C2A0 *p)
{
    unsigned long n = _InterlockedDecrement(&p->count);
    if (n == 0) {
        if (p != 0)
            p->vt[0x30 / 4](p, 1);
        return 0;
    }
    return n;
}
