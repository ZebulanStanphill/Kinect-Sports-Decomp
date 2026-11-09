extern long _InterlockedDecrement(long *);

typedef struct Obj_82E469A8 {
    void (**vt)(struct Obj_82E469A8 *, int);
    char pad[0x28];
    long count;
} Obj_82E469A8;

long fn_82E469A8(Obj_82E469A8 *p)
{
    long *count = &p->count;
    long n = _InterlockedDecrement(count);
    if (n == 0) {
        *count = 1;
        p->vt[0xbc / 4](p, 1);
    }
    return n;
}
