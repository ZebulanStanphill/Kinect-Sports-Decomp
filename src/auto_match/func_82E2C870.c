extern long _InterlockedIncrement(long *);

typedef struct Obj_82E2C870 {
    char pad_0[0x30];
    long count;
} Obj_82E2C870;

long fn_82E2C870(Obj_82E2C870 *p)
{
    return _InterlockedIncrement(&p->count);
}
