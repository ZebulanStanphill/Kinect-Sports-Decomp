typedef struct Operand_82B10858 {
    unsigned int pad0 : 1;
    unsigned int absolute : 1;
    unsigned int pad2 : 2;
    unsigned int components : 3;
    unsigned int modifier : 2;
    unsigned int kind : 5;
    unsigned int relative : 1;
    unsigned int index : 4;
    unsigned int swizzle : 8;
    unsigned int flags : 5;
} Operand_82B10858;

typedef struct Link_82B10858 {
    unsigned int previous; /* 0x0 */
    unsigned int next;     /* 0x4 */
} Link_82B10858;

typedef struct Node_82B10858 {
    char pad00[8];
    unsigned int flags; /* 0x08 */
    char pad0c[0x18];
    Link_82B10858 link; /* 0x24 */
} Node_82B10858;

typedef struct Block_82B10858 {
    char pad00[0x20];
    Link_82B10858 nodes; /* 0x20 */
} Block_82B10858;

typedef struct Compiler_82B10858 {
    char pad000[0x150];
    void *strict; /* 0x150 */
} Compiler_82B10858;

extern void fn_82AA65B0(Compiler_82B10858 *ctx, int code, ...);
extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code, ...);
extern Node_82B10858 *fn_82B841E8(Compiler_82B10858 *ctx, Block_82B10858 *block, int a, int b, int c, int d);
extern void *fn_82B8A3A0(Compiler_82B10858 *ctx, int flag, float x, float y, float z, float w);
extern Operand_82B10858 *fn_82AD17B0(Compiler_82B10858 *ctx, void *value);
extern void fn_82AD1270(void *operand, int n);
extern Node_82B10858 *fn_82B106A0(Compiler_82B10858 *ctx, Block_82B10858 *block, void *a, void *b);
extern unsigned int fn_82AD1978(Node_82B10858 *node, void *operand);

static __forceinline void Block_PushFront(Block_82B10858 *block, Node_82B10858 *node)
{
    Link_82B10858 *head = &block->nodes;
    Link_82B10858 *link = &((Node_82B10858 *)((unsigned int)node & ~1))->link;

    link->next = head->next;
    ((Node_82B10858 *)(head->next & ~1))->link.previous = (unsigned int)&link->next;
    link->previous = (unsigned int)&head->next | 1;
    head->next = (unsigned int)link - 0x24;
}

void fn_82B10858(Compiler_82B10858 *ctx, Block_82B10858 *block, Node_82B10858 *dest, unsigned int index)
{
    unsigned int components;
    Operand_82B10858 *operand;
    Operand_82B10858 *source;
    Node_82B10858 *move;

    if (index == 0) {
        if (ctx->strict != 0) {
            fn_82AA66A8(ctx, 0x11bd);
        }
    } else {
        fn_82AA65B0(ctx, 0xe38);
    }
    index = 15 - index;
    components = (unsigned int)(0x8da691691448ui64 >> index >> index >> index) & 7;
    if (dest == 0) {
        dest = fn_82B841E8(ctx, block, 0, 0x75, 0, 0);
        dest->flags |= 0x2000000;
        Block_PushFront(block, dest);
    }
    source = fn_82AD17B0(ctx, fn_82B8A3A0(ctx, 1, 0.0f, 0.0f, 0.0f, 0.0f));
    source->components = components;
    fn_82AD1270(source, 0);
    source->swizzle = 0;
    move = fn_82B106A0(ctx, block, source, source);
    operand = fn_82AD17B0(ctx, move);
    move->flags |= 0x20;
    operand->index = index;
    operand->relative = 0;
    operand->kind = 0x1f;
    operand->modifier = 0;
    operand->absolute = 1;
    fn_82AD1978(dest, operand);
}
