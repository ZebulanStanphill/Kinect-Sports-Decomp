typedef struct Inst_82AF6E60 {
    int pad0[2];
    unsigned int pad8 : 18;
    unsigned int opcode : 7;
    unsigned int rest8 : 7;
} Inst_82AF6E60;

typedef struct Src_82AF6E60 {
    unsigned int pad0 : 4;
    unsigned int type : 3;
    unsigned int pad7 : 12;
    unsigned int index : 8;
    unsigned int swizzle : 5;
    int pad4[2];
    Inst_82AF6E60 *inst;
} Src_82AF6E60;

typedef struct Node_82AF6E60 {
    int pad0[2];
    unsigned int pad8 : 10;
    unsigned int srcCount : 3;
    unsigned int rest8 : 19;
    char padC[0x20];
    Src_82AF6E60 *srcs[1];
} Node_82AF6E60;

typedef struct Info_82AF6E60 {
    int v[4];
} Info_82AF6E60;

extern unsigned int fn_82AF4BA8(void *ctx, Inst_82AF6E60 *inst, unsigned int type, unsigned int index,
                                unsigned int swizzle, Info_82AF6E60 *info);
extern void fn_82AF6CC8(void *ctx, Node_82AF6E60 *node, unsigned int mask);

static __forceinline unsigned char IsSpecial(Inst_82AF6E60 *inst)
{
    if (inst->opcode == 0x7d || inst->opcode == 0x7c)
        return 1;
    return 0;
}

static __forceinline int HasSrc(Node_82AF6E60 *node, unsigned int i)
{
    if (i < node->srcCount)
        return 1;
    return 0;
}

void fn_82AF6E60(void *ctx, Node_82AF6E60 *node)
{
    unsigned int mask = 0;
    unsigned int i;
    Src_82AF6E60 **src;
    Info_82AF6E60 info;

    for (i = 0, src = node->srcs; HasSrc(node, i); i++, src++) {
        Inst_82AF6E60 *inst = (*src)->inst;
        if (IsSpecial(inst)) {
            mask |= fn_82AF4BA8(ctx, inst, (*src)->type, (*src)->index, (*src)->swizzle, &info);
        }
    }
    if (mask != 0) {
        fn_82AF6CC8(ctx, node, mask);
    }
}
