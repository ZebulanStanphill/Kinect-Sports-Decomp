typedef struct Node_828F5D48 {
    int key;
    struct Node_828F5D48 *next;
    int flag;
} Node_828F5D48;

typedef struct Owner_828F5D48 {
    char pad0[0x74];
    Node_828F5D48 *head;
    char pad78[0x2a0 - 0x78];
    int last;
} Owner_828F5D48;

extern void *fn_8265C940(int size, int flags);

static __forceinline Node_828F5D48 *Node_ctor_828F5D48(Node_828F5D48 *n, int key)
{
    if (n != 0) {
        n->next = 0;
        n->key = key;
        n->flag = 1;
        return n;
    }
    return 0;
}

int fn_828F5D48(Owner_828F5D48 *param_1, int param_2)
{
    Node_828F5D48 *n;

    n = Node_ctor_828F5D48((Node_828F5D48 *)fn_8265C940(0xc, 0x24810000), param_2);
    if (n == 0) {
        return 0x8007000E;
    }
    n->next = param_1->head;
    param_1->head = n;
    param_1->last = param_2;
    return 0;
}
