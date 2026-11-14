typedef struct Node_8285ACE8 Node_8285ACE8;

typedef struct Graph_8285ACE8 {
    char pad[0x5c];
    unsigned int visitedSize;
    int x60;
    int slotOffset;
    char *nodes;
} Graph_8285ACE8;

typedef struct Ctx_8285ACE8 {
    int x0;
    int x4;
    int nodeOffset;
} Ctx_8285ACE8;

extern unsigned lbl_83211334[];
extern void *memset(void *dst, int c, unsigned int n);
extern int fn_8285AC20(Node_8285ACE8 *n);

/* is target reachable from the context's node? */
int fn_8285ACE8(Node_8285ACE8 *target, Graph_8285ACE8 *graph, Ctx_8285ACE8 *ctx)
{
    char *nodes;
    int offset = ctx->nodeOffset;
    char *slot = (char *)ctx + graph->slotOffset;
    Node_8285ACE8 *start = *(Node_8285ACE8 **)(graph->nodes + offset);
    nodes = graph->nodes;
    lbl_83211334[1] = (unsigned)target;
    lbl_83211334[0] = (unsigned)ctx;
    if (start == target) {
        return 1;
    }
    memset(*(void **)(slot + 0xac), 0, graph->visitedSize);
    start = *(Node_8285ACE8 **)(nodes + offset);
    lbl_83211334[2] = *(unsigned *)(slot + 0xac);
    return fn_8285AC20(start);
}
