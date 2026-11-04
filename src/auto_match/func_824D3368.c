struct Sub_824D3368;
typedef struct VtA_824D3368 { void *s0; struct Root_824D3368 *(*f4)(void *); } VtA_824D3368;
typedef struct VtB_824D3368 { char pad[0x3c]; unsigned char (*f3c)(void *); } VtB_824D3368;
typedef struct Sub_824D3368 { VtB_824D3368 *vt; } Sub_824D3368;
typedef struct Root_824D3368 { char pad[0xa20]; Sub_824D3368 sub; } Root_824D3368;
typedef struct Obj14_824D3368 { VtA_824D3368 *vt; } Obj14_824D3368;
typedef struct Self_824D3368 { char pad[0x14]; Obj14_824D3368 *o14; char pad2[0x9f0 - 0x18]; unsigned int f9f0; } Self_824D3368;
extern int fn_824CD030();

unsigned int fn_824D3368(Self_824D3368 *self)
{
    Root_824D3368 *root;
    Sub_824D3368 *sub;
    Obj14_824D3368 *o;
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
