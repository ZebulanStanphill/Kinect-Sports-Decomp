typedef struct Link_82AC6D78 {
    unsigned int prev; /* address of the previous link's next field, bit 0 set at the list head */
    unsigned int next; /* next instruction */
} Link_82AC6D78;

typedef struct Info_82AC6D78 {
    unsigned int pad0 : 10;
    unsigned int nsrc : 3;
    unsigned int pad1 : 5;
    unsigned int op : 7;
    unsigned int pad2 : 7;
} Info_82AC6D78;

typedef struct Block_82AC6D78 {
    char pad00[0x18];
    Link_82AC6D78 instructions; /* 0x18 */
} Block_82AC6D78;

typedef struct Ins_82AC6D78 {
    int pad00[2];
    Info_82AC6D78 info; /* 0x08 */
    char pad0c[0x14 - 0xc];
    unsigned int flags; /* 0x14 */
    char pad18[0x1c - 0x18];
    Block_82AC6D78 *block; /* 0x1c */
    char pad20[0x24 - 0x20];
    Link_82AC6D78 link; /* 0x24 */
} Ins_82AC6D78;

extern struct Ins_82AC6D78 *fn_82ABE6D0(Ins_82AC6D78 *ins);
extern Ins_82AC6D78 *fn_82B841E8(void *ctx, Block_82AC6D78 *block, int a, int op, int b, int c);

static __forceinline Link_82AC6D78 *LinkOf(unsigned int ins)
{
    return &((Ins_82AC6D78 *)(ins & ~1u))->link;
}

static __forceinline Ins_82AC6D78 *Previous(Ins_82AC6D78 *ins)
{
    unsigned int prev = LinkOf((unsigned int)ins)->prev;

    if (prev & 1)
        return 0;
    return (Ins_82AC6D78 *)((prev & ~1u) - 0x28);
}

static __forceinline void InsertAfter(Link_82AC6D78 *pos, unsigned int tag, Ins_82AC6D78 *ins)
{
    Link_82AC6D78 *link = LinkOf((unsigned int)ins);

    link->next = pos->next;
    LinkOf(pos->next)->prev = (unsigned int)&link->next;
    link->prev = (unsigned int)&pos->next | tag;
    pos->next = (unsigned int)link - 0x24;
}

static unsigned char IsScalarOp(unsigned int op)
{
    return op >= 1 && op <= 0x1f;
}

static unsigned char IsVectorOp(unsigned int op)
{
    return op >= 0x20 && op <= 0x52;
}

Ins_82AC6D78 *fn_82AC6D78(void *ctx, Ins_82AC6D78 *ins)
{
    Ins_82AC6D78 *prev = Previous(ins);
    Ins_82AC6D78 *result;

    if (prev != 0) {
        if (IsScalarOp(prev->info.op) && IsVectorOp(ins->info.op) && ins == fn_82ABE6D0(prev))
            prev = Previous(prev);
    }
    if (prev == 0 || prev->info.op != 0x7e) {
        result = fn_82B841E8(ctx, ins->block, 0, 0x7e, 0, 0);
        if (prev != 0)
            InsertAfter(LinkOf((unsigned int)prev), 0, result);
        else
            InsertAfter(&ins->block->instructions, 1, result);
        prev = result;
    }
    prev->flags |= 0x10000;
    return prev;
}
