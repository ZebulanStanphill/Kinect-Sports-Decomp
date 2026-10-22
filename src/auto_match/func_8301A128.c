typedef struct Node {
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
    Node *free;
    int pad[2];
    int count;
} List;

typedef struct {
    Node *node;
    Node *prev;
} Find;

extern void fn_83016F60(Find *out, List *list, int *key);
int fn_8301A128(List *list, int *key)
{
    Find f;
    Node *node;
    Node *prev;

    fn_83016F60(&f, list, key);
    if (f.node != 0) {
        node = f.node;
        prev = f.prev;
        if (node == list->head) {
            list->head = node->next;
        }
        else {
            prev->next = node->next;
        }
        if (node == list->tail) {
            list->tail = prev;
        }
        node->next = list->free;
        list->free = node;
        list->count--;
        return 1;
    }
    return 2;
}
