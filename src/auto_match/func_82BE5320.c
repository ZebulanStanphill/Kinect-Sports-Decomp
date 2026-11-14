typedef struct Node_82BE5320 {
    struct Node_82BE5320 *next;
    int pad4;
    unsigned int key;           /* 0x8 */
} Node_82BE5320;

typedef struct List_82BE5320 {
    Node_82BE5320 *head;
} List_82BE5320;

Node_82BE5320 *fn_82BE5320(List_82BE5320 *list, unsigned int key)
{
    Node_82BE5320 *n = list->head;
    while (n) {
        if (n->key == key)
            return n;
        n = n->next;
    }
    return n;
}
