typedef struct RefCount_8232E600 RefCount_8232E600;

typedef struct SharedPtr_8232E600 {
    void *ptr;
    RefCount_8232E600 *rep;
} SharedPtr_8232E600;

typedef struct Owner_8232E600 {
    char pad0[0x18];
    SharedPtr_8232E600 target;      /* 0x18 */
} Owner_8232E600;

extern void fn_822315A0(RefCount_8232E600 *rep);

static __forceinline void Reset(SharedPtr_8232E600 *sp)
{
    RefCount_8232E600 *rep = sp->rep;
    sp->rep = 0;
    sp->ptr = 0;
    if (rep != 0)
        fn_822315A0(rep);
}

void fn_8232E600(Owner_8232E600 *self)
{
    Reset(&self->target);
}
