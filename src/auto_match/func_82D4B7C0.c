typedef struct Result_82D4B7C0 {
    unsigned char failed;
} Result_82D4B7C0;

typedef struct Iface_82D4B7C0 Iface_82D4B7C0;
typedef struct IfaceVt_82D4B7C0 {
    void *slots[4];
    int (*eval)(Iface_82D4B7C0 *self, int arg);
} IfaceVt_82D4B7C0;
struct Iface_82D4B7C0 {
    IfaceVt_82D4B7C0 *vt;
};

typedef struct Item_82D4B7C0 {
    int unk0[3];
    int type;
    Iface_82D4B7C0 eval;
} Item_82D4B7C0;

typedef struct Node_82D4B7C0 Node_82D4B7C0;
struct Node_82D4B7C0 {
    Item_82D4B7C0 *item;
    int arg;
    int unk8;
    Node_82D4B7C0 *next;
    int unk10[3];
    int value;
};

typedef struct Types_82D4B7C0 {
    int *flags;
} Types_82D4B7C0;

extern Result_82D4B7C0 *fn_82D4B3C0(Result_82D4B7C0 *ret, void *owner, int value, int index);
extern Iface_82D4B7C0 *fn_82D535C0(Node_82D4B7C0 *node, void *buf);

static __forceinline Node_82D4B7C0 *last_82D4B7C0(Node_82D4B7C0 *n)
{
    while (n->next != 0) {
        n = n->next;
    }
    return n;
}

Result_82D4B7C0 *fn_82D4B7C0(Result_82D4B7C0 *ret, char *owner, Types_82D4B7C0 *types, Node_82D4B7C0 *list,
                             Node_82D4B7C0 *fallback, Iface_82D4B7C0 *source, int arg)
{
    int index;
    int value;
    int flags;
    Node_82D4B7C0 *prev;
    Node_82D4B7C0 *node;
    char buf[0x200];

    index = source->vt->eval(source, arg);
    if (index == -1) {
        index = last_82D4B7C0(fallback)->value;
    }
    if ((int)list->next == 0) {
        value = last_82D4B7C0(list)->value;
    } else {
        prev = list;
        node = list->next;
        do {
            flags = types->flags[node->item->type + 0x44];
            if ((flags & 0x80) != 0) {
                value = node->item->eval.vt->eval(&node->item->eval, prev->arg);
                goto done;
            }
            if ((flags & 0x100) != 0) {
                Iface_82D4B7C0 *e = fn_82D535C0(node, buf);
                value = e->vt->eval(e, prev->arg);
                goto done;
            }
            if ((flags & 0x400000) != 0) {
                value = last_82D4B7C0(list)->value;
                goto done;
            }
            if ((flags & 0x800000) != 0) {
                ret->failed = 1;
                return ret;
            }
            prev = node;
            node = node->next;
        } while (node != 0);
        value = prev->value;
    }
done:
    return fn_82D4B3C0(ret, owner - 0xc, value, index);
}
