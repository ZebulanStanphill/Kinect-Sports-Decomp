typedef struct Rect_82717FE8 {
    float left;
    float top;
    float right;
    float bottom;
} Rect_82717FE8;

typedef struct Xform_82717FE8 {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
} Xform_82717FE8;

typedef struct Node_82717FE8 Node_82717FE8;

typedef struct NodeVt_82717FE8 {
    void *slots[11];
    Rect_82717FE8 *(*getBounds)(Rect_82717FE8 *result, Node_82717FE8 *self, Xform_82717FE8 *xform); /* 0x2c */
} NodeVt_82717FE8;

struct Node_82717FE8 {
    NodeVt_82717FE8 *vt;
    char pad4[0x40];
    Xform_82717FE8 xform; /* 0x44 */
};

typedef struct Owner_82717FE8 {
    char pad0[0xa4];
    Node_82717FE8 **children; /* 0xa4 */
} Owner_82717FE8;

extern void fn_8268CC00(Xform_82717FE8 *xform);
extern void fn_8268CEC0(Xform_82717FE8 *xform, Xform_82717FE8 *other);

Rect_82717FE8 fn_82717FE8(Owner_82717FE8 *self, Xform_82717FE8 *parent, int index)
{
    Xform_82717FE8 xform;
    Rect_82717FE8 bounds;
    Rect_82717FE8 out;
    Rect_82717FE8 *result;
    Node_82717FE8 *child;

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
