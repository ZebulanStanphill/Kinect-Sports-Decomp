struct Sub_824D33E8;
typedef struct VtA_824D33E8 { void *s0; struct Root_824D33E8 *(*f4)(void *); } VtA_824D33E8;
typedef struct VtB_824D33E8 { char pad[0x3c]; unsigned char (*f3c)(void *); } VtB_824D33E8;
typedef struct Sub_824D33E8 { VtB_824D33E8 *vt; } Sub_824D33E8;
typedef struct Root_824D33E8 { char pad[0x9cc]; Sub_824D33E8 sub; } Root_824D33E8;
typedef struct Obj14_824D33E8 { VtA_824D33E8 *vt; } Obj14_824D33E8;
typedef struct Self_824D33E8 { char pad[0x14]; Obj14_824D33E8 *o14; char pad2[0x9f4 - 0x18]; unsigned int f9f0; } Self_824D33E8;
extern int fn_824CD030();

unsigned int fn_824D33E8(Self_824D33E8 *self)
{
    Root_824D33E8 *root;
    Sub_824D33E8 *sub;
    Obj14_824D33E8 *o;
    if (fn_824CD030() != 0) {
        return self->f9f0;
    }
    o = self->o14;
    if (o != 0) {
        root = o->vt->f4(o);
        sub = &root->sub;
        return sub->vt->f3c(sub) != 0;
    }
    return 0;
}
