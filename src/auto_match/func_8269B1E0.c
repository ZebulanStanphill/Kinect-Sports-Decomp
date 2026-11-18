typedef struct Vec2_8269B1E0 {
    float x;
    float y;
} Vec2_8269B1E0;

typedef struct Xform_8269B1E0 {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
} Xform_8269B1E0;

typedef struct Node_8269B1E0 Node_8269B1E0;

typedef struct HitTester_8269B1E0 HitTester_8269B1E0;

typedef struct HitTesterVt_8269B1E0 {
    void *slots[5];
    unsigned char (*hitTest)(HitTester_8269B1E0 *self, Vec2_8269B1E0 *point, int deep,
                             Node_8269B1E0 *node); /* 0x14 */
} HitTesterVt_8269B1E0;

struct HitTester_8269B1E0 {
    HitTesterVt_8269B1E0 *vt;
};

typedef struct State_8269B1E0 State_8269B1E0;

typedef struct StateVt_8269B1E0 {
    void *slots[2];
    int (*getMode)(State_8269B1E0 *self); /* 0x8 */
} StateVt_8269B1E0;

struct State_8269B1E0 {
    StateVt_8269B1E0 *vt;
};

typedef struct NodeVt_8269B1E0 {
    void *slots[2];
    unsigned char (*isVisible)(Node_8269B1E0 *self); /* 0x8 */
} NodeVt_8269B1E0;

struct Node_8269B1E0 {
    NodeVt_8269B1E0 *vt; /* 0x000 */
    char pad004[0x1c];
    Node_8269B1E0 *parent; /* 0x020 */
    char pad024[0x20];
    Xform_8269B1E0 xform; /* 0x044 */
    char pad05c[0x8];
    unsigned short hidden; /* 0x064 */
    char pad066[0x2];

    union {
        HitTester_8269B1E0 *tester; /* 0x068 */
        State_8269B1E0 state;       /* 0x068 */
    } u;

    char pad06c[0x158];
    int target; /* 0x1c4 */
};

static __forceinline void CopyXform(Xform_8269B1E0 *dst, const Xform_8269B1E0 *src)
{
    dst->a = src->a;
    dst->b = src->b;
    dst->c = src->c;
    dst->d = src->d;
    dst->tx = src->tx;
    dst->ty = src->ty;
}

extern void fn_8268D008(Xform_8269B1E0 *xform, Vec2_8269B1E0 *out, Vec2_8269B1E0 *in);
extern unsigned char fn_826C98F8(void *node);

Node_8269B1E0 *fn_8269B1E0(Node_8269B1E0 *self, Vec2_8269B1E0 *point, unsigned char force,
                           Node_8269B1E0 *exclude)
{
    if (self->vt->isVisible(self)) {
        Xform_8269B1E0 xform;
        Vec2_8269B1E0 local;
        CopyXform(&xform, &self->xform);
        fn_8268D008(&xform, &local, point);
        if (self->hidden == 0 && self->u.tester->vt->hitTest(self->u.tester, &local, 1, self)) {
            Node_8269B1E0 *node = self;
            while ((node = node->parent) != 0) {
                if (node->u.state.vt->getMode(&node->u.state) != 2) {
                    return 0;
                }
                if (force || fn_826C98F8(node) || (node->target != 0 && fn_826C98F8((void *)node->target))) {
                    if (exclude == 0 || exclude != node) {
                        return node;
                    }
                }
            }
        }
    }
    return 0;
}
