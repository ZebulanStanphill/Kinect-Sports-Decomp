typedef struct Node_827DEB38 {
    int a;
    int *value;
} Node_827DEB38;

typedef struct Iter_827DEB38 {
    int a;
    int current;
    Node_827DEB38 *next;
} Iter_827DEB38;

static __forceinline unsigned char nn(Node_827DEB38 *q) { if (q != 0) return 1; return 0; }

void fn_827DEB38(Iter_827DEB38 *it)
{
    if (nn(it->next)) {
        it->current = *it->next->value;
    }
}
