extern void fn_82D81240(void *, int, int);

typedef struct Ref_825A86A8 {
    char pad[8];
    int target;
} Ref_825A86A8;

typedef struct A_825A86A8 {
    char pad0[4];
    Ref_825A86A8 *ref;
    unsigned int key;
    char pad1[4];
} A_825A86A8;

typedef struct B_825A86A8 {
    char pad0[0xd4];
    Ref_825A86A8 *ref;
    char pad1[0xe4 - 0xd8];
    unsigned int key;
    char pad2[0x3f0 - 0xe8];
} B_825A86A8;

typedef struct Owner_825A86A8 {
    char pad[0x744];
    A_825A86A8 *abegin;
    A_825A86A8 *aend;
    char pad2[0x758 - 0x74c];
    B_825A86A8 *bbegin;
    B_825A86A8 *bend;
} Owner_825A86A8;

void fn_825A86A8(Owner_825A86A8 *o, unsigned int key)
{
    A_825A86A8 *a;
    A_825A86A8 *aend;
    B_825A86A8 *b;
    B_825A86A8 *bend;
    char buf[1];
    a = o->abegin;
    aend = o->aend;
    for (; a < aend; a++) {
        if (a->key == key && a->ref != 0 && a->ref->target != 0)
            fn_82D81240(buf, a->ref->target, (int)a->ref);
    }
    b = o->bbegin;
    bend = o->bend;
    for (; b < bend; b++) {
        if (b->key == key && b->ref != 0 && b->ref->target != 0)
            fn_82D81240(buf, b->ref->target, (int)b->ref);
    }
}
