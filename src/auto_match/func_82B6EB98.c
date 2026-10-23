typedef struct Alloc {
    void *ctx;
    void *(*alloc)(void *ctx, unsigned int size);
} Alloc;

typedef struct Node {
    int a;
    int b;
    int v[3];
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
    int count;
} List;

void fn_82B6EB98(Alloc *param_1, List *param_2, int param_3, int param_4, int *param_5)
{
    Node *n;

    n = (Node *)param_1->alloc(param_1->ctx, 0x18);
    n->b = param_3;
    n->a = param_4;
    if (param_5 != 0) {
        n->v[0] = param_5[0];
        n->v[1] = param_5[1];
        n->v[2] = param_5[2];
    }
    if (param_2->head == 0) {
        param_2->head = n;
    } else {
        param_2->tail->next = n;
    }
    param_2->tail = n;
    param_2->count = param_2->count + 1;
}
