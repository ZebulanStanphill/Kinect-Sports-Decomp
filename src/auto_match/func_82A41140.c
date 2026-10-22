typedef struct Node {
    unsigned int value;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct List {
    char pad0[0x1c];
    Node *head;
    int count;
} List;

extern void fn_82A42AB0(List *l, unsigned int value);
extern Node *fn_82A47B98(void);

void fn_82A41140(List *l, Node *before, unsigned int value)
{
    Node *n;

    if (before == 0) {
        fn_82A42AB0(l, value);
    } else {
        n = fn_82A47B98();
        if (n != 0) {
            n->value = value;
            n->next = before;
            n->prev = before->prev;
            if (before->prev != 0) {
                before->prev->next = n;
            } else {
                l->head = n;
            }
            before->prev = n;
            l->count++;
        }
    }
}
