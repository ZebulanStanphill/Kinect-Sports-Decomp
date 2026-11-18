extern void *fn_82540308(int index);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_826230E8(void *mem, void *owner);
extern char lbl_821CAD7C[];

typedef struct Triple_82622A48 {
    int a; /* 0x0 */
    int b; /* 0x4 */
    int c; /* 0x8 */
} Triple_82622A48;

typedef struct Object_82622A48 {
    void *vtable;            /* 0x00 */
    int arg1;                /* 0x04 */
    int arg2;                /* 0x08 */
    int arg3;                /* 0x0c */
    int arg4;                /* 0x10 */
    int arg5;                /* 0x14 */
    void *context;           /* 0x18 */
    Triple_82622A48 *triple; /* 0x1c */
    int unk20;               /* 0x20 */
    void *children[3];       /* 0x24 */
} Object_82622A48;

static __forceinline Triple_82622A48 *InitTriple(Triple_82622A48 *triple)
{
    triple->a = 0;
    triple->b = 0;
    triple->c = 0;
    return triple;
}

Object_82622A48 *fn_82622A48(Object_82622A48 *self, int arg1, int arg2, int arg3, int arg4, int arg5,
                             void *owner)
{
    int i;
    void *mem;

    self->arg1 = arg1;
    self->arg2 = arg2;
    self->arg3 = arg3;
    self->arg4 = arg4;
    self->vtable = lbl_821CAD7C;
    self->arg5 = arg5;
    self->context = fn_82540308(0);
    mem = fn_8265C9E0(0xc);
    self->triple = mem != 0 ? InitTriple((Triple_82622A48 *)mem) : 0;
    if (owner != 0) {
        for (i = 0; i < 3; i++) {
            mem = fn_8265C9E0(0x20);
            self->children[i] = mem != 0 ? fn_826230E8(mem, owner) : 0;
        }
    } else {
        for (i = 0; i < 3; i++) {
            self->children[i] = 0;
        }
    }
    return self;
}
