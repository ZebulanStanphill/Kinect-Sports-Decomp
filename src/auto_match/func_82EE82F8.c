extern long _InterlockedIncrement(long *);

typedef struct Obj_82EE82F8 {
    char pad_0[0x10];
    long count;
} Obj_82EE82F8;

long fn_82EE82F8(Obj_82EE82F8 *p)
{
    return _InterlockedIncrement(&p->count);
}
