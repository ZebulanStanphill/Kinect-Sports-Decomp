extern long _InterlockedIncrement(long *);

typedef struct Obj_82E435B8 {
    char pad_0[0x38];
    long count;
} Obj_82E435B8;

long fn_82E435B8(Obj_82E435B8 *p)
{
    return _InterlockedIncrement(&p->count);
}
