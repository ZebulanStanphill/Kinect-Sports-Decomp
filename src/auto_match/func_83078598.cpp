// Scene node world matrix (returned through the hidden result pointer): when this node or
// any ancestor changed after the node's cached stamp (+0x164), the world matrix (+0xe0) is
// rebuilt as local (+0xa0) times the parent's world matrix (recursively), or the local
// matrix itself for a root, and the stamp refreshed from the scene (fn_830790A0).

#include "xdk/vectorintrinsics.h"

struct Matrix_83078598 {
    __forceinline Matrix_83078598() {}
    __forceinline Matrix_83078598 &operator=(const Matrix_83078598 &m)
    {
        r[0] = m.r[0];
        r[1] = m.r[1];
        r[2] = m.r[2];
        r[3] = m.r[3];
        return *this;
    }
    __vector4 r[4];
};

typedef struct Node_83078598 {
    char pad0[0x38];
    void *scene;                    /* 0x38 */
    struct Node_83078598 *parent;   /* 0x3c */
    char pad40[0x60];
    Matrix_83078598 local;          /* 0xa0 */
    Matrix_83078598 world;          /* 0xe0 */
    char pad120[0x40];
    int changed;                    /* 0x160 */
    int stamp;                      /* 0x164 */
} Node_83078598;

extern "C" void *memcpy(void *dst, const void *src, unsigned int n);

extern "C" int fn_830790A0(void *scene);

static __forceinline unsigned char IsDirty(Node_83078598 *node)
{
    Node_83078598 *n;
    unsigned char dirty = 0;

    for (n = node; n != 0; n = n->parent) {
        if (n->changed > node->stamp) {
            dirty = 1;
            break;
        }
    }
    return dirty;
}

static __forceinline __vector4 MultiplyRow(__vector4 v, const Matrix_83078598 *m)
{
    __vector4 r;

    r = __vmulfp(__vspltw(v, 0), m->r[0]);
    r = __vmaddfp(__vspltw(v, 1), m->r[1], r);
    r = __vmaddfp(__vspltw(v, 2), m->r[2], r);
    r = __vmaddfp(__vspltw(v, 3), m->r[3], r);
    return r;
}

static __forceinline Matrix_83078598 Multiply(const Matrix_83078598 &m1, const Matrix_83078598 &m2)
{
    Matrix_83078598 result;
    result.r[0] = MultiplyRow(m1.r[0], &m2);
    result.r[1] = MultiplyRow(m1.r[1], &m2);
    result.r[2] = MultiplyRow(m1.r[2], &m2);
    result.r[3] = MultiplyRow(m1.r[3], &m2);
    return result;
}

extern "C" Matrix_83078598 fn_83078598(Node_83078598 *node);

extern "C" Matrix_83078598 fn_83078598(Node_83078598 *node)
{

    if (IsDirty(node)) {
        if (node->parent != 0) {
            node->world = Multiply(node->local, fn_83078598(node->parent));
        } else {
            const Matrix_83078598 *l = &node->local;
            Matrix_83078598 *w = &node->world;

            w->r[0] = l->r[0];
            w->r[1] = l->r[1];
            w->r[2] = l->r[2];
            w->r[3] = l->r[3];
        }
        node->stamp = fn_830790A0(node->scene);
    }
    return node->world;
}
