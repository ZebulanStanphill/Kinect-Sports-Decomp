typedef struct Node {
    char padding[16];
    int value;
    char *data;
} Node;

/* The empty alternative has no live node or data pointers. */
typedef union Result {
    int empty;
    struct {
        int value;
        Node *node;
        char *data;
    } found;
} Result;

typedef struct Object {
    char padding[16];
    unsigned int *flags;
    unsigned int value;
    char padding2[0xa4 - 0x18];
    Node *head;
    Node *first;
} Object;

Result fn_82D03A60(Object *object)
{
    Result result;
    Node *node;
    object->flags[1] = object->value | 1;
    node = object->first;
    if (node == (Node *)&object->head) {
        result.empty = 0;
        return result;
    }
    result.found.value = node->value;
    result.found.node = node;
    result.found.data = node->data - 16;
    return result;
}
