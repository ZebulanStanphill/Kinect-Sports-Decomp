typedef struct ListNode_82A50DA8 {
    struct Item_82A50DA8 *data;
    struct ListNode_82A50DA8 *next;
} ListNode_82A50DA8;

typedef struct Item_82A50DA8 {
    int pad0;
    int pad4;
    int handle;
} Item_82A50DA8;

typedef struct Iface_82A50DA8 Iface_82A50DA8;

typedef struct IfaceVtbl_82A50DA8 {
    void *slots[18];
    int (*f48)(Iface_82A50DA8 *self, unsigned int arg);
} IfaceVtbl_82A50DA8;

struct Iface_82A50DA8 {
    IfaceVtbl_82A50DA8 *vt;
};

typedef struct Owner_82A50DA8 {
    char pad[0xb0];
    Iface_82A50DA8 *iface;
} Owner_82A50DA8;

typedef struct Self_82A50DA8 {
    char pad[0x20];
    ListNode_82A50DA8 *head;
    char pad24[0xc];
    Owner_82A50DA8 *owner;
} Self_82A50DA8;

extern int fn_82A43F70(int handle, int a, int b, unsigned int c);

int fn_82A50DA8(Self_82A50DA8 *self, int a, int b, unsigned int id)
{
    int result;
    unsigned int c;
    ListNode_82A50DA8 *it;
    ListNode_82A50DA8 *n;
    Item_82A50DA8 *item;
    Iface_82A50DA8 *iface;

    result = 0;
    if (id == 0) {
        c = 0x1337f001;
    } else {
        c = id;
    }
    it = self->head;
    while (it != 0) {
        n = it;
        if (n != 0) {
            it = n->next;
            item = n->data;
        } else {
            item = 0;
        }
        fn_82A43F70(item->handle, a, b, c);
    }
    if (id == 0) {
        iface = self->owner->iface;
        result = iface->vt->f48(iface, c);
    }
    return result;
}
