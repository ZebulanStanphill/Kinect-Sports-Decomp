typedef struct Node_828E9528 Node_828E9528;
struct Node_828E9528 { Node_828E9528 *next; };
typedef struct List_828E9528 { Node_828E9528 *head; } List_828E9528;
typedef struct Owner_828E9528 { List_828E9528 *list; } Owner_828E9528;
typedef struct Ref_828E9528 { int f0; int count; } Ref_828E9528;

typedef struct Iter_828E9528 {
    Owner_828E9528 *owner;
    Ref_828E9528 *ref;
    Node_828E9528 *cur;
} Iter_828E9528;

extern void *fn_8265C9E0(unsigned int size);
extern Ref_828E9528 *fn_828A8008(void *mem, Owner_828E9528 *owner, List_828E9528 *list);
extern void fn_828E38D8(Iter_828E9528 *self, Ref_828E9528 *ref);
extern void fn_828A7138(Iter_828E9528 *self, int n, Node_828E9528 **pos, int keep);

static __forceinline int IsUnique(Iter_828E9528 *self)
{
    return self->ref != 0 && self->ref->count == 1;
}

void fn_828E9528(Iter_828E9528 *self)
{
    Node_828E9528 *pos;
    int keep;

    if (!IsUnique(self)) {
        void *mem = fn_8265C9E0(0x10);
        fn_828E38D8(self, mem ? fn_828A8008(mem, self->owner, self->owner->list) : 0);
        pos = self->owner->list->head->next;
        keep = 0;
    } else {
        Node_828E9528 *head = self->owner->list->head;
        pos = self->cur == head ? head->next : self->cur;
        keep = 1;
    }
    fn_828A7138(self, 1, &pos, keep);
}
