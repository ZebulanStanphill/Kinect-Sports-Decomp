typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* /O1 /QVMXReserve: v77 is the game's reserved zero vector, read with __VMXGetReg. */
__vector4 __VMXGetReg(int n);
float __fsqrts(float);

typedef struct Vec2_8226AB18 {
    float x;
    float y;
} Vec2_8226AB18;

typedef struct Circle_8226AB18 {
    int pad0;
    unsigned char enabled; /* 0x4 */
    char pad5[0x17];
    Vec2_8226AB18 center; /* 0x1c */
    int pad24;
    float radius;   /* 0x28 */
    float strength; /* 0x2c */
    float size;     /* 0x30 */
} Circle_8226AB18;

extern const float lbl_821954B0[0xa28 / 4];
extern const float lbl_82193E2C;
extern float fn_82809950(float x);

int fn_8226AB18(Circle_8226AB18 *self, Vec2_8226AB18 *position, __vector4 *push, __vector4 *other,
                unsigned char *close)
{
    float dx;
    float dy;
    float d;
    float depth;

    *push = __VMXGetReg(77);
    *other = __VMXGetReg(77);
    *close = 0;
    dy = self->center.y - position->y;
    dx = self->center.x - position->x;
    d = __fsqrts(dx * dx + dy * dy) - self->size;
    if (d < 0.0f) {
        if (self->enabled && d <= self->radius * lbl_821954B0[0x288 / 4]) {
            *close = 1;
        }
        if (d > -self->radius) {
            depth = -d;
            push->vector4_f32[2] = fn_82809950(depth / self->radius * lbl_82193E2C) * self->strength;
            return 1;
        }
    }
    return 0;
}
