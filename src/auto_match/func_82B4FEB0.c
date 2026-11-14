typedef struct Value_82B4FEB0 {
    int pad0;
    int kind;               /* 0x4: 0xb */
    char pad8[0x10 - 0x8];
    void *data;             /* 0x10 */
    void *buffer;           /* 0x14 */
    char pad18[0x2c - 0x18];
    unsigned int flags;     /* 0x2c */
} Value_82B4FEB0;

typedef struct Item_82B4FEB0 {
    int pad0;
    int kind;               /* 0x4: 6 */
    char pad8[0x10 - 0x8];
    int count;              /* 0x10 */
    char pad14[0x18 - 0x14];
    Value_82B4FEB0 *value;  /* 0x18 */
} Item_82B4FEB0;

typedef struct Node_82B4FEB0 {
    int pad0;
    int kind;               /* 0x4: 1 */
    Item_82B4FEB0 *item;    /* 0x8 */
    struct Node_82B4FEB0 *next; /* 0xc */
} Node_82B4FEB0;

typedef struct Owner_82B4FEB0 {
    char pad0[0x10];
    void *data;             /* 0x10 */
    char pad14[0x2c - 0x14];
    Node_82B4FEB0 *list;    /* 0x2c */
} Owner_82B4FEB0;

typedef struct Ref_82B4FEB0 {
    int pad0;
    Owner_82B4FEB0 *owner;  /* 0x4 */
} Ref_82B4FEB0;

typedef struct Slot_82B4FEB0 {
    char pad0[8];
    void *value;            /* 0x8 */
    struct Slot_82B4FEB0 *next; /* 0xc */
} Slot_82B4FEB0;

typedef struct Slots_82B4FEB0 {
    char pad0[8];
    Slot_82B4FEB0 *first;   /* 0x8 */
} Slots_82B4FEB0;

typedef struct Ctx_82B4FEB0 {
    char pad0[0x10];
    void *data;             /* 0x10 */
} Ctx_82B4FEB0;

extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code, ...);
extern void fn_82B4E578(Ctx_82B4FEB0 *ctx, void *arg, void *data, void *value);

static __forceinline Node_82B4FEB0 *AsNode(void *ctx, Node_82B4FEB0 *n)
{
    if (n != 0 && n->kind != 1)
        fn_82AA66A8(ctx, 0x12c1);
    return n;
}
static __forceinline Value_82B4FEB0 *AsValue(void *ctx, Value_82B4FEB0 *v)
{
    if (v == 0 || v->kind != 0xb)
        fn_82AA66A8(ctx, 0x12c1);
    return v;
}

/* Sibling of Matching fn_82B53448. */
void fn_82B4FEB0(Ctx_82B4FEB0 *ctx, Ref_82B4FEB0 *ref, Slots_82B4FEB0 *slots, void *arg)
{
    Owner_82B4FEB0 *owner = ref->owner;
    Slot_82B4FEB0 *slot = slots->first;
    Node_82B4FEB0 *node;
    Value_82B4FEB0 *value;

    for (node = AsNode(ctx, owner->list); node != 0; node = AsNode(ctx, node->next)) {
        if (node->item->kind == 6) {
            if (node->item->count != 1)
                fn_82AA66A8(ctx, 0x12c1);
            value = AsValue(ctx, node->item->value);
            if (value->data != owner->data && value->data != ctx->data && value->buffer != 0
                && (value->flags & 0x40) != 0 && slot != 0) {
                fn_82B4E578(ctx, arg, value->data, slot->value);
                slot = slot->next;
            }
        }
    }
}
