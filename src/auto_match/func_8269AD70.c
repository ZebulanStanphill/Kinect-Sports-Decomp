/* Activates a node: links it after its nearest active ancestor (or at the head of the context's list) and marks it
   active and the context dirty. The inverse of func_8269AE08. */
typedef struct Flags_8269AD70 {
    unsigned int pad0 : 12;
    unsigned int active : 1;
    unsigned int pad13 : 8;
    unsigned int dirty : 1;
    unsigned int pad22 : 10;
} Flags_8269AD70;

typedef struct Node_8269AD70 {
    char pad0[0x14];
    int depth;                          /* 0x14 */
    char pad18[0x66 - 0x18];
    unsigned char state;                /* 0x66 */
    char pad67[0x74 - 0x67];
    struct Node_8269AD70 *parent;       /* 0x74 */
    struct Node_8269AD70 *next;         /* 0x78 */
    char pad7c[0x10];
    Flags_8269AD70 flags;               /* 0x8c */
} Node_8269AD70;

typedef struct Ctx_8269AD70 {
    char pad0[0xaf8];
    Node_8269AD70 *head;                /* 0xaf8 */
    char padafc[4];
    Flags_8269AD70 flags;               /* 0xb00 */
} Ctx_8269AD70;

void fn_8269AD70(Node_8269AD70 *node, Ctx_8269AD70 *ctx)
{
    Node_8269AD70 *p;

    if ((unsigned char)node->flags.active)
        return;
    if ((unsigned char)ctx->flags.active)
        return;
    if ((node->state & 0x10) != 0)
        return;
    if (node->depth < -1)
        return;
    for (p = node->parent; p != 0; p = p->parent) {
        if ((unsigned char)p->flags.active)
            break;
    }
    if (p != 0) {
        node->next = p->next;
        p->next = node;
    } else {
        node->next = ctx->head;
        ctx->head = node;
    }
    node->flags.active = 1;
    ctx->flags.dirty = 1;
}
