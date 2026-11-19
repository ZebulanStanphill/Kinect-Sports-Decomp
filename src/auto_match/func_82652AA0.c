typedef struct Manager_82652AA0 Manager_82652AA0;

typedef struct Node_82652AA0 {
    int used;                   /* 0x0 */
    char *buffer;               /* 0x4 */
    Manager_82652AA0 *owner;    /* 0x8 */
    struct Node_82652AA0 *next; /* 0xc */
} Node_82652AA0;

struct Manager_82652AA0 {
    char pad0[0x555c];
    char *buffers;        /* 0x555c */
    Node_82652AA0 *nodes; /* 0x5560 */
};

extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_8264D6C0(char *begin, char *end, int value);

static __forceinline Node_82652AA0 *InitNode_82652AA0(Node_82652AA0 *node, char *buffer,
                                                      Manager_82652AA0 *owner)
{
    char *samples = buffer;

    if (node == 0) {
        node = (Node_82652AA0 *)fn_8265C940(0x10, 0x24800000);
        if (node == 0) {
            return 0;
        }
    }
    if (samples != 0) {
        node->buffer = samples;
    } else {
        node->buffer = (char *)fn_8265C940(0x1e0, 0xa2800000);
        if (node->buffer == 0) {
            fn_8265C990(node, 0x24800000);
            return 0;
        }
    }
    fn_8264D6C0(node->buffer, node->buffer + 0x1e0, 0);
    node->owner = owner;
    node->used = 1;
    node->next = 0;
    return node;
}

int fn_82652AA0(Manager_82652AA0 *self)
{
    int i;

    if (self->buffers == 0) {
        char *buffers = (char *)fn_8265C940(0x7a0, 0xa3800000);

        if (buffers == 0) {
            return 0;
        }
        self->buffers = buffers;
    }
    if (self->nodes == 0) {
        Node_82652AA0 *nodes = (Node_82652AA0 *)fn_8265C940(0x40, 0x24800000);

        if (nodes == 0) {
            return 0;
        }
        self->nodes = nodes;
    }
    for (i = 0; i < 4; i++) {
        InitNode_82652AA0(&self->nodes[i], self->buffers + i * 0x1e0, self);
    }
    return 1;
}
