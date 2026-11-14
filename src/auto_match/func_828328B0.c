typedef struct Entry_828328B0 {
    char pad0[0x10];
    unsigned int f10;
    char pad14[0xc];
} Entry_828328B0;

typedef struct Table_828328B0 {
    char pad0[0x388];
    Entry_828328B0 **entries;
} Table_828328B0;

typedef struct Owner_828328B0 {
    char pad0[8];
    Table_828328B0 *table;
    char padc[0x44];
    void *counts;
} Owner_828328B0;

typedef struct Ctx_828328B0 {
    Owner_828328B0 *owner;
    int index;
    int pad8;
    unsigned int fc;
} Ctx_828328B0;

typedef struct Node_828328B0 {
    char pad0[0x10];
    unsigned int count;
    int f14;
} Node_828328B0;

typedef struct Key_828328B0 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
} Key_828328B0;

extern unsigned char fn_82824338(Node_828328B0 *node);
extern unsigned char fn_828243E8(Node_828328B0 *node);
extern unsigned char fn_82824308(Node_828328B0 *node);
extern unsigned char fn_828243B8(Node_828328B0 *node);
extern int *fn_82833628(void *map, Key_828328B0 *key);

unsigned char fn_828328B0(void *self, Node_828328B0 *node, void *unused, Ctx_828328B0 *ctx)
{
    Entry_828328B0 *entry = &(*ctx->owner->table->entries)[ctx->index];
    if (!fn_82824338(node)) {
        if (fn_828243E8(node))
            return node->f14 == 0;
        if (!fn_82824308(node) && !fn_828243B8(node))
            return 1;
        if (node->count > 1) {
            Key_828328B0 key;
            key.c = entry->f10;
            key.a = ctx->fc;
            key.b = node->count;
            ++*fn_82833628(ctx->owner->counts, &key);
        }
    }
    return 0;
}
