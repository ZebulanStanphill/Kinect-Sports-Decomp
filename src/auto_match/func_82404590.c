typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Body_82404590 {
    char pad0[0x5b0];
    int context;             /* 0x5b0 */
    char pad5b4[0x17c];
    __vector4 push;          /* 0x730 */
} Body_82404590;

typedef struct Pair_82404590 Pair_82404590;
typedef struct PairVtbl_82404590 {
    void *slot0;
    Body_82404590 *(*GetFirst)(Pair_82404590 *self);
    Body_82404590 *(*GetSecond)(Pair_82404590 *self);
} PairVtbl_82404590;
struct Pair_82404590 {
    const PairVtbl_82404590 *vt;
};

typedef struct Separator_82404590 {
    char pad0[0x24];
    Pair_82404590 *pair;     /* 0x24 */
} Separator_82404590;

typedef struct Owner_82404590 Owner_82404590;
typedef struct OwnerVtbl_82404590 {
    void *slots[3];
    Separator_82404590 *(*GetSeparator)(Owner_82404590 *self);
} OwnerVtbl_82404590;
struct Owner_82404590 {
    const OwnerVtbl_82404590 *vt;
};

typedef struct World_82404590 {
    char pad0[0x3ec];
    Owner_82404590 *owner;
} World_82404590;

typedef struct Obj_82404590 {
    char pad0[0x80];
    World_82404590 *world;
} Obj_82404590;

__vector4 *fn_82321D30(__vector4 *out, int context, Body_82404590 *body, __vector4 v);

void fn_82404590(Obj_82404590 *self, unsigned int which, __vector4 v)
{
    Separator_82404590 *sep = self->world->owner->vt->GetSeparator(self->world->owner);
    Body_82404590 *b;
    __vector4 tmp;

    switch (which) {
    case 0:
        b = sep->pair->vt->GetFirst(sep->pair);
        b->push = *fn_82321D30(&tmp, b->context, b, v);
        break;
    case 1:
        b = sep->pair->vt->GetSecond(sep->pair);
        b->push = *fn_82321D30(&tmp, b->context, b, v);
        break;
    }
}
