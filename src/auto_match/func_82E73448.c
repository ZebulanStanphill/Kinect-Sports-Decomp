extern long _InterlockedIncrement(long *);

typedef struct Obj_82E73448 {
    char pad_0[8];
    long count;
} Obj_82E73448;

void fn_82E73448(Obj_82E73448 *p)
{
    _InterlockedIncrement(&p->count);
}
