typedef struct Node_82AF56B0 Node_82AF56B0;

typedef struct Link_82AF56B0 {
    unsigned int flags;         /* 0x00 */
    int reserved04;             /* 0x04 */
    struct Link_82AF56B0 *next; /* 0x08 */
    int reserved0c;             /* 0x0c */
    Node_82AF56B0 *owner;       /* 0x10 */
} Link_82AF56B0;

typedef struct Input_82AF56B0 {
    int reserved00[3];   /* 0x00 */
    Node_82AF56B0 *node; /* 0x0c */
} Input_82AF56B0;

struct Node_82AF56B0 {
    int reserved00;            /* 0x00 */
    Link_82AF56B0 *links;      /* 0x04 */
    unsigned int flags;        /* 0x08 */
    char reserved0c[0x20];     /* 0x0c */
    Input_82AF56B0 *inputs[8]; /* 0x2c */
};

typedef struct Context_82AF56B0 {
    char reserved00[0x294]; /* 0x00 */
    void *pool;             /* 0x294 */
} Context_82AF56B0;

extern unsigned char fn_82AF4AE0(Context_82AF56B0 *, void *, Node_82AF56B0 *, unsigned int);
extern Node_82AF56B0 *fn_82B161E8(Context_82AF56B0 *, Node_82AF56B0 *, void *);

static __forceinline int hasLink(Link_82AF56B0 *link)
{
    if (link != 0) {
        return 1;
    }
    return 0;
}

static __forceinline Node_82AF56B0 *findOwner(Node_82AF56B0 *node)
{
    Link_82AF56B0 *link;
    if ((node->flags & 0x3f80) == 0x3700) {
        return node;
    }
    for (link = node->links; hasLink(link); link = link->next) {
        Node_82AF56B0 *owner = link->owner;
        if (owner != 0 && (owner->flags & 0x3f80) == 0x3700 && (link->flags & 0xe000000) != 0) {
            return owner;
        }
    }
    return 0;
}

static __forceinline unsigned char isShared(Node_82AF56B0 *node)
{
    return (node->flags >> 26) & 1;
}

static __forceinline int hasInput(unsigned int index, Node_82AF56B0 *node)
{
    if (index < ((node->flags >> 19) & 7)) {
        return 1;
    }
    return 0;
}

unsigned char fn_82AF56B0(Context_82AF56B0 *self, void *destination, Node_82AF56B0 *node, unsigned int flags)
{
    Node_82AF56B0 *owner = findOwner(node);
    if (owner != 0) {
        unsigned int index;
        Input_82AF56B0 **input;
        if (isShared(owner)) {
            owner = fn_82B161E8(self, owner, self->pool);
        }
        index = 0;
        input = owner->inputs;
        for (; hasInput(index, owner);) {
            if (!fn_82AF4AE0(self, destination, (*input)->node, (*input)->node == node ? flags : 0)) {
                return 0;
            }
            ++index;
            ++input;
        }
        return 1;
    }
    return fn_82AF4AE0(self, destination, node, flags);
}
