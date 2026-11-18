typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Controller_822B6858 Controller_822B6858;

typedef struct ControllerVtbl_822B6858 {
    void *slot0;
    void (*Reset)(Controller_822B6858 *self); /* 0x04 */
    void *slot8;
    void (*Stop)(Controller_822B6858 *self); /* 0x0c */
} ControllerVtbl_822B6858;

struct Controller_822B6858 {
    const ControllerVtbl_822B6858 *vt;
};

typedef struct Motion_822B6858 {
    __vector4 value; /* 0x00 */
    char pad10[0x40 - 0x10];
    float range; /* 0x40 */
    char pad44[4];
    float maxLength; /* 0x48 */
} Motion_822B6858;

typedef struct Mover_822B6858 {
    char pad0[0xa0];
    __vector4 velocity;             /* 0xa0 */
    __vector4 direction;            /* 0xb0 */
    Motion_822B6858 motion;         /* 0xc0 */
    Controller_822B6858 *animation; /* 0x110 */
    Controller_822B6858 *physics;   /* 0x114 */
    void *path;                     /* 0x118 */
} Mover_822B6858;

extern const __vector4 lbl_82196750;

extern void fn_822B8768(void *path);
extern void fn_822C6880(Motion_822B6858 *motion, __vector4 value);
extern __vector4 fn_825613E0(__vector4 value, float minimum, float maximum);
extern void fn_822B7480(Mover_822B6858 *self);

void fn_822B6858(Mover_822B6858 *self)
{
    fn_822B8768(self->path);
    self->physics->vt->Reset(self->physics);
    self->animation->vt->Stop(self->animation);
    fn_822C6880(&self->motion, __VMXGetReg(77));
    self->motion.value = fn_825613E0(__VMXGetReg(77), -self->motion.range, self->motion.range);
    self->velocity = __VMXGetReg(77);
    self->direction = lbl_82196750;
    fn_822B7480(self);
}
