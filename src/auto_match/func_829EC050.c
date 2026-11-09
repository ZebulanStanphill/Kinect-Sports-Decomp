extern long _InterlockedDecrement(long *);
typedef struct Obj_829EC050 {
    void (**vt)(struct Obj_829EC050 *, int);
    char pad[8];
    long count;
} Obj_829EC050;
unsigned int fn_829EC050(Obj_829EC050 *p)
{
    if (_InterlockedDecrement(&p->count) == 0) {
        if (p) p->vt[0](p, 1);
        return 0;
    }
    return p->count;
}
