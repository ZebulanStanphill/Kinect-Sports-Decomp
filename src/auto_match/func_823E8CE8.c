typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Self_823E8CE8 {
    char pad0[4];
    void *world;            /* 0x04 */
} Self_823E8CE8;

typedef struct Body_823E8CE8 {
    char pad0[0x130];
    __vector4 pos;          /* 0x130 */
    char pad140[0x20];
    int enabled;            /* 0x160 */
} Body_823E8CE8;

typedef struct Other_823E8CE8 {
    char pad0[0x24];
    Body_823E8CE8 *body;    /* 0x24 */
    char pad28[4];
    int id;                 /* 0x2c */
    char pad30[0x50];
    __vector4 pos;          /* 0x80 */
} Other_823E8CE8;

extern unsigned int fn_823E8AC0(void *world, int id, __vector4 pos, const __vector4 *points,
                                const unsigned int *keys, unsigned int count);

unsigned int fn_823E8CE8(Self_823E8CE8 *self, Other_823E8CE8 *other, const __vector4 *points,
                         const unsigned int *keys, unsigned int count)
{
    __vector4 pos;
    Body_823E8CE8 *body = other->body;
    if (body != 0 && body->enabled != 0)
        pos = body->pos;
    else
        pos = other->pos;
    return fn_823E8AC0(self->world, other->id, pos, points, keys, count);
}
