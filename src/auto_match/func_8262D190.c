typedef struct Node_8262D190 Node_8262D190;
typedef struct Link_8262D190 {
    int unused;
    struct Link_8262D190 *next;
    Node_8262D190 *value;
} Link_8262D190;
struct Node_8262D190 {
    int kind;
    int unused;
    int key;
};
typedef struct Context_8262D190 {
    char pad[0x304];
    Link_8262D190 *nodes;
} Context_8262D190;
typedef struct Args_8262D190 {
    char pad[0xc];
    int key;
    int unused;
    float value;
} Args_8262D190;
extern void fn_82624348(Context_8262D190 *self, float *value, int flag);
void fn_8262D190(Context_8262D190 *self, Args_8262D190 *args)
{
    Link_8262D190 *link;
    Node_8262D190 *node;
    int kind;
    for (link = self->nodes; link != 0; link = link->next) {
        node = link->value;
        if (node->kind == 0x6d) goto found;
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
        for (link = ((Link_8262D190 **)node)[-1]; link != 0; link = link->next) {
            node = link->value;
            if (node->kind == kind) goto next_found;
        }
        node = 0;
next_found:;
    }
}
