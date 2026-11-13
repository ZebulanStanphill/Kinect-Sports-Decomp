typedef struct Node_82931498 Node_82931498;
typedef struct NodeVtbl_82931498 {
    void *slot0;
    Node_82931498 *(*Clone)(Node_82931498 *self);
} NodeVtbl_82931498;
struct Node_82931498 {
    NodeVtbl_82931498 *vt;
};

typedef struct Obj_82931498 {
    void *vtbl;
    int type;
    int field08;
    int field0c;
    Node_82931498 *a;
    Node_82931498 *b;
    int field18;
    int field1c;
    int field20;
    Node_82931498 *c;
} Obj_82931498;

extern void **fn_82934160(void);
extern Obj_82931498 *fn_829301D0(void *heap, int size, int align);
extern char lbl_8202F11C[];

static __forceinline Obj_82931498 *Construct(Obj_82931498 *o)
{
    o->type = 0x15;
    o->field08 = 0;
    o->vtbl = lbl_8202F11C;
    o->field0c = 0;
    o->a = 0;
    o->b = 0;
    o->field18 = 0;
    o->field1c = 0;
    o->field20 = 0;
    o->c = 0;
    return o;
}

Obj_82931498 *fn_82931498(Obj_82931498 *self)
{
    Obj_82931498 *mem = fn_829301D0(*fn_82934160(), 0x28, 0x10);
    Obj_82931498 *o;

    if (mem != 0) {
        o = Construct(mem);
    } else {
        o = 0;
    }
    if (o == 0) {
        return 0;
    }
    o->field1c = self->field1c;
    o->field18 = self->field18;
    o->field20 = self->field20;
    if (self->a != 0) {
        o->a = self->a->vt->Clone(self->a);
        if (o->a == 0) {
            goto fail;
        }
    }
    if (self->b != 0) {
        o->b = self->b->vt->Clone(self->b);
        if (o->b == 0) {
            goto fail;
        }
    }
    if (self->c != 0) {
        o->c = self->c->vt->Clone(self->c);
        if (o->c == 0) {
            goto fail;
        }
    }
    return o;
fail:
    return 0;
}
