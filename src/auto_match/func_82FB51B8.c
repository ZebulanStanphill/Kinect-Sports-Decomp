typedef struct Item Item;
typedef struct {
    void (*dtor)(Item *, int);
} ItemVt;
struct Item {
    ItemVt *vt;
    int pad[6];
    void *res;
    int pad2[11];
    int refs;
};

typedef struct Node {
    struct Node *next;
    Item *item;
} Node;

typedef struct Iface Iface;
typedef struct {
    void *f0;
    void *f1;
    void (*Release)(Iface *);
} IfaceVt;
struct Iface {
    IfaceVt *vt;
};

typedef struct {
    void *vt0;
    void *vt1;
    int pad[2];
    void *vt4;
    int pad5;
    void *vt6;
    int pad7[9];
    void *vt10;
    Iface *iface;
    int pad12[3];
    Node *head;
    int pad16[3];
    unsigned int count;
} Obj;

extern char lbl_8216D824[];
extern char lbl_8216D80C[];
extern char lbl_8216D804[];
extern char lbl_8216CC7C[];
extern char lbl_8216D7FC[];
extern void *lbl_831BC768;

extern void fn_82FA9208(void *p);
extern void fn_82FA5190(void *heap, void *p);
extern void fn_82FF8410(Node **list);
extern void fn_8300C9F8(void **p);
extern void fn_82FABDE0(Obj *p);

void fn_82FB51B8(Obj *o)
{
    Node *n;
    Item *it;
    void *res;
    void *heap;

    o->vt0 = lbl_8216D824;
    o->vt1 = lbl_8216D80C;
    o->vt4 = lbl_8216D804;
    o->vt6 = lbl_8216CC7C;
    o->vt10 = lbl_8216D7FC;
    if (o->count > 0) {
        for (n = o->head; n != 0; n = n->next) {
            it = n->item;
            if (--it->refs == 0) {
                res = it->res;
                it->res = 0;
                if (res != 0)
                    fn_82FA9208(res);
                heap = lbl_831BC768;
                it->vt->dtor(it, 0);
                fn_82FA5190(heap, it);
            }
        }
        fn_82FF8410(&o->head);
    }
    if (o->iface != 0)
        o->iface->vt->Release(o->iface);
    fn_8300C9F8(&o->vt10);
    fn_82FABDE0(o);
}
