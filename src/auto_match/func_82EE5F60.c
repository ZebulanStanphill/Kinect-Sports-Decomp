typedef struct Buffer_82EE5F60 Buffer_82EE5F60;

typedef struct Vtable_82EE5F60 {
    void *unused[5];
    void (*data)(Buffer_82EE5F60 *, char **, int);
} Vtable_82EE5F60;

struct Buffer_82EE5F60 {
    Vtable_82EE5F60 *vtable;
};

typedef struct Node_82EE5F60 {
    struct Node_82EE5F60 *next;
    struct Node_82EE5F60 *previous;
    Buffer_82EE5F60 *buffer;
    unsigned int offset;
    unsigned int size;
} Node_82EE5F60;

typedef struct Object_82EE5F60 {
    int unused;
    Node_82EE5F60 head; /* 4 */
    unsigned int size;  /* 0x18 */
} Object_82EE5F60;

extern void *memcpy(void *, const void *, unsigned int);

static __forceinline Node_82EE5F60 *Next_82EE5F60(Node_82EE5F60 *head, Node_82EE5F60 *node)
{
    return node->next != head ? node->next : 0;
}

int fn_82EE5F60(Object_82EE5F60 *self, char *destination, unsigned int size)
{
    Node_82EE5F60 *node;
    if (!destination || !size) {
        return 0x80070057;
    }
    if (size > self->size) {
        return 0x8007000e;
    }
    node = Next_82EE5F60(&self->head, &self->head);
    while (node) {
        Node_82EE5F60 *current;
        char *data;
        unsigned int count;
        if (size == 0) {
            break;
        }
        current = node;
        node = Next_82EE5F60(&self->head, node);
        current->buffer->vtable->data(current->buffer, &data, 0);
        count = current->size;
        if (size <= count) {
            count = size;
        }
        memcpy(destination, data + current->offset, count);
        destination = count + destination;
        size -= count;
    }
    return 0;
}
