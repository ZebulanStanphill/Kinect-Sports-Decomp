typedef struct Node_82E3C770 {
    int value;
    struct Node_82E3C770 *next;
} Node_82E3C770;

typedef struct Queue_82E3C770 {
    int unk0;
    char pool[0x58];
    Node_82E3C770 *head;
    Node_82E3C770 *tail;
    int count;
} Queue_82E3C770;

extern int fn_82E3BE78(void *pool, Node_82E3C770 **out);

int fn_82E3C770(Queue_82E3C770 *q, int *value)
{
    Node_82E3C770 *n;
    Node_82E3C770 *node;
    int hr = fn_82E3BE78(q->pool, &n);
    if (hr < 0)
        return hr;
    node = n;
    node->next = 0;
    node->value = *value;
    if (q->tail != 0)
        q->tail->next = node;
    else
        q->head = node;
    q->tail = node;
    q->count++;
    return 0;
}
