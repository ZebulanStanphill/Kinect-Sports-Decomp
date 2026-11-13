typedef struct Node_83016D40 { struct Node_83016D40 *next; } Node_83016D40;
typedef struct Table_83016D40 { void *heap; Node_83016D40 *buckets[0xc1]; int count; } Table_83016D40;
extern void fn_82FA5190(void *heap, Node_83016D40 *n);
void fn_83016D40(Table_83016D40 *t)
{
    int i;
    for (i = 0; i < 0xc1; i++) {
        Node_83016D40 *n = t->buckets[i];
        while (n != 0) {
            Node_83016D40 *next = n->next;
            fn_82FA5190(t->heap, n);
            n = next;
        }
        t->buckets[i] = 0;
    }
    t->count = 0;
}
