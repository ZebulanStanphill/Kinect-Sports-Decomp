typedef struct Node_826FD490 Node_826FD490;
typedef struct NodeVt_826FD490 {
    void *pad[0xc8 / 4];
    void (*fc8)(Node_826FD490 *self, int attached, Node_826FD490 *other, int mode);
} NodeVt_826FD490;
struct Node_826FD490 {
    NodeVt_826FD490 *vt;
    int refs;
    char pad8[0x18];
    int m20;
};
typedef struct Ref_826FD490 { int count; } Ref_826FD490;
typedef struct Tmp_826FD490 { Node_826FD490 *p; int pad4; } Tmp_826FD490;
typedef struct Obj_826FD490 { char pad0[0xad8]; Ref_826FD490 *ref; } Obj_826FD490;
typedef struct Mgr_826FD490 Mgr_826FD490;
typedef struct MgrVt_826FD490 {
    void *pad[0x5c / 4];
    void *(*f5c)(Mgr_826FD490 *self);
} MgrVt_826FD490;
struct Mgr_826FD490 { MgrVt_826FD490 *vt; };

extern void fn_8267BE38(Ref_826FD490 *r);
extern void fn_8267C498(void *p);
extern Ref_826FD490 *fn_8267C5B0(Node_826FD490 *node);
extern void fn_8269CEE0(void *out, void *src);
extern Mgr_826FD490 *fn_826F6FA8(Obj_826FD490 *self, int a);
extern void fn_8271F610(void *a, Node_826FD490 *old, Node_826FD490 *node);

void fn_826FD490(Obj_826FD490 *self, Node_826FD490 *node, int mode)
{
    Tmp_826FD490 t;
    Node_826FD490 *cur;
    Ref_826FD490 **slot = &self->ref;
    Mgr_826FD490 *m;

    fn_8269CEE0(&t, slot);
    cur = t.p;
    if (cur != 0) {
        cur->refs = cur->refs + 1;
        fn_8267C498(cur);
    }
    if (cur != node) {
        if (cur != 0 && cur->m20 != 0) {
            cur->vt->fc8(cur, 0, node, mode);
        }
        if (node != 0) {
            Ref_826FD490 *r = fn_8267C5B0(node);
            Ref_826FD490 *old = *slot;
            if (old != 0 && --old->count == 0) {
                fn_8267BE38(old);
            }
            *slot = r;
        } else {
            Ref_826FD490 *old = *slot;
            if (old != 0 && --old->count == 0) {
                fn_8267BE38(old);
            }
            *slot = 0;
        }
        if (node != 0) {
            node->vt->fc8(node, 1, cur, mode);
        }
        m = fn_826F6FA8(self, 0);
        fn_8271F610(m->vt->f5c(m), cur, node);
    }
    if (cur != 0) {
        fn_8267C498(cur);
    }
}
