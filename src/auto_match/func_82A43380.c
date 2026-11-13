typedef struct Node_82A43380 {
    void *data;
    struct Node_82A43380 *next;
} Node_82A43380;

typedef struct Owner_82A43380 {
    char pad[0xcc];
    Node_82A43380 *head;    /* 0xcc */
} Owner_82A43380;

typedef int (*Compare_82A43380)(void *data, void *key);

Node_82A43380 *fn_82A43380(Owner_82A43380 *self, void *key, Compare_82A43380 compare, Node_82A43380 *after)
{
    Node_82A43380 *n;
    if (after != 0)
        n = after->next;
    else
        n = self->head;
    if (compare != 0) {
        for (; n != 0; n = n->next) {
            if (compare(n->data, key) == 0)
                return n;
        }
    } else {
        for (; n != 0; n = n->next) {
            if (n->data == key)
                return n;
        }
    }
    return 0;
}
