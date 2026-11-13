typedef struct Node_82BC5C58 Node_82BC5C58;

typedef struct List_82BC5C58 {
    int pad0;
    unsigned int count;      /* 0x4 */
    Node_82BC5C58 **data;    /* 0x8 */
} List_82BC5C58;

typedef struct Vtbl_82BC5C58 {
    void *pad0[3];
    unsigned char (*fC)(Node_82BC5C58 *);   /* 0xc */
    void *pad10;
    unsigned char (*f14)(Node_82BC5C58 *);  /* 0x14 */
    void *pad18;
    unsigned char (*f1C)(Node_82BC5C58 *);  /* 0x1c */
    unsigned char (*f20)(Node_82BC5C58 *);  /* 0x20 */
} Vtbl_82BC5C58;

struct Node_82BC5C58 {
    Vtbl_82BC5C58 *vt;          /* 0x0 */
    int pad4[13];
    List_82BC5C58 *list;        /* 0x38 */
    int pad3c[22];
    Node_82BC5C58 *first;       /* 0x94 */
    Node_82BC5C58 *n98;         /* 0x98 */
    Node_82BC5C58 *n9c;         /* 0x9c */
};

Node_82BC5C58 *fn_82BC5C58(Node_82BC5C58 *self)
{
    Node_82BC5C58 *p;
    Node_82BC5C58 **arr;

    p = self->first;
    if (p == 0)
        return self;
    do {
        if (!(p->list->count > 0))
            break;
        if (p->vt->f1C(p))
            break;
        if (p->vt->f20(p))
            break;
        if (p->vt->f14(p)) {
            p = p->n9c;
        } else if (p->vt->fC(p)) {
            p = p->n98;
        } else {
            List_82BC5C58 *l = p->list;
            if (l->count > 0)
                arr = l->data;
            else
                arr = 0;
            p = *arr;
        }
    } while (p != 0);
    return p;
}
