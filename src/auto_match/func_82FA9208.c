typedef struct Node_82FA9208 Node_82FA9208;

typedef struct NodeVtbl_82FA9208 {
    void (*Destroy)(Node_82FA9208 *self, int flags);
} NodeVtbl_82FA9208;

struct Node_82FA9208 {
    NodeVtbl_82FA9208 *vt;
    int link[2];
    Node_82FA9208 *parent;
    int pad10[6];
    int children;
    int refs;
};
extern int fn_82FA92C0(void *list, void *link);
extern void fn_82FA7508(void *mgr, void *p);
extern void fn_82FA5190(void *heap, void *p);
extern void *lbl_83264230;
extern void *lbl_831BC768;

void fn_82FA9208(Node_82FA9208 *o)
{
    Node_82FA9208 *parent;
    void *heap;

    if (--o->refs == 0) {
        parent = o->parent;
        if (parent != 0) {
            if (fn_82FA92C0(&parent->children, &o->link) == 1)
                fn_82FA9208(parent);
        } else {
            fn_82FA7508(lbl_83264230, o);
        }
        heap = lbl_831BC768;
        o->vt->Destroy(o, 0);
        fn_82FA5190(heap, o);
    }
}
