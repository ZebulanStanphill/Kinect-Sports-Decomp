typedef struct Node_82AEC7E8 {
    int pad0[2];
    unsigned int pad8 : 8;
    unsigned int fixed : 1;
    unsigned int pad9 : 23;
} Node_82AEC7E8;

typedef struct Src_82AEC7E8 {
    int pad0[3];
    Node_82AEC7E8 *node;
} Src_82AEC7E8;

typedef struct Instr_82AEC7E8 {
    int pad0[2];
    unsigned int pad8 : 10;
    unsigned int count : 3;
    unsigned int pad13 : 5;
    unsigned int op : 7;
    unsigned int pad25 : 7;
    int padc;
    unsigned int pad10 : 7;
    unsigned int dirty : 1;
    unsigned int pad18 : 24;
    unsigned int pad14 : 19;
    unsigned int slot : 13;
    int pad18w[6];
    Src_82AEC7E8 *src;
} Instr_82AEC7E8;

extern void fn_82AEA520(void *ctx, Instr_82AEC7E8 *ins);
extern void fn_82B102D8(void *ctx, Node_82AEC7E8 *node);

static __forceinline unsigned char IsArith(unsigned int op)
{
    return op >= 0x20 && op <= 0x52;
}

void fn_82AEC7E8(void *ctx, Instr_82AEC7E8 *ins, unsigned short slot)
{
    unsigned int op = ins->op;
    Node_82AEC7E8 *node;

    ins->dirty = 1;
    ins->slot = slot;
    if (op == 0x6e) {
        fn_82AEA520(ctx, ins);
        return;
    }
    if (!IsArith(op))
        return;
    if (ins->count <= 1)
        return;
    node = ins->src->node;
    if ((unsigned char)node->fixed)
        return;
    fn_82B102D8(ctx, node);
}
