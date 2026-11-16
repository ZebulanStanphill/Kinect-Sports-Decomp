typedef struct Node_83065E80 {
    struct Node_83065E80 *next;
    int size;
} Node_83065E80;
typedef struct Allocator_83065E80 Allocator_83065E80;

typedef struct Vtable_83065E80 {
    void *reserved;
    void (*Free)(Allocator_83065E80 *self, Node_83065E80 *node);
} Vtable_83065E80;

struct Allocator_83065E80 {
    Vtable_83065E80 *vtable;
};

typedef struct List_83065E80 {
    int reserved;
    Node_83065E80 *head;
    Allocator_83065E80 *allocator;
    int reserved0c;
    int total;
} List_83065E80;

void fn_83065E80(List_83065E80 *self, Node_83065E80 *target)
{
    Node_83065E80 *node = self->head;
    Node_83065E80 *previous = 0;
    while (node != 0) {
        if (node == target) {
            self->total -= node->size;
            if (previous != 0) {
                previous->next = node->next;
            } else {
                self->head = node->next;
            }
            self->allocator->vtable->Free(self->allocator, node);
            return;
        }
        previous = node;
        node = node->next;
    }
}
