typedef struct Flags_8269AE08 {
    unsigned int pad0 : 12;
    unsigned int active : 1;
    unsigned int pad13 : 8;
    unsigned int dirty : 1;
    unsigned int pad22 : 10;
} Flags_8269AE08;

typedef struct Node_8269AE08 {
    char pad0[0x74];
    struct Node_8269AE08 *parent;
    int value;
    char pad7c[0x10];
    Flags_8269AE08 flags;
} Node_8269AE08;

typedef struct Ctx_8269AE08 {
    char pad0[0xaf8];
    int value;
    char padafc[4];
    Flags_8269AE08 flags;
} Ctx_8269AE08;

void fn_8269AE08(Node_8269AE08 *node, Ctx_8269AE08 *ctx)
{
    Node_8269AE08 *p;

    if (!(unsigned char)node->flags.active)
        return;
    if (!(unsigned char)ctx->flags.active) {
        for (p = node->parent; p != 0; p = p->parent) {
            if ((unsigned char)p->flags.active)
                break;
        }
        if (p != 0)
            p->value = node->value;
        else
            ctx->value = node->value;
    }
    node->value = 0;
    node->flags.active = 0;
    ctx->flags.dirty = 1;
}
