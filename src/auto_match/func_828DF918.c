struct Obj_828DF918;
struct Node_828DF918;

typedef struct {
    struct Obj_828DF918 *px;
    unsigned int rep;
} SP_828DF918;

typedef struct {
    struct Node_828DF918 *px;
    unsigned int rep;
} NodePtr_828DF918;

typedef struct {
    void *(*getData)(struct Obj_828DF918 *self);
    int pad4;
    SP_828DF918 *(*getParent)(SP_828DF918 *ret, struct Obj_828DF918 *self);
} Vt_828DF918;

typedef struct Obj_828DF918 {
    Vt_828DF918 *vt;
} Obj_828DF918;

typedef struct {
    char pad0[0x18];
    void (*addChild)(struct Node_828DF918 *self, NodePtr_828DF918 *child);
} NodeVt_828DF918;

typedef struct Node_828DF918 {
    NodeVt_828DF918 *vt;
    int pad4;
    int pad8;
    int value; /* 0x0c */
} Node_828DF918;

extern void fn_822315A0(unsigned int rep);
extern void fn_828E7140(NodePtr_828DF918 *out, void *data);
extern void fn_828CCCC0(NodePtr_828DF918 *out, Node_828DF918 *px, unsigned int rep, int flag);

NodePtr_828DF918 *fn_828DF918(NodePtr_828DF918 *out, Obj_828DF918 *self, int value)
{
    SP_828DF918 parent;
    SP_828DF918 grandParent;
    NodePtr_828DF918 node;
    NodePtr_828DF918 parentNode;
    unsigned char hasParent;
    Node_828DF918 *px;
    unsigned int rep;

    hasParent = self->vt->getParent(&parent, self)->px != 0;
    if (parent.rep != 0) {
        fn_822315A0(parent.rep);
    }
    if (hasParent) {
        fn_828DF918(&parentNode, self->vt->getParent(&grandParent, self)->px, value);
        if (grandParent.rep != 0) {
            fn_822315A0(grandParent.rep);
        }
        fn_828E7140(&node, self->vt->getData(self));
        node.px->vt->addChild(node.px, &parentNode);
        px = node.px;
        rep = node.rep;
        out->px = 0;
        out->rep = 0;
        fn_828CCCC0(out, px, rep, 0);
        if (rep != 0) {
            fn_822315A0(rep);
        }
        if (parentNode.rep != 0) {
            fn_822315A0(parentNode.rep);
        }
    } else {
        fn_828E7140(&node, self->vt->getData(self));
        px = node.px;
        px->value = value;
        rep = node.rep;
        out->px = 0;
        out->rep = 0;
        fn_828CCCC0(out, px, rep, 0);
        if (rep != 0) {
            fn_822315A0(rep);
        }
    }
    return out;
}
