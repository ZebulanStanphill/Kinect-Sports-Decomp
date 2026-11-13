typedef struct Node_82BC5B70 Node_82BC5B70;

typedef struct Vtbl_82BC5B70 {
    void *f00;
    void *f04;
    void *f08;
    unsigned char (*f0C)(Node_82BC5B70 *self);
    void *f10;
    unsigned char (*f14)(Node_82BC5B70 *self);
    void *f18;
    unsigned char (*f1C)(Node_82BC5B70 *self);
    unsigned char (*f20)(Node_82BC5B70 *self);
} Vtbl_82BC5B70;

typedef struct List_82BC5B70 {
    int f00;
    unsigned int count;
    Node_82BC5B70 **items;
} List_82BC5B70;

struct Node_82BC5B70 {
    Vtbl_82BC5B70 *vt;
    unsigned char pad04[0x34];
    List_82BC5B70 *list;
    unsigned char pad3C[0x98 - 0x3C];
    Node_82BC5B70 *n98;
    Node_82BC5B70 *n9C;
};

typedef struct Owner_82BC5B70 {
    unsigned char pad00[0x90];
    Node_82BC5B70 *root;
} Owner_82BC5B70;

Node_82BC5B70 *fn_82BC5B70(Owner_82BC5B70 *o)
{
    Node_82BC5B70 *p;
    Node_82BC5B70 **e;

    p = o->root;
    while (p != 0 && p->list->count > 0) {
        if (p->vt->f1C(p))
            break;
        if (p->vt->f20(p))
            break;
        if (p->vt->f14(p)) {
            p = p->n9C;
        } else if (p->vt->f0C(p)) {
            p = p->n98;
        } else {
            e = p->list->count > 0 ? p->list->items : 0;
            p = *e;
        }
    }
    return p;
}
