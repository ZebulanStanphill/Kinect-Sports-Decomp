/* Visits the expression tree under every root instruction that is marked for
   rewriting, children before their parent, and calls the rewrite function for
   each node once per pass. The walk keeps two stacks: the nodes on the path
   and, for each of them, the number of children visited so far. */
typedef struct Stack_82BBBB18 {
    int unk00;       /* 0x00 */
    int count;       /* 0x04 */
    int *items;      /* 0x08 */
    void *allocator; /* 0x0c */
} Stack_82BBBB18;

typedef struct Node_82BBBB18 {
    char pad000[0x14];
    int childCount; /* 0x014 */
    char pad018[0xcc];
    unsigned int flags; /* 0x0e4 */
    char pad0E8[4];
    int children[0xa4]; /* 0x0ec: Node_82BBBB18 pointers */
    int visitMark;      /* 0x37c */
} Node_82BBBB18;

typedef struct NodeList_82BBBB18 {
    int unk00;             /* 0x00 */
    unsigned int count;    /* 0x04 */
    Node_82BBBB18 **items; /* 0x08 */
} NodeList_82BBBB18;

typedef struct Context_82BBBB18 {
    char pad000[0x5b0];
    void *allocator; /* 0x5b0 */
} Context_82BBBB18;

typedef struct Pass_82BBBB18 {
    char pad000[0xc];
    Context_82BBBB18 *context; /* 0x00c */
    char pad010[0x804];
    NodeList_82BBBB18 *roots; /* 0x814 */
    char pad818[0x4c];
    int visitMark; /* 0x864 */
} Pass_82BBBB18;

extern void fn_82BA02A8(void *log, const char *format, ...);
extern void fn_82BA03B8(Stack_82BBBB18 *stack, void *allocator);
extern int *fn_82BC0088(Stack_82BBBB18 *stack, unsigned int index);
extern int fn_82BC7368(Stack_82BBBB18 *stack);
extern void fn_82B7BEB0(void *allocator, void *allocation);
extern void fn_82BBB770(Node_82BBBB18 *node, Pass_82BBBB18 *pass);
extern void fn_82BBB1A8(Pass_82BBBB18 *pass);
extern void fn_82BBB7D8(Pass_82BBBB18 *pass);

static __forceinline unsigned char GetRoot(NodeList_82BBBB18 *list, unsigned int index, Node_82BBBB18 **out)
{
    if (index + 1 > list->count) {
        return 0;
    }
    *out = list->items[index];
    return 1;
}

static __forceinline void SetMark(int *mark, int value)
{
    *mark = value;
}

static __forceinline int *StackAt(Stack_82BBBB18 *stack, unsigned int index)
{
    return index < (unsigned int)stack->count ? &stack->items[index] : 0;
}

void fn_82BBBB18(Pass_82BBBB18 *pass)
{
    Stack_82BBBB18 nodes;
    Stack_82BBBB18 visited;
    Node_82BBBB18 *node;
    Node_82BBBB18 *child;
    unsigned int index;
    unsigned char descend;
    int next;

    fn_82BA02A8(pass->context, "Optimization : Rewrite() called\n");
    pass->visitMark++;
    fn_82BA03B8(&nodes, pass->context->allocator);
    fn_82BA03B8(&visited, pass->context->allocator);
    node = 0;
    for (index = 0; GetRoot(pass->roots, index, &node); index++) {
        if (node->flags & 1) {
            nodes.count = 0;
            visited.count = 0;
            descend = 1;
            for (;;) {
                if (descend) {
                    if (node == 0 || node->visitMark == pass->visitMark) {
                        descend = 0;
                    } else {
                        SetMark(&node->visitMark, pass->visitMark);
                        if (node->children[0] == 0) {
                            fn_82BBB770(node, pass);
                            descend = 0;
                        } else {
                            *fn_82BC0088(&nodes, nodes.count) = (int)node;
                            *fn_82BC0088(&visited, visited.count) = 1;
                            node = (Node_82BBBB18 *)node->children[0];
                        }
                    }
                } else {
                    child = node;
                    if (nodes.count == 0) {
                        break;
                    }
                    node = (Node_82BBBB18 *)*StackAt(&nodes, nodes.count - 1);
                    if (child != 0 && *StackAt(&visited, visited.count - 1) != node->childCount) {
                        next = fn_82BC7368(&visited) + 1;
                        *fn_82BC0088(&visited, visited.count) = next;
                        node = (Node_82BBBB18 *)node->children[next - 1];
                        descend = 1;
                    } else {
                        fn_82BBB770(node, pass);
                        fn_82BC7368(&nodes);
                        fn_82BC7368(&visited);
                    }
                }
            }
        }
    }
    fn_82BBB1A8(pass);
    fn_82BBB7D8(pass);
    fn_82B7BEB0(visited.allocator, visited.items);
    fn_82B7BEB0(nodes.allocator, nodes.items);
}
