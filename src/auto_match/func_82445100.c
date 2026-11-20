typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __VMXGetReg(int n);

typedef struct Model_82445100 {
    char pad0[0x50];
    __vector4 position; /* 0x50 */
} Model_82445100;

typedef struct Holder_82445100 {
    Model_82445100 *model;
} Holder_82445100;

typedef struct Target_82445100 {
    int a;
    int b;
    int c;
} Target_82445100;

typedef struct Projectile_82445100 {
    char pad0[0x30];
    float gravity; /* 0x30 */
} Projectile_82445100;

typedef struct Self_82445100 {
    int pad0;
    Holder_82445100 *holder; /* 0x04 */
    char pad8[0xc];
    Projectile_82445100 *projectile; /* 0x14 */
} Self_82445100;

extern const float lbl_821CA45C[2];
extern const float lbl_8218E8E8[5];
extern void fn_82444F08(Self_82445100 *self, __vector4 velocity, Target_82445100 target, int mode);

static __forceinline __vector4 GetPosition(Self_82445100 *self)
{
    Model_82445100 *model = self->holder->model;
    if (model != 0)
        return model->position;
    return __VMXGetReg(77);
}

void fn_82445100(Self_82445100 *self, __vector4 destination, Target_82445100 target, float time)
{
    __vector4 velocity;
    __vector4 delta;
    __vector4 position;
    float drop;

    velocity = __VMXGetReg(77);
    position = GetPosition(self);
    delta = __vsubfp(destination, position);
    velocity.vector4_f32[0] = (lbl_821CA45C[1] / time) * delta.vector4_f32[0];
    velocity.vector4_f32[2] = (lbl_821CA45C[1] / time) * delta.vector4_f32[2];
    drop = -(self->projectile->gravity * time);
    velocity.vector4_f32[1] = (lbl_821CA45C[1] / time) * delta.vector4_f32[1] - drop * lbl_8218E8E8[0];
    fn_82444F08(self, velocity, target, 1);
}
