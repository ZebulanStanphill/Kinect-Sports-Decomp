typedef struct Leaf_82B45A50 {
    int f0;
    int kind;
    int f8;
    int fc;
    int f10;
    int f14;
    int value;
} Leaf_82B45A50;

typedef struct List_82B45A50 {
    int f0;
    int kind;
    Leaf_82B45A50 *first;
    unsigned int count;
} List_82B45A50;

typedef struct Node_82B45A50 {
    int f0;
    int kind;
    int f8;
    int fc;
    Leaf_82B45A50 *type;
    unsigned int f14;
    unsigned int f18;
    int f1c;
    List_82B45A50 *list;
} Node_82B45A50;

extern __declspec(noreturn) void fn_82AA66A8(void *, int, ...);

int fn_82B45A50(void *context, Node_82B45A50 *node, unsigned char *out)
{
    Leaf_82B45A50 *type;
    List_82B45A50 *list;
    Leaf_82B45A50 *leaf;

    if (node != 0 && (node->kind == 0xe || node->f1c == 0) && node->f14 == 1 && node->f18 == 1) {
        type = node->type;
        if (type == 0 || type->kind != 9) {
            fn_82AA66A8(context, 0x12c1);
        }
        if (type->f14 == 0) {
            list = node->list;
            if (list->kind == 1 && list->count == 0) {
                leaf = list->first;
                if (leaf->kind == 0xf && leaf->f10 == 0) {
                    *out = 0 != leaf->value;
                    return 1;
                }
            }
        }
    }
    return 0;
}
