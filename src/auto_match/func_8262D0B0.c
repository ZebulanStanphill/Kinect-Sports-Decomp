typedef struct Node_8262D0B0 Node_8262D0B0;
typedef struct Link_8262D0B0 {
    int unused;
    struct Link_8262D0B0 *next;
    Node_8262D0B0 *value;
} Link_8262D0B0;
struct Node_8262D0B0 {
    int kind;
    int unused;
    int key;
};
typedef struct Context_8262D0B0 {
    char pad[0x304];
    Link_8262D0B0 *nodes;
} Context_8262D0B0;
typedef struct Args_8262D0B0 {
    char pad[0xc];
    int key;
    float value;
} Args_8262D0B0;
extern void fn_82624348(Context_8262D0B0 *self, float *value, int flag);
void fn_8262D0B0(Context_8262D0B0 *self, Args_8262D0B0 *args)
{
    Link_8262D0B0 *link;
    Node_8262D0B0 *node;
    int kind;
    for (link = self->nodes; link != 0; link = link->next) {
        node = link->value;
        if (node->kind == 0x6c) goto found;
    }
    node = 0;
found:
    while (node != 0) {
        if (node->key == args->key) {
            fn_82624348(self, &args->value, 0);
            return;
        }
        kind = node->kind;
        /* The word preceding a node points to its alternative-node chain. */
        for (link = ((Link_8262D0B0 **)node)[-1]; link != 0; link = link->next) {
            node = link->value;
            if (node->kind == kind) goto next_found;
        }
        node = 0;
next_found:;
    }
}
