typedef struct String_8258D680 {
    union {
        char buf[16];
        char *ptr;
    } bx; /* 0x00 */

    unsigned int size;     /* 0x10 */
    unsigned int reserved; /* 0x14 */
    int allocator;         /* 0x18 */
} String_8258D680;

typedef struct RefCount_8258D680 RefCount_8258D680;

typedef struct SharedPtr_8258D680 {
    void *ptr;              /* 0x00 */
    RefCount_8258D680 *rep; /* 0x04 */
} SharedPtr_8258D680;

typedef struct Vector_8258D680 {
    SharedPtr_8258D680 *first; /* 0x00 */
    SharedPtr_8258D680 *last;  /* 0x04 */
    SharedPtr_8258D680 *end;   /* 0x08 */
} Vector_8258D680;

typedef struct TreeNode_8258D680 TreeNode_8258D680;

struct TreeNode_8258D680 {
    TreeNode_8258D680 *left;   /* 0x00 */
    TreeNode_8258D680 *parent; /* 0x04 */
    TreeNode_8258D680 *right;  /* 0x08 */
    String_8258D680 key;       /* 0x0c */
    int value[2];              /* 0x28 */
    char color;                /* 0x30 */
    char isnil;                /* 0x31 */
};

typedef struct Tree_8258D680 {
    int allocator;           /* 0x00 */
    TreeNode_8258D680 *head; /* 0x04 */
    unsigned int size;       /* 0x08 */
} Tree_8258D680;

typedef struct Session_8258D680 {
    char pad000[0x190];
    String_8258D680 name; /* 0x190 */
    char pad1ac[0x1d0 - 0x1ac];
    Vector_8258D680 players; /* 0x1d0 */
    char pad1dc[4];
    Tree_8258D680 lookup; /* 0x1e0 */
    char pad1ec[0x1f4 - 0x1ec];
    int registered; /* 0x1f4 */
    char pad1f8[0x368 - 0x1f8];
    int pending; /* 0x368 */
    int active;  /* 0x36c */
    char pad370[0xffc - 0x370];
    int count; /* 0xffc */
} Session_8258D680;

extern void fn_82BE3DD0(const char *name);
extern void fn_822315A0(RefCount_8258D680 *rep);
extern void fn_824CD420(Tree_8258D680 *tree, TreeNode_8258D680 *root);
extern void fn_82230300(String_8258D680 *string, int built, int newSize);
extern void fn_8265CA20(void *p);

static __forceinline char *StringPtr(String_8258D680 *string)
{
    return 16 <= string->reserved ? string->bx.ptr : string->bx.buf;
}

static __forceinline void SwapRep(RefCount_8258D680 **left, RefCount_8258D680 **right)
{
    RefCount_8258D680 *temp = *left;
    *left = *right;
    *right = temp;
}

static __forceinline void SwapPtr(void **left, void **right)
{
    void *temp = *left;
    *left = *right;
    *right = temp;
}

static __forceinline void SharedPtrSwap(SharedPtr_8258D680 *left, SharedPtr_8258D680 *right)
{
    SwapRep(&left->rep, &right->rep);
    SwapPtr(&left->ptr, &right->ptr);
}

static __forceinline void SharedPtrMove(SharedPtr_8258D680 *dst, SharedPtr_8258D680 *src)
{
    SharedPtr_8258D680 temp;

    temp.ptr = 0;
    temp.rep = 0;
    if (&temp != src) {
        SharedPtrSwap(&temp, src);
    }
    SharedPtrSwap(&temp, dst);
    if (temp.rep != 0) {
        fn_822315A0(temp.rep);
    }
}

static __forceinline SharedPtr_8258D680 *
SharedPtrMoveRange(SharedPtr_8258D680 *first, SharedPtr_8258D680 *last, SharedPtr_8258D680 *dest)
{
    for (; first != last; ++dest, ++first) {
        SharedPtrMove(dest, first);
    }
    return dest;
}

static __forceinline void SharedPtrDestroyRange(SharedPtr_8258D680 *first, SharedPtr_8258D680 *last)
{
    for (; first != last; ++first) {
        if (first->rep != 0) {
            fn_822315A0(first->rep);
        }
    }
}

static __forceinline void VectorErase(Vector_8258D680 *vector, SharedPtr_8258D680 *first,
                                      SharedPtr_8258D680 *last)
{
    SharedPtr_8258D680 *end;

    if (first != last) {
        end = SharedPtrMoveRange(last, vector->last, first);
        SharedPtrDestroyRange(end, vector->last);
        vector->last = end;
    }
}

static __forceinline void VectorClear(Vector_8258D680 *vector)
{
    VectorErase(vector, vector->first, vector->last);
}

static __forceinline void StringEos(String_8258D680 *string, unsigned int size)
{
    StringPtr(string)[string->size = size] = 0;
}

static __forceinline void TreeEraseRoot(Tree_8258D680 *tree, TreeNode_8258D680 *root)
{
    TreeNode_8258D680 *node;

    for (node = root; !node->isnil; root = node) {
        fn_824CD420(tree, node->right);
        node = node->left;
        fn_82230300(&root->key, 1, 0);
        fn_8265CA20(root);
    }
}

static __forceinline void TreeClear(Tree_8258D680 *tree)
{
    TreeEraseRoot(tree, tree->head->parent);
    tree->head->parent = tree->head;
    tree->head->left = tree->head;
    tree->head->right = tree->head;
    tree->size = 0;
}

void fn_8258D680(Session_8258D680 *self)
{
    if (self->name.size != 0 && self->registered != 0) {
        fn_82BE3DD0(StringPtr(&self->name));
    }
    StringEos(&self->name, 0);

    VectorClear(&self->players);

    TreeClear(&self->lookup);

    self->count = 0;
    self->pending = 0;
    self->active = 0;
}
