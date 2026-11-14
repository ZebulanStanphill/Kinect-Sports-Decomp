typedef struct Node_82B16898 {
    int type;
    struct Node_82B16898 *next;
    double min[4];
    double max[4];
} Node_82B16898;

typedef struct List_82B16898 {
    char pad[0x10];
    Node_82B16898 *head;
} List_82B16898;

static __forceinline float AsFloat(unsigned int bits)
{
    return *(float *)&bits;
}

void fn_82B16898(List_82B16898 *self, int index)
{
    Node_82B16898 *n;

    for (n = self->head; n != 0; n = n->next) {
        if (n->type == 1)
            break;
    }
    if (n == 0)
        return;
    n->min[index] = AsFloat(0xff800000);
    n->max[index] = AsFloat(0x7f800000);
}
