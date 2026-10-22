typedef struct Node {
    struct Node *next;
    int f4;
    int a8;
    unsigned int ac;
    int b0;
    unsigned int b4;
    int c8;
    unsigned int cc;
} Node;

typedef struct Entry {
    int count;
    Node *head;
    int f8;
    int fc;
    int f10;
} Entry;

typedef struct Thing {
    Entry entries[2];
} Thing;

extern unsigned int fn_8251F720(void *p, int a);

void fn_8246BC48(Thing *param_1)
{
    int i;
    Node *n;

    for (i = 0; i < 2; i++) {
        Entry *e = &param_1->entries[i];
        e->count = 0;
        e->f10 = 0;
        for (n = e->head->next; n != e->head; n = n->next) {
            if (n->ac == 0) {
                n->ac = fn_8251F720(&n->a8, 0);
            }
            if (n->b4 == 0) {
                n->b4 = fn_8251F720(&n->b0, 0);
            }
            if (n->cc == 0) {
                n->cc = fn_8251F720(&n->c8, 0);
            }
        }
    }
}
