extern long _InterlockedIncrement(long *);

typedef struct Obj_82E2D510 {
    char pad_0[0x50];
    long count;
} Obj_82E2D510;

long fn_82E2D510(Obj_82E2D510 *p)
{
    return _InterlockedIncrement(&p->count);
}
