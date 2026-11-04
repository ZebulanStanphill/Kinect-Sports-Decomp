extern long _InterlockedIncrement(long *);

typedef struct Obj_82E49758 {
    char pad_0[0x54];
    long count;
} Obj_82E49758;

long fn_82E49758(Obj_82E49758 *p)
{
    return _InterlockedIncrement(&p->count);
}
