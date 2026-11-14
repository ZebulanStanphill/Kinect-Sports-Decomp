typedef struct Node_826FE670 Node_826FE670;
typedef struct NodeVt_826FE670 {
    void *pad[0xcc / 4];
    void (*fcc)(Node_826FE670 *self);
    unsigned char (*fd0)(Node_826FE670 *self, Node_826FE670 *other, int mode);
} NodeVt_826FE670;
struct Node_826FE670 {
    NodeVt_826FE670 *vt;
    int refs;
    char pad8[0x18];
    int m20;
};
typedef struct Tmp_826FE670 { Node_826FE670 *p; int pad4; } Tmp_826FE670;
typedef struct Obj_826FE670 { char pad0[0xad8]; char mad8[8]; } Obj_826FE670;

extern void fn_8267C498(void *p);
extern void fn_8269CEE0(void *out, void *src);
extern void fn_826FD490(Obj_826FE670 *self, Node_826FE670 *node, int mode);

void fn_826FE670(Obj_826FE670 *self, Node_826FE670 *node)
{
    Tmp_826FE670 t;
    Node_826FE670 *cur;

    fn_8269CEE0(&t, self->mad8);
    cur = t.p;
    if (cur != 0) {
        cur->refs = cur->refs + 1;
        fn_8267C498(cur);
    }
    if (cur != node) {
        if (cur != 0 && cur->m20 != 0 && cur->vt->fd0(cur, node, 2) == 0) {
            fn_8267C498(cur);
            return;
        }
        fn_826FD490(self, node, 2);
        if (node != 0) {
            node->vt->fcc(node);
        }
    }
    if (cur != 0) {
        fn_8267C498(cur);
    }
}
