typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Vec_822B6908 {
    __vector4 v;
    __forceinline Vec_822B6908() {}
    __forceinline Vec_822B6908(__vector4 x) : v(x) {}
};

typedef struct Node_822B6908 { char pad[0x144]; char xform[4]; } Node_822B6908;
typedef struct Target_822B6908 Target_822B6908;
typedef struct TargetVt_822B6908 {
    void *f0;
    void *f4;
    Node_822B6908 *(*GetNode)(Target_822B6908 *self);
} TargetVt_822B6908;
struct Target_822B6908 { TargetVt_822B6908 *vt; };

typedef struct Obj_822B6908 {
    char pad0[0x80];
    __vector4 pos;              /* 0x80 */
    char pad90[0xd8];
    Target_822B6908 *target;    /* 0x168 */
    int detached;               /* 0x16c */
} Obj_822B6908;

extern "C" unsigned char fn_8288B760(Target_822B6908 *t);
extern "C" Vec_822B6908 fn_822BD278(void *xform);

extern "C" Vec_822B6908 fn_822B6908(Obj_822B6908 *o)
{
    int detached;
    if (o->target != 0) {
        detached = fn_8288B760(o->target);
    } else {
        detached = o->detached;
    }
    if (detached == 0) {
        Target_822B6908 *t = o->target;
        if (t != 0) {
            return fn_822BD278(t->vt->GetNode(t)->xform);
        }
    }
    return Vec_822B6908(o->pos);
}
