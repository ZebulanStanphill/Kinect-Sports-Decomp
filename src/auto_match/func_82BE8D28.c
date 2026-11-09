extern long _InterlockedIncrement(long *);

typedef struct Obj_82BE8D28 {
    char pad_0[4];
    long count;
} Obj_82BE8D28;

void fn_82BE8D28(Obj_82BE8D28 *p)
{
    _InterlockedIncrement(&p->count);
}
