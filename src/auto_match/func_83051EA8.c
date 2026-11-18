typedef struct Node_83051EA8 Node_83051EA8;

typedef struct Vtable_83051EA8 {
    void *slots[2];                            /* 0x0 */
    unsigned char (*process)(Node_83051EA8 *); /* 0x8 */
} Vtable_83051EA8;

struct Node_83051EA8 {
    Vtable_83051EA8 *vtable; /* 0x0 */
    int reserved[2];         /* 0x4 */
    Node_83051EA8 *next;     /* 0xc */
};

typedef struct Iterator_83051EA8 {
    Node_83051EA8 *current;  /* 0x0 */
    Node_83051EA8 *previous; /* 0x4 */
} Iterator_83051EA8;

static __forceinline Iterator_83051EA8 Erase_83051EA8(Node_83051EA8 **head, Iterator_83051EA8 iterator)
{
    Iterator_83051EA8 successor;
    successor.current = iterator.current->next;
    successor.previous = iterator.previous;
    if (iterator.current == *head) {
        *head = iterator.current->next;
    } else {
        iterator.previous->next = iterator.current->next;
    }
    return successor;
}

static __forceinline void PushFront_83051EA8(Node_83051EA8 **head, Node_83051EA8 *node)
{
    if (*head == 0) {
        *head = node;
        node->next = 0;
    } else {
        node->next = *head;
        *head = node;
    }
}

int fn_83051EA8(char *self)
{
    Node_83051EA8 **head = (Node_83051EA8 **)(self + 0x58);
    Iterator_83051EA8 iterator;
    iterator.current = *head;
    iterator.previous = 0;
    while (iterator.current != 0) {
        Node_83051EA8 *node = iterator.current;
        Node_83051EA8 *next = node->next;
        iterator = Erase_83051EA8(head, iterator);
        if (!node->vtable->process(node)) {
            PushFront_83051EA8(head, node);
            return 0;
        }
    }
    *head = 0;
    return 1;
}
