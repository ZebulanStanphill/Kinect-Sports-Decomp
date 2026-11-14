typedef struct Node_82AD2128 {
    unsigned int flags : 7;
    unsigned int id : 12;
    unsigned int low : 13;
    struct Node_82AD2128 *next;     /* 0x04 */
    struct Node_82AD2128 *link;     /* 0x08 */
    struct Reg_82AD2128 *reg;       /* 0x0c */
    unsigned int pad10;
} Node_82AD2128;

typedef struct Reg_82AD2128 {
    unsigned int pad0;
    Node_82AD2128 *nodes;           /* 0x04 */
} Reg_82AD2128;

typedef struct List_82AD2128 {
    Node_82AD2128 *head;
} List_82AD2128;

typedef struct Page_82AD2128 {
    struct { char pad[0x94]; void *ctx; } *owner;
} Page_82AD2128;

__declspec(noreturn) extern void fn_82AA66A8(void *, int, ...);
extern Node_82AD2128 *fn_82AD1AC8(List_82AD2128 *list, int id);
extern Node_82AD2128 *fn_82AC6560(void *ctx, int size, int kind);
extern unsigned int fn_82AD1978(List_82AD2128 *list, Node_82AD2128 *node);

void fn_82AD2128(List_82AD2128 *list, int id, Reg_82AD2128 *reg, void *ctx)
{
    Node_82AD2128 *node;

    node = fn_82AD1AC8(list, id);
    if (node != 0) {
        if (node->reg == reg) {
            return;
        }
        fn_82AA66A8(((Page_82AD2128 *)((unsigned int)list & ~0xfff))->owner->ctx, 0x12c0);
    }
    node = fn_82AC6560(ctx, 0x14, 0x1a);
    node->reg = reg;
    node->id = id + 1;
    node->link = reg->nodes;
    reg->nodes = node;
    fn_82AD1978(list, node);
}
