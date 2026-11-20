#include "havok/hkTransform.h"

struct Impl_82606440;

typedef struct ImplVt_82606440 {
    void *copy;
    void (*call)(struct Impl_82606440 *self, int id, int arg, void *transform, void *a, void *b, void *c,
                 void *d);
} ImplVt_82606440;

typedef struct Impl_82606440 {
    ImplVt_82606440 *vt;
} Impl_82606440;

typedef struct Function_82606440 {
    int storage[4];
    Impl_82606440 *impl; /* 0x10 */
} Function_82606440;

typedef struct Owner_82606440 {
    char pad0[0x10];
    int id; /* 0x10 */
    char pad14[0x5c];
    Function_82606440 onChange; /* 0x70 */
} Owner_82606440;

typedef struct Pose_82606440 {
    char pad0[0x28];
    float a;              /* 0x28 */
    float b;              /* 0x2c */
    float c[4];           /* 0x30 */
    float d[4];           /* 0x40 */
    char transform[0x40]; /* 0x50 */
} Pose_82606440;

typedef struct Body_82606440 {
    char pad0[0x10];
    hkVector4 offset;   /* 0x10 */
    hkVector4 position; /* 0x20 */
    char pad30[0x15];
    unsigned char state;  /* 0x45 */
    unsigned short flags; /* 0x46 */
    char pad48[0x208];
    Pose_82606440 pose; /* 0x250 */
    char pad2E0[0x1f0];
    char worldTransform[0x40]; /* 0x4d0 */
} Body_82606440;

extern "C" __declspec(noreturn) void fn_82F63108(void);

static __forceinline void Call_82606440(Function_82606440 *f, int id, int arg, void *transform, void *a,
                                        void *b, void *c, void *d)
{
    if (f->impl == 0) {
        fn_82F63108();
    }
    f->impl->vt->call(f->impl, id, arg, transform, a, b, c, d);
}

extern "C" void fn_82606440(Owner_82606440 *owner, Body_82606440 *body, const hkTransform *transform, int arg)
{
    hkVector4 sum;
    Pose_82606440 *pose;

    if ((body->flags & 4) == 0) {
        sum.m_quad = __vaddfp(body->position.m_quad, body->offset.m_quad);
        ((hkVector4 *)body->worldTransform)->setTransformedPos(*transform, sum);
        body->flags |= 4;
    }
    if ((body->flags & 0x80) == 0) {
        pose = &body->pose;
        ((hkVector4 *)pose->transform)->setTransformedPos(*transform, *(const hkVector4 *)pose);
        body->state ^= 2;
        if (body->state & 7) {
            Call_82606440(&owner->onChange, owner->id, arg, pose->transform, &pose->a, &pose->b, pose->c,
                          pose->d);
        }
        body->flags |= 0x80;
    }
}
