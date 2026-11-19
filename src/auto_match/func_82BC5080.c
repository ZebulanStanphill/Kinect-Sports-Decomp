/* Depth-first numbering of a flow graph for the dominator computation: every reachable node
   gets its DFS number, its DFS parent and its initial semidominator and label. */
typedef struct Stack_82BC5080 {
    int unk00;          /* 0x00 */
    unsigned int count; /* 0x04 */
} Stack_82BC5080;

typedef struct Node_82BC5080 {
    char pad00[0x48];
    int dfsNumber; /* 0x48 */
    char pad4c[0x34];
    int visitMark; /* 0x80 */
} Node_82BC5080;

typedef struct Pass_82BC5080 {
    char pad000[0x864];
    int visitMark; /* 0x864 */
} Pass_82BC5080;

typedef struct Context_82BC5080 {
    char pad000[0x5b0];
    void *allocator; /* 0x5b0 */
} Context_82BC5080;

typedef struct Dominators_82BC5080 {
    int *parent;               /* 0x00 */
    int *semi;                 /* 0x04 */
    int unk08[2];              /* 0x08 */
    int *label;                /* 0x10 */
    int unk14;                 /* 0x14 */
    Node_82BC5080 **vertex;    /* 0x18 */
    int unk1c;                 /* 0x1c */
    Pass_82BC5080 *pass;       /* 0x20 */
    Context_82BC5080 *context; /* 0x24 */
} Dominators_82BC5080;

extern void **fn_82B7BD28(void *allocator, int size);
extern void fn_82BA03B8(Stack_82BC5080 *stack, void *allocator);
extern Node_82BC5080 **fn_82BC0088(Stack_82BC5080 *stack, unsigned int index);
extern Node_82BC5080 *fn_82BC7368(Stack_82BC5080 *stack);
extern void fn_82BC6DC0(Stack_82BC5080 *stack, int flags);
extern Node_82BC5080 *fn_82BC5A28(Node_82BC5080 *node, int visitMark);

static __forceinline void *Alloc(void *allocator, int size)
{
    void **mem = fn_82B7BD28(allocator, size + 4);
    *mem = allocator;
    return mem + 1;
}

static __forceinline Stack_82BC5080 *StackConstruct(Stack_82BC5080 *stack, void *allocator)
{
    fn_82BA03B8(stack, allocator);
    return stack;
}

void fn_82BC5080(Dominators_82BC5080 *self, Node_82BC5080 *node)
{
    Stack_82BC5080 *mem;
    Stack_82BC5080 *stack;
    Node_82BC5080 *child;
    int next;

    self->pass->visitMark++;
    mem = (Stack_82BC5080 *)Alloc(self->context->allocator, 0x10);
    stack = mem ? StackConstruct(mem, self->context->allocator) : 0;
    node->dfsNumber = 1;
    self->parent[1] = 0;
    self->vertex[node->dfsNumber] = node;
    *fn_82BC0088(stack, stack->count) = node;
    self->semi[node->dfsNumber] = node->dfsNumber;
    next = 2;
    self->label[node->dfsNumber] = node->dfsNumber;
    for (;;) {
        child = fn_82BC5A28(node, self->pass->visitMark);
        if (child != 0) {
            *fn_82BC0088(stack, stack->count) = child;
            child->dfsNumber = next;
            self->parent[child->dfsNumber] = node->dfsNumber;
            next++;
            node = child;
            self->vertex[child->dfsNumber] = child;
            child->visitMark = self->pass->visitMark;
            self->semi[child->dfsNumber] = child->dfsNumber;
            self->label[child->dfsNumber] = child->dfsNumber;
        } else {
            if (stack->count == 0) {
                break;
            }
            node = fn_82BC7368(stack);
        }
    }
    fn_82BC6DC0(stack, 1);
}
