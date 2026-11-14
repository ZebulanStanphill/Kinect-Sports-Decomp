typedef struct Node_82967218 {
    char pad0[0x14];
    unsigned int count;     /* 0x14 */
    int *links;             /* 0x18 */
    char pad1c[0x24 - 0x1c];
    unsigned int done;      /* 0x24 */
    char pad28[0x38 - 0x28];
    unsigned int id;        /* 0x38 */
} Node_82967218;

typedef struct Graph_82967218 {
    char pad0[0xc];
    unsigned int count;     /* 0x0c */
    char pad10[0x18 - 0x10];
    Node_82967218 **nodes;  /* 0x18 */
} Graph_82967218;

extern void fn_82967188(Graph_82967218 *graph, int a, int b, unsigned int id);

void fn_82967218(Graph_82967218 *self, int a, int b, int *score, unsigned int id)
{
    unsigned int i;
    unsigned int j;
    Node_82967218 *node;
    Node_82967218 *other;

    Graph_82967218 *graph = self;

    fn_82967188(self, a, b, id);
    for (i = 0; i < graph->count; i++) {
        node = graph->nodes[i];
        if (node->done == 0) {
            for (j = 0; j < node->count; j++) {
                other = graph->nodes[node->links[j]];
                if (id == node->id) {
                    if (other->done != 0)
                        *score -= 0x10000;
                } else if (id == other->id) {
                    *score += 0x10000;
                }
            }
        }
    }
}
