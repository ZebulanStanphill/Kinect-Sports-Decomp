typedef struct Node_8285FF30 {
    unsigned int flags;
    char pad[0x18];
    unsigned short children[8];
} Node_8285FF30;

extern char *lbl_832115D0;

void fn_8285FF30(Node_8285FF30 *node, int *leaves, int *branches)
{
    unsigned int kind;
    unsigned short *ids;
    int i;

    if (node != 0) {
        kind = node->flags & 0x40000000;
        if (kind != 0) {
            if (kind == 0x40000000)
                (*leaves)++;
        } else {
            ids = node->children;
            (*branches)++;
            for (i = 0; i < 8; i++) {
                if (ids[i] != 0)
                    fn_8285FF30((Node_8285FF30 *)(lbl_832115D0 + ids[i] * 0x2c), leaves, branches);
            }
        }
    }
}
