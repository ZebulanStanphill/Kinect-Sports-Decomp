typedef struct Vec2_82717DA0 {
    float x;
    float y;
} Vec2_82717DA0;

typedef struct Xform_82717DA0 {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
} Xform_82717DA0;

typedef struct Part_82717DA0 {
    char pad0[0x3c];
    unsigned int kind;
    char pad40[8];
    unsigned char flags;
    char pad49[3];
} Part_82717DA0;

typedef struct Model_82717DA0 {
    char pad0[0x18];
    Part_82717DA0 *parts;
    unsigned int count;
} Model_82717DA0;

typedef struct Node_82717DA0 Node_82717DA0;
typedef struct NodeVt_82717DA0 {
    void *slots[2];
    unsigned char (*isVisible)(Node_82717DA0 *self);
    void *slots2[9];
    unsigned char (*hitTest)(Node_82717DA0 *self, Vec2_82717DA0 *point, int deep);
} NodeVt_82717DA0;
struct Node_82717DA0 {
    NodeVt_82717DA0 *vt;
    char pad4[0x40];
    Xform_82717DA0 xform;
    char pad5c[0x40];
    Model_82717DA0 *model;
    int unka0;
    Node_82717DA0 **children;
    unsigned int childCount;
};

static __forceinline void copyXform_82717DA0(Xform_82717DA0 *dst, const Xform_82717DA0 *src)
{
    dst->a = src->a;
    dst->b = src->b;
    dst->c = src->c;
    dst->d = src->d;
    dst->tx = src->tx;
    dst->ty = src->ty;
}

extern void fn_8268D008(Xform_82717DA0 *xform, Vec2_82717DA0 *out, Vec2_82717DA0 *in);

Node_82717DA0 *fn_82717DA0(Node_82717DA0 *self, Vec2_82717DA0 *point, int unused, Node_82717DA0 *exclude)
{
    Xform_82717DA0 xform;
    Xform_82717DA0 childXform;
    Vec2_82717DA0 local;
    Vec2_82717DA0 childLocal;
    Node_82717DA0 *child;
    unsigned int i;

    if (self->vt->isVisible(self) && exclude != self) {
        copyXform_82717DA0(&xform, &self->xform);
        fn_8268D008(&xform, &local, point);
        for (i = 0; i < self->model->count; i++) {
            Part_82717DA0 *part = &self->model->parts[i];
            if (part->kind != 0x40000 && (part->flags & 1) && i < self->childCount &&
                (child = self->children[i]) != 0) {
                copyXform_82717DA0(&childXform, &child->xform);
                fn_8268D008(&childXform, &childLocal, &local);
                if (child->vt->hitTest(child, &childLocal, 1)) {
                    return self;
                }
            }
        }
    }
    return 0;
}
