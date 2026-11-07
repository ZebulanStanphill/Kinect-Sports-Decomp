typedef struct Node_828F6650 {
    int key;
    int value;
    int unk8;
    struct Node_828F6650 *next;
} Node_828F6650;

typedef struct List_828F6650 {
    char pad0[0x38];
    Node_828F6650 *head;
} List_828F6650;

typedef struct Owner_828F6650 {
    char pad0[0x5c];
    int f5c;
    int f60;
    char pad64[0x274 - 0x64];
    List_828F6650 *list;
} Owner_828F6650;

extern void *fn_8265C940(int size, int flags);

static __forceinline Node_828F6650 *Node_ctor_828F6650(Node_828F6650 *n, Owner_828F6650 *o, int key)
{
    if (n != 0) {
        int val = o->f5c;
        n->unk8 = 0;
        n->key = key;
        n->next = 0;
        n->value = val;
        return n;
    }
    return 0;
}

int fn_828F6650(Owner_828F6650 *param_1, int param_2)
{
    Node_828F6650 *n;
    int v;

    n = Node_ctor_828F6650((Node_828F6650 *)fn_8265C940(0x10, 0x24810000), param_1, param_2);
    if (n == 0) {
        return 0x8007000E;
    }
    n->next = param_1->list->head;
    param_1->list->head = n;
    if (param_1->f5c != 0 && param_2 != 0) {
        v = 1;
    } else {
        v = 0;
    }
    param_1->f60 = v;
    return 0;
}
