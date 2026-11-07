typedef struct Entry_82A42C48 {
    unsigned int key;
    int value;
} Entry_82A42C48;

typedef struct Node_82A42C48 {
    Entry_82A42C48 *data;
    struct Node_82A42C48 *next;
} Node_82A42C48;

typedef struct Owner_82A42C48 {
    char pad0[0x14];
    char f14[0xe0 - 0x14];
    Node_82A42C48 *list;
} Owner_82A42C48;

extern char lbl_83219D50[];
extern void *fn_82A3FF60(void *pool, int size, int tag, int flags);
extern int fn_82A429A8(int a, int b, int c, int d);
extern unsigned int fn_82A42B30(void *list, Entry_82A42C48 *e);
extern void fn_82A4F4E0(Entry_82A42C48 *e);

static Entry_82A42C48 *NextEntry_82A42C48(Node_82A42C48 **it)
{
    Node_82A42C48 *n = *it;
    if (n != 0) {
        *it = n->next;
        return n->data;
    }
    return 0;
}

static Entry_82A42C48 *CtorEntry_82A42C48(Entry_82A42C48 *p)
{
    p->value = 0x7fffffff;
    p->key = 0;
    return p;
}

Entry_82A42C48 *fn_82A42C48(int param_1, Owner_82A42C48 *param_2, int param_3, int param_4,
                            int param_5)
{
    Node_82A42C48 *it;
    Entry_82A42C48 *e;
    Entry_82A42C48 *m;

    it = param_2->list;
    while (it != 0) {
        e = NextEntry_82A42C48(&it);
        if (e->key == 0) {
            if (e->value == 0x7fffffff)
                e->value = fn_82A429A8(param_1, param_3, param_4, param_5);
            if (e->value != 0x7fffffff)
                return e;
            break;
        }
    }
    m = (Entry_82A42C48 *)fn_82A3FF60(lbl_83219D50, 8, 0x20970003, 0);
    e = m ? CtorEntry_82A42C48(m) : 0;
    if (e != 0) {
        if (fn_82A42B30(param_2->f14, e) == 0) {
            fn_82A4F4E0(e);
            e = 0;
        } else {
            e->value = fn_82A429A8(param_1, param_3, param_4, param_5);
        }
    }
    return e;
}
