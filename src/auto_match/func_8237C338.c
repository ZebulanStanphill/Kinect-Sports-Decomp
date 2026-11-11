// Mirrors the object's direction along z, re-applies its position, refreshes the part at
// +0xe8 and reports the new facing (z < 0) and target position to the stored callback.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct CallImpl_8237C338 CallImpl_8237C338;
typedef struct CallImplVtbl_8237C338 {
    void *copy;
    void (*call)(CallImpl_8237C338 *self, int facingBack, __vector4 target, int unused);
} CallImplVtbl_8237C338;
struct CallImpl_8237C338 {
    CallImplVtbl_8237C338 *vt;
};

typedef struct Function_8237C338 {      // std::tr1::function
    char space[0x10];
    CallImpl_8237C338 *impl;
} Function_8237C338;

typedef struct Self_8237C338 {
    char pad0[0x10];
    __vector4 position;         // 0x10
    __vector4 target;           // 0x20
    __vector4 direction;        // 0x30
    char pad40[0x8c];
    int dirty;                  // 0xcc
    char padD0[0x18];
    char part[0x2068];          // 0xe8
    Function_8237C338 onTurn;   // 0x2150
} Self_8237C338;

extern const __vector4 lbl_8329EA10;
extern void fn_8237AFE8(Self_8237C338 *self, __vector4 position);
extern void fn_82379498(Self_8237C338 *self, void *part);
extern __declspec(noreturn) void fn_82F63108(void);

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline void Invoke(Function_8237C338 *f, int facingBack, __vector4 target, int unused)
{
    if (f->impl == 0) {
        fn_82F63108();
    }
    f->impl->vt->call(f->impl, facingBack, target, unused);
}

void fn_8237C338(Self_8237C338 *self)
{
    self->direction = __vsel(self->direction, Replicate(-self->direction.vector4_f32[2]), lbl_8329EA10);
    fn_8237AFE8(self, self->position);
    fn_82379498(self, self->part);
    self->dirty = 1;
    Invoke(&self->onTurn, self->direction.vector4_f32[2] < 0.0f, self->target, 0);
}
