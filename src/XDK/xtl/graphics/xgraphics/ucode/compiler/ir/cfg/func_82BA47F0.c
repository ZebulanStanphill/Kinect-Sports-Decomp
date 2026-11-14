typedef struct { void **vt; } Iface;
typedef struct Instr_82BA47F0 { char pad[0x50]; int opcode; } Instr_82BA47F0;
typedef struct Node_82BA47F0 { Instr_82BA47F0 *instr; } Node_82BA47F0;
typedef struct Array_82BA47F0 {
    int pad0;
    int size;                  /* +0x4 */
    Node_82BA47F0 *data;       /* +0x8 */
} Array_82BA47F0;
typedef struct Cfg_82BA47F0 {
    char pad0[0xc];
    char *ctx;                 /* +0xc */
    int graph;                 /* +0x10 */
    char pad14[0x60 - 0x14];
    Array_82BA47F0 *nodes;     /* +0x60 */
} Cfg_82BA47F0;

extern char lbl_82196F10[];
extern int fn_82B7C800();
extern int fn_82B9A6C0();
extern void fn_82AB15D0();
extern Node_82BA47F0 *fn_82BC0088(Array_82BA47F0 *a, unsigned int index);
extern void fn_82BA1980(Cfg_82BA47F0 *self);
typedef int (*Fn)(Iface *);

static __forceinline Node_82BA47F0 *At(Array_82BA47F0 *a, unsigned int index)
{
    if (index < (unsigned int)a->size)
        return &a->data[index];
    return fn_82BC0088(a, index);
}

void fn_82BA47F0(Cfg_82BA47F0 *self)
{
    char *ctx = self->ctx;
    Iface *d = *(Iface **)(ctx + 0x5d0);
    int r = fn_82B9A6C0(self->graph, 0, ((Fn)d->vt[7])(d), (void *)fn_82B7C800, ctx);
    switch (r) {
    case 1: {
        unsigned char found = 0;
        int i;
        for (i = 0; i < self->nodes->size; i++) {
            if (At(self->nodes, i)->instr->opcode == 0x17) {
                found = 1;
                break;
            }
        }
        if (!found)
            fn_82BA1980(self);
        break;
    }
    case 3: fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", lbl_82196F10, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\cfg.cpp", 0x502); break;
    }
}
