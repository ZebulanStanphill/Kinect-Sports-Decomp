typedef struct Shared_823B7660 {
    void *object;     /* 0x0 */
    void *references; /* 0x4 */
} Shared_823B7660;

typedef struct Deque_823B7660 {
    void *proxy;
    void **map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
    int pad[2];
} Deque_823B7660;

typedef struct Inner_823B7660 {
    unsigned int handle;  /* 0x0 */
    Deque_823B7660 queue; /* 0x4 */
} Inner_823B7660;

typedef struct Entry_823B7660 {
    void *owner;          /* 0x0 */
    Inner_823B7660 inner; /* 0x4 */
} Entry_823B7660;

typedef struct Pair_823B7660 {
    unsigned int key;     /* 0x0 */
    Entry_823B7660 entry; /* 0x4 */
} Pair_823B7660;

typedef struct Node_823B7660 {
    struct Node_823B7660 *left;   /* 0x00 */
    struct Node_823B7660 *parent; /* 0x04 */
    struct Node_823B7660 *right;  /* 0x08 */
    Pair_823B7660 value;          /* 0x0c */
    char color;                   /* 0x34 */
    char isnil;                   /* 0x35 */
} Node_823B7660;

typedef struct Tree_823B7660 {
    int comp;
    Node_823B7660 *head;
    unsigned int size;
} Tree_823B7660;

typedef struct Context_823B7660 {
    char pad0[0x308];
    void *registry; /* 0x308 */
} Context_823B7660;

typedef struct Manager_823B7660 {
    Context_823B7660 *context; /* 0x00 */
    char pad4[0x5c - 0x4];
    Tree_823B7660 entries; /* 0x5c */
} Manager_823B7660;

typedef struct Client_823B7660 {
    int pad0;
    Manager_823B7660 *manager; /* 0x4 */
} Client_823B7660;

extern unsigned int fn_823BC4D8(void *registry, Shared_823B7660 *target);
extern Deque_823B7660 *fn_825ACAC8(Deque_823B7660 *self);
extern void fn_823BABB0(Deque_823B7660 *self, const Deque_823B7660 *other);
extern void fn_823B9EF0(Deque_823B7660 *self, const Deque_823B7660 *other);
extern void fn_823B9060(Deque_823B7660 *self);
extern void fn_8265CA20(void *block);
extern Node_823B7660 **fn_823B96F0(Node_823B7660 **out, Tree_823B7660 *tree, Node_823B7660 *where,
                                   const Pair_823B7660 *value);
extern void fn_822315A0(void *references);

static __forceinline void DestroyQueue(Deque_823B7660 *queue)
{
    fn_823B9060(queue);
    fn_8265CA20(queue->proxy);
    queue->proxy = 0;
}

static __forceinline void AssignInner(Inner_823B7660 *dst, const Inner_823B7660 *src)
{
    dst->handle = src->handle;
    fn_823B9EF0(&dst->queue, &src->queue);
}

static __forceinline void AssignEntry(Entry_823B7660 *dst, const Entry_823B7660 *src)
{
    dst->owner = src->owner;
    AssignInner(&dst->inner, &src->inner);
}

static __forceinline Node_823B7660 *LowerBound(Tree_823B7660 *tree, unsigned int key)
{
    Node_823B7660 *node = tree->head->parent;
    Node_823B7660 *where = tree->head;

    while (!node->isnil) {
        if (node->value.key < key) {
            node = node->right;
        } else {
            where = node;
            node = node->left;
        }
    }
    return where;
}

void fn_823B7660(Manager_823B7660 *self, Client_823B7660 *client, unsigned int key, Shared_823B7660 *target)
{
    Entry_823B7660 entry;
    Node_823B7660 *where;
    Tree_823B7660 *tree;

    {
        unsigned int handle = fn_823BC4D8(self->context->registry, target);
        Deque_823B7660 queue;

        fn_825ACAC8(&queue);
        entry.owner = client;
        entry.inner.handle = handle;
        fn_823BABB0(&entry.inner.queue, &queue);
        DestroyQueue(&queue);
    }
    tree = &self->entries;
    where = LowerBound(tree, key);
    if (where == tree->head || key < where->value.key) {
        Entry_823B7660 empty;
        Pair_823B7660 pair;
        Node_823B7660 *inserted;

        empty.owner = 0;
        empty.inner.handle = 0;
        fn_825ACAC8(&empty.inner.queue);
        pair.key = key;
        pair.entry.owner = empty.owner;
        pair.entry.inner.handle = empty.inner.handle;
        fn_825ACAC8(&pair.entry.inner.queue);
        fn_823B9EF0(&pair.entry.inner.queue, &empty.inner.queue);
        where = *fn_823B96F0(&inserted, tree, where, &pair);
        DestroyQueue(&pair.entry.inner.queue);
        DestroyQueue(&empty.inner.queue);
    }
    AssignEntry(&where->value.entry, &entry);
    DestroyQueue(&entry.inner.queue);
    client->manager = self;
    if (target->references != 0) {
        fn_822315A0(target->references);
    }
}
