extern long _InterlockedDecrement(long *);

typedef struct Obj_82A86258 {
    void (**vt)(struct Obj_82A86258 *, int);
    long count;
} Obj_82A86258;

long fn_82A86258(Obj_82A86258 *p)
{
    long n = _InterlockedDecrement(&p->count);
    if (n == 0 && p != 0)
        (*p->vt)(p, 1);
    return n;
}
