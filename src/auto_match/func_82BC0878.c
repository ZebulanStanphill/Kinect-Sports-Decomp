extern void fn_82B7BEB0(void *heap, void *p);

typedef struct Node_82BC0878 { int f0, f4; struct Node_82BC0878 *next; } Node_82BC0878;
typedef struct { int f0; Node_82BC0878 *head; } List_82BC0878;
typedef struct { char pad[0x2c]; List_82BC0878 *list; } Obj_82BC0878;

void fn_82BC0878(Obj_82BC0878 *self)
{
    List_82BC0878 *l = self->list;
    Node_82BC0878 *n = l->head;
    void **block;
    if (n == 0)
        return;
    l->head = n->next;
    block = (void **)n - 1;
    fn_82B7BEB0(*block, block);
}
