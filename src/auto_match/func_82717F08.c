typedef struct Rect_82717F08 {
    float left;
    float top;
    float right;
    float bottom;
} Rect_82717F08;

typedef struct Xform_82717F08 {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
} Xform_82717F08;

typedef struct Node_82717F08 Node_82717F08;

typedef struct NodeVt_82717F08 {
    void *slots[10];
    Rect_82717F08 *(*getBounds)(Rect_82717F08 *result, Node_82717F08 *self, Xform_82717F08 *xform); /* 0x28 */
} NodeVt_82717F08;

struct Node_82717F08 {
    NodeVt_82717F08 *vt;
    char pad4[0x40];
    Xform_82717F08 xform; /* 0x44 */
};

typedef struct Owner_82717F08 {
    char pad0[0xa4];
    Node_82717F08 **children; /* 0xa4 */
} Owner_82717F08;

extern void fn_8268CC00(Xform_82717F08 *xform);
extern void fn_8268CEC0(Xform_82717F08 *xform, Xform_82717F08 *other);

Rect_82717F08 fn_82717F08(Owner_82717F08 *self, Xform_82717F08 *parent, int index)
{
    Xform_82717F08 xform;
    Rect_82717F08 bounds;
    Rect_82717F08 out;
    Rect_82717F08 *result;
    Node_82717F08 *child;

    out.left = 0.0f;
    out.top = 0.0f;
    out.right = 0.0f;
    out.bottom = 0.0f;
    fn_8268CC00(&xform);
    if ((int)self->children[index] != 0) {
        xform.a = parent->a;
        xform.b = parent->b;
        xform.c = parent->c;
        xform.d = parent->d;
        xform.tx = parent->tx;
        xform.ty = parent->ty;
        fn_8268CEC0(&xform, &self->children[index]->xform);
        child = self->children[index];
        result = child->vt->getBounds(&bounds, child, &xform);
        out.left = result->left;
        out.top = result->top;
        out.right = result->right;
        out.bottom = result->bottom;
    }
    return out;
}
