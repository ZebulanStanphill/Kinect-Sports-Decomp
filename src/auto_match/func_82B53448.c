typedef struct Object_82B53448 {
    int pad0;
    int kind;               /* 0x4 */
} Object_82B53448;

typedef struct Value_82B53448 {
    int pad0;
    int kind;               /* 0x4: 0xb */
    char pad8[0x10 - 0x8];
    void *data;             /* 0x10 */
    void *buffer;           /* 0x14 */
    char pad18[0x2c - 0x18];
    unsigned int flags;     /* 0x2c */
    char pad30[0x3c - 0x30];
    int size;               /* 0x3c */
} Value_82B53448;

typedef struct Item_82B53448 {
    int pad0;
    int kind;               /* 0x4: 6 */
    char pad8[0x18 - 0x8];
    Value_82B53448 *value;  /* 0x18 */
} Item_82B53448;

typedef struct Node_82B53448 {
    int pad0;
    int kind;               /* 0x4: 1 */
    Item_82B53448 *item;    /* 0x8 */
    struct Node_82B53448 *next; /* 0xc */
} Node_82B53448;

typedef struct Owner_82B53448 {
    char pad0[0x2c];
    Node_82B53448 *list;    /* 0x2c */
} Owner_82B53448;

extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code, ...);
extern void fn_82B52FF8(void *ctx, void *target, void *data, int size, void *arg);

static __forceinline Node_82B53448 *AsNode(void *ctx, Node_82B53448 *n)
{
    if (n != 0 && n->kind != 1)
        fn_82AA66A8(ctx, 0x12c1);
    return n;
}
static __forceinline Value_82B53448 *AsValue(void *ctx, Value_82B53448 *v)
{
    if (v == 0 || v->kind != 0xb)
        fn_82AA66A8(ctx, 0x12c1);
    return v;
}
void fn_82B53448(void *ctx, Owner_82B53448 *owner, void *target, void *arg)
{
    Node_82B53448 *node;
    Value_82B53448 *value;

    for (node = AsNode(ctx, owner->list); node != 0; node = AsNode(ctx, node->next)) {
        if (node->item->kind == 6) {
            value = AsValue(ctx, node->item->value);
            if (value->buffer != 0 && (value->flags & 0x20) != 0)
                fn_82B52FF8(ctx, target, value->data, value->size, arg);
        }
    }
}
