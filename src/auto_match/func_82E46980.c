extern long _InterlockedIncrement(long *);

typedef struct Obj_82E46980 {
    char pad_0[0x2c];
    long count;
} Obj_82E46980;

long fn_82E46980(Obj_82E46980 *p)
{
    return _InterlockedIncrement(&p->count);
}
