typedef struct BitSet_82B18438 {
    unsigned int pad : 12;
    unsigned int live : 1;
    unsigned int count : 19;
} BitSet_82B18438;

typedef struct Info_82B18438 {
    char pad0[0xc];
    void *def; /* 0x0c */
} Info_82B18438;

typedef struct Block_82B18438 {
    char pad0[8];
    Info_82B18438 *info; /* 0x08 */
    char padc[0x1c];
    BitSet_82B18438 *sets; /* 0x28 */
    char pad2c[4];
    unsigned int pad30 : 13;
    unsigned int id : 19; /* 0x30 */
} Block_82B18438;

typedef struct Edge_82B18438 {
    Block_82B18438 *block; /* 0x00 */
    int pad4;
    struct Edge_82B18438 *next; /* 0x08 */
} Edge_82B18438;

typedef struct Node_82B18438 {
    char pad0[0xc];
    Edge_82B18438 *edges; /* 0x0c */
} Node_82B18438;

typedef struct Iter_82B18438 {
    Block_82B18438 *root; /* 0x00 */
    Block_82B18438 *cur;  /* 0x04 */
} Iter_82B18438;

extern void fn_82B18360(void *ctx, Block_82B18438 *block, void *from);
extern Node_82B18438 *fn_82AD1750(Iter_82B18438 *it);
extern void fn_82B8F1B0(Block_82B18438 *from, Block_82B18438 *to, void *ctx);

static __forceinline unsigned int TestBit(BitSet_82B18438 *set, unsigned int id)
{
    return ((unsigned int *)set)[(id >> 5) + 1] & (1 << (id & 31));
}

static __forceinline BitSet_82B18438 *SecondSet(BitSet_82B18438 *set)
{
    return (BitSet_82B18438 *)((char *)set + (((set->count + 31) >> 3) & ~3));
}

static __forceinline int NotNull(void *p)
{
    if (p != 0) {
        return 1;
    }
    return 0;
}

void fn_82B18438(void *ctx, Block_82B18438 *from, Block_82B18438 *to)
{
    unsigned char defined;
    Iter_82B18438 it;
    Node_82B18438 *node;
    Edge_82B18438 *edge;

    fn_82B18360(ctx, to, from);
    if (to->info != 0 && to->info->def != 0) {
        defined = 1;
    } else {
        defined = 0;
    }
    if (!defined && (unsigned char)from->sets->live) {
        if (TestBit(SecondSet(to->sets), from->id) != 0) {
            it.root = to;
            it.cur = to;
            while ((node = fn_82AD1750(&it)) != 0) {
                for (edge = node->edges; NotNull(edge); edge = edge->next) {
                    if (TestBit(edge->block->sets, to->id) == 0) {
                        fn_82B18360(ctx, edge->block, node);
                    }
                }
            }
        }
    }
    fn_82B8F1B0(from, to, ctx);
}
