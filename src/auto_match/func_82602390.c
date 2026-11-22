typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Body_82602390 {
    float x; /* 0x000 */
    float y; /* 0x004 */
    float z; /* 0x008 */
    char pad0c[0x70];
    float radius; /* 0x07c */
    char pad80[0x22];
    unsigned short next; /* 0x0a2 */
    char pada4[0x12c];
} Body_82602390;

typedef struct World_82602390 {
    char pad[6];
    short count; /* 0x006 */
    char pad8[0x28];
    __vector4 center;    /* 0x030 */
    __vector4 boundsMin; /* 0x040 */
    __vector4 boundsMax; /* 0x050 */
    char pad60[0x240];
    Body_82602390 bodies[1]; /* 0x2a0 */
} World_82602390;

extern unsigned int lbl_83265A28;

extern int fn_82627340(void *context, Body_82602390 *body, float dt, int *hit, int *kind);
extern void fn_82627DB0(World_82602390 *world, Body_82602390 *body);
extern void fn_82601940(void *context, World_82602390 *world, Body_82602390 *body, int flip);

static __forceinline float Random(unsigned int *seed)
{
    union {
        unsigned int i;
        float f;
    } value;

    *seed = *seed * 0x19660d + 0x3c6ef35f;
    value.i = *seed & 0x7fffff | 0x3f800000;
    return value.f - 1.0f;
}

void fn_82602390(void *context, World_82602390 *world, float dt)
{
    unsigned short i;
    Body_82602390 *body;
    int kind;
    int hit;
    float radius;
    float v;

    world->boundsMin = world->center;
    world->boundsMax = world->center;
    for (i = 0; i < world->count; i++) {
        body = &world->bodies[i];
        if (world->bodies[i].next == 0xfffe) {
            kind = 0;
            hit = 0;
            if (fn_82627340(context, body, dt, &hit, &kind) == 0) {
                fn_82627DB0(world, body);
            } else {
                radius = body->radius;
                v = body->x - radius;
                world->boundsMin.vector4_f32[0] =
                    world->boundsMin.vector4_f32[0] - v >= 0.0f ? v : world->boundsMin.vector4_f32[0];
                v = body->y - radius;
                world->boundsMin.vector4_f32[1] =
                    world->boundsMin.vector4_f32[1] - v >= 0.0f ? v : world->boundsMin.vector4_f32[1];
                v = body->z - radius;
                world->boundsMin.vector4_f32[2] =
                    world->boundsMin.vector4_f32[2] - v >= 0.0f ? v : world->boundsMin.vector4_f32[2];
                v = body->x + radius;
                world->boundsMax.vector4_f32[0] =
                    world->boundsMax.vector4_f32[0] - v >= 0.0f ? world->boundsMax.vector4_f32[0] : v;
                v = body->y + radius;
                world->boundsMax.vector4_f32[1] =
                    world->boundsMax.vector4_f32[1] - v >= 0.0f ? world->boundsMax.vector4_f32[1] : v;
                v = body->z + radius;
                world->boundsMax.vector4_f32[2] =
                    world->boundsMax.vector4_f32[2] - v >= 0.0f ? world->boundsMax.vector4_f32[2] : v;
                if (hit != 0 && kind == 1) {
                    fn_82601940(context, world, body, Random(&lbl_83265A28) < 0.5f);
                }
            }
        }
    }
}
