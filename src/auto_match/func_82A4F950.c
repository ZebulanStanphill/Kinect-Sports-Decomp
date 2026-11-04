extern long _InterlockedIncrement(long *);

typedef struct Obj_82A4F950 {
    char pad_0[0x1c];
    long count;
} Obj_82A4F950;

long fn_82A4F950(Obj_82A4F950 *p)
{
    return _InterlockedIncrement(&p->count);
}
