struct Decl_82AC8C90 {
    unsigned int pad0 : 1;
    unsigned int isSlot : 1;
    unsigned int pad1 : 2;
    unsigned int kind : 3;
    unsigned int index : 12;
    unsigned int pad2 : 13;
};
struct Table_82AC8C90 { void *ctx; unsigned int slots[1]; };

extern void fn_82AA66A8(void *ctx, int code);

static __forceinline unsigned char IsSlot(struct Decl_82AC8C90 *decl)
{
    return decl->isSlot && decl->kind == 0;
}

void fn_82AC8C90(struct Table_82AC8C90 *self, struct Decl_82AC8C90 *decl, int unused, unsigned int value)
{
    unsigned int *slot;

    if (!IsSlot(decl)) {
        return;
    }
    slot = &self->slots[decl->index];
    if (*slot != 0) {
        if (*slot != value) {
            fn_82AA66A8(self->ctx, 0x12c0);
        }
    } else {
        *slot = value;
    }
}
