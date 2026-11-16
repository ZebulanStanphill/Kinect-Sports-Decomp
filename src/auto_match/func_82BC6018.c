struct Node_82BC6018;

struct List_82BC6018 {
    unsigned int capacity;
    unsigned int count;
    struct Node_82BC6018 **data;
};

struct Node_82BC6018 {
    char padding[0x38];
    struct List_82BC6018 *outputs; /* 0x38 */
    struct List_82BC6018 *inputs;  /* 0x3c */
};
extern struct Node_82BC6018 **fn_82BC0088(struct List_82BC6018 *list, unsigned int index);
extern void fn_82BBFFC8(struct List_82BC6018 *list, unsigned int index);

static __forceinline unsigned char Next_82BC6018(struct List_82BC6018 *list, unsigned int index,
                                                 struct Node_82BC6018 **value)
{
    if (index + 1 > list->count) {
        return 0;
    }
    *value = list->data[index];
    return 1;
}

void fn_82BC6018(struct Node_82BC6018 *self, struct Node_82BC6018 *oldNode, struct Node_82BC6018 *newNode)
{
    struct List_82BC6018 *list;
    unsigned int index = 0;
    unsigned int cursor = 1;
    struct Node_82BC6018 *value = 0;
    list = self->outputs;
    while (Next_82BC6018(list, index, &value)) {
        if (value == oldNode) {
            struct Node_82BC6018 **slot;
            if (index < self->outputs->count) {
                slot = &list->data[index];
            } else {
                slot = fn_82BC0088(list, index);
            }
            *slot = newNode;
            break;
        }
        ++index;
    }
    list = oldNode->inputs;
    index = 0;
    value = 0;
    cursor = 1;
    while (Next_82BC6018(list, index, &value)) {
        if (value == self) {
            fn_82BBFFC8(list, index);
            break;
        }
        ++index;
    }
    *fn_82BC0088(newNode->inputs, newNode->inputs->count) = self;
}
