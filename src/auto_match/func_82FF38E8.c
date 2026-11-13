typedef struct Node_82FF38E8 { struct Node_82FF38E8 *next; } Node_82FF38E8;
typedef struct Table_82FF38E8 { void *heap; Node_82FF38E8 *buckets[0x1f]; int count; } Table_82FF38E8;
extern void fn_82FA5190(void *heap, Node_82FF38E8 *n);
void fn_82FF38E8(Table_82FF38E8 *t)
{
    int i;
    for (i = 0; i < 0x1f; i++) {
        Node_82FF38E8 *n = t->buckets[i];
        while (n != 0) {
            Node_82FF38E8 *next = n->next;
            fn_82FA5190(t->heap, n);
            n = next;
        }
        t->buckets[i] = 0;
    }
    t->count = 0;
}
