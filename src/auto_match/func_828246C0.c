typedef struct Node_828246C0 {
    int index;              /* 0x00 */
    int unk04;
    unsigned int kind;      /* 0x08 */
    int unk0C;
    int value10;            /* 0x10 */
    int unk14;
    int unk18;
    int value1C;            /* 0x1C */
} Node_828246C0;

typedef struct Owner_828246C0 {
    char pad000[0x388];
    Node_828246C0 **nodes;  /* 0x388 */
} Owner_828246C0;

void fn_828246C0(Owner_828246C0 *self, Node_828246C0 *node, int *out)
{
    for (;;) {
        switch (node->kind) {
        case 8:
            node = &(*self->nodes)[node->index];
            continue;
        case 2:
        case 4:
        case 0x40:
        case 0x84:
        case 0x100:
            *out = node->value10;
            return;
        case 0x10:
        case 0x30:
            *out = node->value1C;
            return;
        default:
            return;
        }
    }
}
