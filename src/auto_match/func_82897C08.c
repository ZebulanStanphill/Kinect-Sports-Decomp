typedef struct Node_82897C08 Node_82897C08;

struct Node_82897C08 {
    char pad0[0x24];
    Node_82897C08 *prev;  /* 0x24 */
    Node_82897C08 *next;  /* 0x28 */
    int pad2c;            /* 0x2C */
    unsigned char marked; /* 0x30 */
    char pad31[3];
    unsigned int value; /* 0x34 */
};

static __forceinline const unsigned int *Min_82897C08(const unsigned int *left, const unsigned int *right)
{
    return *right < *left ? right : left;
}

/* Appends node after the last node of list's chain; when either is marked, marks the whole chain and gives
   every node the smallest non-zero value. */
void fn_82897C08(Node_82897C08 *node, Node_82897C08 *list)
{
    Node_82897C08 *head;
    Node_82897C08 *last = list;
    unsigned char marked;
    unsigned int value;

    while (last->next != 0) {
        last = last->next;
    }
    marked = last->marked != 0 || node->marked != 0;
    value = node->value;
    if (marked && last->marked) {
        if (value != 0) {
            value = *Min_82897C08(&value, &last->value);
        } else {
            value = last->value;
        }
    }
    last->next = node;
    node->prev = last;
    if (marked) {
        head = node;
        while (head->prev != 0) {
            head = head->prev;
        }
        do {
            head->value = value;
            head->marked = 1;
            head = head->next;
        } while (head != 0);
    }
}
