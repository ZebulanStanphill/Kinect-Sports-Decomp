// Havok action: finds a body (fn_82DF0C68); if factor * body.w >= 1 and there is room, registers it
// (fn_82DF1278), otherwise applies dir * -strength through the body's motion (vtable slot 19).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct Body_82DF1328 Body_82DF1328;
typedef struct Motion_82DF1328 Motion_82DF1328;

typedef struct MotionVtbl_82DF1328 {
    void *slots[19];
    void (*applyImpulse)(Motion_82DF1328 *self, const __vector4 *impulse);   // 0x4c
} MotionVtbl_82DF1328;

struct Motion_82DF1328 {
    const MotionVtbl_82DF1328 *vt;
};

struct Body_82DF1328 {
    char pad000[0xe0];
    Motion_82DF1328 motion;          // 0x0e0
    char pad0e4[0x1a0 - 0xe4];
    __vector4 vector;                // 0x1a0
};

typedef struct Action_82DF1328 {
    char pad00[0x24];
    int count;                       // 0x24
    char pad28[4];
    int capacity;                    // 0x2c
    float factor;                    // 0x30
    char pad34[4];
    float strength;                  // 0x38
} Action_82DF1328;

Body_82DF1328 *fn_82DF0C68(Action_82DF1328 *self, const __vector4 *dir, int arg);
void fn_82DF1278(Action_82DF1328 *self, Body_82DF1328 *body);
void fn_82D89BD8(Body_82DF1328 *body);

static __forceinline float GetW(const __vector4 *v)
{
    float w;

    __stvewx(__vspltw(*v, 3), &w, 0);
    return w;
}

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v;

    v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

void fn_82DF1328(Action_82DF1328 *self, const __vector4 *dir, int arg)
{
    Body_82DF1328 *body;
    __vector4 impulse;

    body = fn_82DF0C68(self, dir, arg);
    if (body != 0) {
        if (self->factor * GetW(&body->vector) >= 1.0f && self->count < self->capacity) {
            fn_82DF1278(self, body);
            return;
        }
        impulse = __vmulfp(*dir, Replicate(-self->strength));
        fn_82D89BD8(body);
        body->motion.vt->applyImpulse(&body->motion, &impulse);
    }
}
