typedef struct Pair_827F1CB0 {
    unsigned short a;
    unsigned short b;
} Pair_827F1CB0;

typedef struct Node_827F1CB0 {
    unsigned short a;
    unsigned short b;
    struct Node_827F1CB0 *prev;
    struct Node_827F1CB0 *next;
} Node_827F1CB0;

typedef struct Owner_827F1CB0 {
    char pad[0xd4];
    Node_827F1CB0 *head;
    int count;
} Owner_827F1CB0;

extern void fn_827F1C50(Pair_827F1CB0 *out, Owner_827F1CB0 *o, Node_827F1CB0 *n);

Pair_827F1CB0 *fn_827F1CB0(Pair_827F1CB0 *param_1, Owner_827F1CB0 *param_2, Node_827F1CB0 **param_3)
{
    Pair_827F1CB0 tmp;
    Node_827F1CB0 *n;
    param_2->count--;
    n = *param_3;
    if (n->next != param_2->head) {
        *param_3 = n->next;
        fn_827F1C50(param_1, param_2, n);
        return param_1;
    }
    fn_827F1C50(&tmp, param_2, n);
    *param_3 = param_2->head;
    *param_1 = tmp;
    return param_1;
}
