#define __lwsync() __emit(0x7C2004AC)

typedef struct Node_822FF888 {
    struct Node_822FF888 *prev;
    struct Node_822FF888 *next;
    int value;
} Node_822FF888;

typedef struct Obj_822FF888 {
    void *vtable;
    Node_822FF888 head;
} Obj_822FF888;

typedef struct Iter_822FF888 {
    Node_822FF888 *node;
    int pad;
} Iter_822FF888;

extern void fn_822B1B90(Iter_822FF888 *out, Node_822FF888 *head);
extern char lbl_821AECB0[];

void fn_822FF888(Obj_822FF888 *self)
{
    Node_822FF888 *head = &self->head;
    Node_822FF888 *n;
    Iter_822FF888 it;

    self->vtable = lbl_821AECB0;
    fn_822B1B90(&it, head);
    for (n = self->head.next; n != head; n = n->next) {
        n->value = 0;
    }
    __lwsync();
    it.node->value = 0;
}
