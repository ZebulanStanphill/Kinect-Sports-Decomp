typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Listeners_823B23B8 Listeners_823B23B8;

typedef struct Obj_823B23B8 {
    char pad00[0x20];
    __vector4 direction; /* 0x20 */
    char pad30[0x11c];
    float speed; /* 0x14c */
    char pad150[0x10];
    float limitB; /* 0x160 */
    char pad164[0x4];
    float limitA; /* 0x168 */
    char pad16c[0x34];
    int active; /* 0x1a0 */
    int moving; /* 0x1a4 */
    char pad1a8[0x8];
    __vector4 startDirection; /* 0x1b0 */
    char pad1c0[0x24];
    Listeners_823B23B8 *listeners; /* 0x1e4 */
    char pad1e8[0xbc];
    int dirty; /* 0x2a4 */
} Obj_823B23B8;

extern float lbl_831C9CE0[0x131];
extern const float lbl_82193E50;

extern void fn_823B3FE0(Listeners_823B23B8 *listeners, int *key);
extern __vector4 fn_8255AE78(__vector4 v, float angle);

void fn_823B23B8(Obj_823B23B8 *self, int keepDirection)
{
    Listeners_823B23B8 *listeners = self->listeners;

    self->active = 1;
    self->dirty = 1;
    self->startDirection = self->direction;
    if ((int)listeners != 0) {
        int key = 1;
        fn_823B3FE0(listeners, &key);
    }
    self->limitA = lbl_831C9CE0[0xf4];
    self->limitB = lbl_831C9CE0[0xf5];
    self->moving = 1;
    self->speed = 0.0f;
    if (keepDirection == 0) {
        __vector4 mask = __VMXGetReg(67);
        __vector4 zero = __VMXGetReg(77);
        __vector4 scale = __vspltw(__lvlx(&lbl_831C9CE0[0xfe], 0), 0);
        __vector4 turned = fn_8255AE78(__vmulfp(self->direction, scale), lbl_82193E50);
        self->direction = __vsel(turned, zero, mask);
    }
}
