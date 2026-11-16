struct Node_82BC4DC8;

struct List_82BC4DC8 {
    unsigned int capacity;
    unsigned int count;
    struct Node_82BC4DC8 **data;
};

struct Node_82BC4DC8 {
    char padding[0x38];
    struct List_82BC4DC8 *outputs; /* 0x38 */
    char padding3c[0x0c];
    unsigned int group; /* 0x48 */
    char padding4c[0x0c];
    struct List_82BC4DC8 *children; /* 0x58 */
    struct List_82BC4DC8 *parents;  /* 0x5c */
};
extern struct Node_82BC4DC8 **fn_82BC0088(struct List_82BC4DC8 *list, unsigned int index);
extern void fn_82BBFFC8(struct List_82BC4DC8 *list, unsigned int index);

static __forceinline unsigned char Next_82BC4DC8(struct List_82BC4DC8 *list, unsigned int index,
                                                 struct Node_82BC4DC8 **value)
{
    if (index + 1 > list->count) {
        return 0;
    }
    *value = list->data[index];
    return 1;
}

struct Graph_82BC4DC8 {
    char padding00[8];
    unsigned int *groups; /* 0x08 */
    char padding0c[0x10];
    unsigned int count; /* 0x1c */
    void *storage;      /* 0x20 */
};
extern struct Node_82BC4DC8 **fn_82BA4058(void *storage);
extern void fn_82BC5B38(struct Node_82BC4DC8 *node, struct Node_82BC4DC8 *parent);

void fn_82BC4DC8(struct Graph_82BC4DC8 *self)
{
    struct Node_82BC4DC8 **nodes = fn_82BA4058(self->storage);
    unsigned int nodeIndex;
    for (nodeIndex = 1; nodeIndex <= self->count; ++nodeIndex) {
        struct Node_82BC4DC8 *node = nodes[nodeIndex];
        struct Node_82BC4DC8 *value = 0;
        unsigned int index = 0;
        unsigned int group = node->group;
        while (Next_82BC4DC8(node->outputs, index, &value)) {
            if (self->groups[value->group] != group) {
                fn_82BC5B38(node, value);
            }
            ++index;
        }
        {
            struct Node_82BC4DC8 *child = 0;
            unsigned int childIndex = 0;
            while (Next_82BC4DC8(node->children, childIndex, &child)) {
                value = 0;
                index = 0;
                while (Next_82BC4DC8(child->parents, index, &value)) {
                    if (self->groups[value->group] != group) {
                        fn_82BC5B38(node, value);
                    }
                    ++index;
                }
                ++childIndex;
            }
        }
    }
}
