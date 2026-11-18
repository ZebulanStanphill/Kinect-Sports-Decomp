typedef struct Vec2_8272C748 {
    float x;
    float y;
} Vec2_8272C748;

typedef struct Xform_8272C748 {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
} Xform_8272C748;

typedef struct Node_8272C748 Node_8272C748;
typedef struct State_8272C748 State_8272C748;

typedef struct StateVt_8272C748 {
    void *slots[2];
    int (*getMode)(State_8272C748 *self); /* 0x8 */
} StateVt_8272C748;

struct State_8272C748 {
    StateVt_8272C748 *vt;
};

typedef struct NodeVt_8272C748 {
    void *slots[2];
    unsigned char (*isVisible)(Node_8272C748 *self); /* 0x08 */
    void *slots0c[9];
    unsigned char (*contains)(Node_8272C748 *self, Vec2_8272C748 *point, int deep); /* 0x30 */
} NodeVt_8272C748;

typedef struct Style_8272C748 {
    char pad00[0x50];
    unsigned short flags; /* 0x50 */
} Style_8272C748;

typedef struct Override_8272C748 {
    char pad00[0x68];
    unsigned short flags; /* 0x68 */
} Override_8272C748;

typedef struct Shape_8272C748 {
    char pad00[0x20];
    unsigned char flags; /* 0x20 */
} Shape_8272C748;

typedef struct Context_8272C748 {
    char pad000[0x8];
    Shape_8272C748 *shape; /* 0x008 */
    char pad00c[0x108];
    Override_8272C748 *override; /* 0x114 */
} Context_8272C748;

struct Node_8272C748 {
    NodeVt_8272C748 *vt; /* 0x000 */
    char pad004[0x1c];
    Node_8272C748 *parent; /* 0x020 */
    char pad024[0x20];
    Xform_8272C748 xform; /* 0x044 */
    char pad05c[0x8];
    unsigned short hidden; /* 0x064 */
    char pad066[0x2];
    State_8272C748 state; /* 0x068 */
    char pad06c[0x20];
    unsigned int flagsHigh : 20; /* 0x08c */
    unsigned int disabled : 1;
    unsigned int flagsLow : 11;
    char pad090[0xc];
    Style_8272C748 *style;     /* 0x09c */
    Context_8272C748 *context; /* 0x0a0 */
    char pad0a4[0x24];
    unsigned short shapeFlags; /* 0x0c8 */
};

extern void fn_8268D008(Xform_8272C748 *xform, Vec2_8272C748 *out, Vec2_8272C748 *in);
extern unsigned char fn_826C98F8(Node_8272C748 *node);
extern unsigned char fn_827A1070(Context_8272C748 *context, float x, float y, int flags);

static __forceinline void CopyXform(Xform_8272C748 *dst, const Xform_8272C748 *src)
{
    dst->a = src->a;
    dst->b = src->b;
    dst->c = src->c;
    dst->d = src->d;
    dst->tx = src->tx;
    dst->ty = src->ty;
}

static __forceinline unsigned char IsOpaque(Node_8272C748 *node, Context_8272C748 *context)
{
    if ((int)context->override != 0) {
        return (context->override->flags >> 1) & 1;
    }
    return (node->style->flags >> 5) & 1;
}

Node_8272C748 *fn_8272C748(Node_8272C748 *self, Vec2_8272C748 *point, unsigned char force,
                           Node_8272C748 *exclude)
{
    Xform_8272C748 xform;
    Vec2_8272C748 local;
    Context_8272C748 *context;

    if ((unsigned char)self->disabled) {
        return 0;
    }
    if (!self->vt->isVisible(self) || exclude == self) {
        return 0;
    }
    CopyXform(&xform, &self->xform);
    fn_8268D008(&xform, &local, point);
    if (self->hidden != 0 || !self->vt->contains(self, &local, 1)) {
        return 0;
    }
    if (force || IsOpaque(self, context = self->context) ||
        (!IsOpaque(self, context) && (unsigned char)(self->shapeFlags >> 1) & 1 &&
         (context->shape->flags & 1) && fn_827A1070(context, local.x, local.y, 0))) {
        return self;
    }
    while ((self = self->parent) != 0) {
        if (self->state.vt->getMode(&self->state) != 2) {
            return 0;
        }
        if (fn_826C98F8(self)) {
            if (exclude == 0 || self != exclude) {
                return self;
            }
        }
    }
    return 0;
}
