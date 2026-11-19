typedef union __declspec(intrin_type) __declspec(align(16)) __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

typedef struct Body_8253E960 {
    char pad0[0x10];
    void *shape; /* 0x10 */
    char pad14[0x2c - 0x14];
    int filterInfo; /* 0x2c */
} Body_8253E960;

typedef struct World_8253E960 {
    char pad0[0x78];
    void *broadPhase; /* 0x78 */
} World_8253E960;

typedef struct Physics_8253E960 {
    char pad0[0x1f8];
    World_8253E960 *world; /* 0x1f8 */
} Physics_8253E960;

typedef struct Self_8253E960 {
    char pad0[0x4c];
    Physics_8253E960 *physics; /* 0x4c */
    char pad50[0x7c0 - 0x50];
    Body_8253E960 *defaultBody; /* 0x7c0 */
} Self_8253E960;

typedef struct Collector_8253E960 {
    void *vt; /* 0x0 */
    char hit; /* 0x4 */
    char pad5[0x18 - 0x5];
    Body_8253E960 *ignore; /* 0x18 */
    int hitBody;           /* 0x1c */
} Collector_8253E960;

typedef struct Transform_8253E960 {
    __vector4 rotation[3]; /* 0x0 */
    __vector4 translation; /* 0x30 */
} Transform_8253E960;

typedef struct Input_8253E960 {
    char pad0[0x1c];
    int filterInfo; /* 0x1c */
    char pad20[0x50 - 0x20];
} Input_8253E960;

extern char lbl_821C40FC[];
extern void fn_82CE6010(Transform_8253E960 *rotation, const __vector4 *quaternion);
extern Input_8253E960 *fn_8253D7A8(Input_8253E960 *input, void *shape, Transform_8253E960 *transform,
                                   int flags);
extern void fn_82D881F0(World_8253E960 *world, Input_8253E960 *input, void *broadPhase,
                        Collector_8253E960 *collector);

unsigned char fn_8253E960(Self_8253E960 *self, Body_8253E960 *body, __vector4 position, __vector4 rotation,
                          int filterInfo)
{
    World_8253E960 *world;
    Collector_8253E960 collector;
    Transform_8253E960 transform;
    Input_8253E960 input;

    if (body == 0) {
        body = self->defaultBody;
    }
    if (body != 0) {
        world = self->physics->world;
        collector.hit = 0;
        collector.vt = lbl_821C40FC;
        collector.ignore = body;
        collector.hitBody = 0;
        transform.translation = position;
        fn_82CE6010(&transform, &rotation);
        fn_8253D7A8(&input, body->shape, &transform, 0);
        if (filterInfo == -1) {
            filterInfo = body->filterInfo;
        }
        input.filterInfo = filterInfo;
        fn_82D881F0(world, &input, world->broadPhase, &collector);
        return collector.hit == 0;
    }
    return 1;
}
