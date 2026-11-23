typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Body_82369900 {
    char pad0[0xa0];
    float width; /* 0xa0 */
    char padA4[0xa8 - 0xa4];
    float depth; /* 0xa8 */
    char padAC[0x280 - 0xac];
    float heightFactor; /* 0x280 */
    char pad284[0x8bc - 0x284];
    float scale; /* 0x8bc */
    char pad8C0[0xbd0 - 0x8c0];
    __vector4 velocity; /* 0xbd0 */
    char padBE0[0xc30 - 0xbe0];
    __vector4 acceleration; /* 0xc30 */
} Body_82369900;

typedef struct Floor_82369900 {
    int unk0;
    float height; /* 0x4 */
} Floor_82369900;

typedef struct Level_82369900 {
    int unk0;
    Floor_82369900 *floor; /* 0x4 */
} Level_82369900;

typedef struct Self_82369900 {
    char pad0[0x1c];
    Level_82369900 *level; /* 0x1c */
} Self_82369900;

extern void fn_824FE498(Body_82369900 *body, __vector4 position);

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

/* Places the body at position, not below the floor, with the given velocity and no acceleration. */
int fn_82369900(Self_82369900 *self, Body_82369900 *body, __vector4 position, __vector4 velocity)
{
    float radius;
    float bottom;

    if (body != 0) {
        radius = Max(body->width * body->scale, body->depth * body->scale);
        bottom = radius * body->heightFactor + self->level->floor->height;
        position.vector4_f32[1] = Max(position.vector4_f32[1], bottom);
        fn_824FE498(body, position);
        body->velocity = velocity;
        body->acceleration = __VMXGetReg(77);
        return 1;
    }
    return 0;
}
