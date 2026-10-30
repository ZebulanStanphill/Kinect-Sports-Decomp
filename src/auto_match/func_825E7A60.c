typedef struct Vec_825E7A60 {
    void *data;
    void *end;
    int pad[2];
    unsigned int count;
} Vec_825E7A60;
typedef struct Node_825E7A60 {
    char pad[0x34];
    Vec_825E7A60 vec;
    struct Node_825E7A60 *next;
} Node_825E7A60;
typedef struct Stack_825E7A60 {
    int pad[3];
    int count;
    Node_825E7A60 **items;
} Stack_825E7A60;
typedef struct Pool_825E7A60 {
    int zero;
    int count;
    int pad[0x12];
    Node_825E7A60 *first;
    int pad2[0x10];
    Stack_825E7A60 *stack;
} Pool_825E7A60;
extern void fn_82522ED8(void *p);

void fn_825E7A60(Pool_825E7A60 *param_1)
{
    Node_825E7A60 *n;
    Node_825E7A60 *next;
    Vec_825E7A60 *v;
    Stack_825E7A60 *s;
    void *d;
    unsigned int i;
    int k;

    if (param_1->count != 0) {
        n = param_1->first;
        while (n != (Node_825E7A60 *)((int *)param_1 + 2)) {
            d = n->vec.data;
            v = &n->vec;
            next = n->next;
            if (d != 0) {
                for (i = 0; i < v->count; i++) {
                }
                v->end = d;
                v->count = 0;
                fn_82522ED8(d);
            }
            s = param_1->stack;
            s->items[s->count] = n;
            s->count++;
            n = next;
        }
    }
    param_1->zero = 0;
    param_1->count = 0;
    for (k = 0; k < 0x11; k++) {
        ((unsigned int *)param_1)[0x14 + k] = (unsigned int)((int *)param_1 + 2);
    }
}
