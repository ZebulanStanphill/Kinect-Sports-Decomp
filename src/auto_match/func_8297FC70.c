typedef struct Node_8297FC70 {
    int unk0;
    int kind;                    /* 0x4 */
    struct Node_8297FC70 *left;  /* 0x8 */
    struct Node_8297FC70 *right; /* 0xc */
    int value;                   /* 0x10 */
    int unk14;
    int unk18;
    int op;                      /* 0x1c */
    struct Node_8297FC70 *arg;   /* 0x20 */
} Node_8297FC70;

static __forceinline int NotNull(Node_8297FC70 *p)
{
    if (p)
        return 1;
    return 0;
}
int fn_8297FC70(void *context, Node_8297FC70 *node)
{
    int kind;

    while (NotNull(node)) {
        kind = node->kind;
        if (kind == 1) {
            if (fn_8297FC70(context, node->left) != 0)
                goto yes;
            node = node->right;
        } else if (kind == 0xf) {
            return node->value != 6;
        } else if (kind == 0xe) {
            switch (node->op) {
            case 0:
            case 1:
            case 0x1c:
            case 0x1d:
                node = node->arg;
                break;
            case 0x1a:
            case 0x1b:
            case 0x1f:
            case 0x20:
                goto no;
            default:
                goto yes;
            }
        } else {
            goto no;
        }
    }
no:
    return 0;
yes:
    return 1;
}
