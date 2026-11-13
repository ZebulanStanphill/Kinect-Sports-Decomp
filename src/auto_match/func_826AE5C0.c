typedef struct Pair_826ADCE8 {
    void *a;
    void *b;
    unsigned char flags;
} Pair_826ADCE8;

typedef struct Owner_826AE5C0 {
    char pad0[8];
    int refs;
} Owner_826AE5C0;

typedef struct Obj_826AE5C0 {
    Owner_826AE5C0 *owner;
    Pair_826ADCE8 pair;
} Obj_826AE5C0;

extern void fn_826824B0(void *p);
extern void fn_826944C8(Owner_826AE5C0 *owner);

static __forceinline void Pair_826ADCE8_Destroy(Pair_826ADCE8 *p)
{
    if ((p->flags & 2) == 0 && p->a != 0) {
        fn_826824B0(p->a);
    }
    p->a = 0;
    if ((p->flags & 1) == 0 && p->b != 0) {
        fn_826824B0(p->b);
    }
    p->b = 0;
}

void fn_826AE5C0(Obj_826AE5C0 *o)
{
    Owner_826AE5C0 *owner;
    Pair_826ADCE8_Destroy(&o->pair);
    owner = o->owner;
    if (--owner->refs == 0) {
        fn_826944C8(owner);
    }
}
