typedef struct Node_8286A108 Node_8286A108;
struct Node_8286A108 {
    int unk0;
    Node_8286A108 *next;
    char pad8[0x14];
    void *handle;
};

typedef struct Owner_8286A108 {
    char pad0[0x424];
    Node_8286A108 *head;
} Owner_8286A108;

typedef struct Iter_8286A108 {
    Node_8286A108 *cur;
    Node_8286A108 *prev;
} Iter_8286A108;

extern void fn_82A1E658(void *handle);
extern void fn_82877520(void *p);

static __forceinline Iter_8286A108 erase(Owner_8286A108 *list, Iter_8286A108 it)
{
    Iter_8286A108 next;
    next.cur = it.cur->next;
    next.prev = it.prev;
    if (it.cur == list->head) {
        list->head = it.cur->next;
    } else {
        it.prev->next = it.cur->next;
    }
    return next;
}

void fn_8286A108(Owner_8286A108 *self)
{
    Iter_8286A108 it;
    Node_8286A108 *node;

    it.cur = self->head;
    it.prev = 0;
    while (it.cur != 0) {
        node = it.cur;
        it = erase(self, it);
        fn_82A1E658(node->handle);
        fn_82877520(node);
    }
}
