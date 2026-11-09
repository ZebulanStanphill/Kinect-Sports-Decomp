extern long _InterlockedIncrement(long *);

typedef struct Obj_83032B08 {
    char pad_0[0x10];
    long count;
} Obj_83032B08;

void fn_83032B08(Obj_83032B08 *p)
{
    _InterlockedIncrement(&p->count);
}
