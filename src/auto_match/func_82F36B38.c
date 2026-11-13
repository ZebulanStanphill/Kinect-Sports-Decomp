extern unsigned char lbl_8214C740[];
typedef struct Ifc_82F36B38 Ifc_82F36B38;
typedef struct IfcVt_82F36B38 {
    int (*qi)(Ifc_82F36B38 *, void *, Ifc_82F36B38 **);
    int (*addref)(Ifc_82F36B38 *);
    int (*release)(Ifc_82F36B38 *);
    int (*s3)(Ifc_82F36B38 *);
    int (*f10)(Ifc_82F36B38 *);
} IfcVt_82F36B38;
struct Ifc_82F36B38 { IfcVt_82F36B38 *vt; };
typedef struct Item_82F36B38 { Ifc_82F36B38 *p; } Item_82F36B38;
typedef struct List_82F36B38 { int v[0x1a]; } List_82F36B38;
typedef struct Items_82F36B38 {
    List_82F36B38 list;  /* 0x0 */
    unsigned int count;  /* 0x68 */
} Items_82F36B38;
typedef struct Self_82F36B38 {
    char pad0[0x5c];
    Items_82F36B38 items;  /* 0x5c */
    char pad1[0x74];
    int f13c;            /* 0x13c */
} Self_82F36B38;

extern void fn_82F35400(List_82F36B38 *list, unsigned int index, Item_82F36B38 **out);
extern void fn_82F37588(List_82F36B38 *list, int arg);

static __forceinline void Items_clear_82F36B38(Items_82F36B38 *w)
{
    fn_82F37588(&w->list, 0);
    w->count = 0;
}

int fn_82F36B38(Self_82F36B38 *self)
{
    unsigned int count = self->items.count;
    unsigned int i;
    Item_82F36B38 *it;
    Ifc_82F36B38 *q;
    for (i = 0; i < count; i++) {
        Ifc_82F36B38 *p;
        fn_82F35400(&self->items.list, i, &it);
        p = it->p;
        if (p->vt->qi(p, lbl_8214C740, &q) >= 0) {
            q->vt->f10(q);
            if (q != 0) {
                q->vt->release(q);
                q = 0;
            }
        }
        p->vt->release(p);
    }
    Items_clear_82F36B38(&self->items);
    self->f13c = 0;
    return 0;
}
