extern long _InterlockedDecrement(long *);

typedef struct Obj_82E49D00 {
    void (**vt)(struct Obj_82E49D00 *, int);
    char pad[0x24];
    long count;
} Obj_82E49D00;

long fn_82E49D00(Obj_82E49D00 *p)
{
    long n = _InterlockedDecrement(&p->count);
    if (n == 0) {
        if (p != 0)
            p->vt[0x20 / 4](p, 1);
        return 0;
    }
    return n;
}
