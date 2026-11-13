typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Shape_82D61F30 {
    char pad0[0x20];
    __vector4 vertices[3];   /* 0x20 */
} Shape_82D61F30;

typedef struct Body_82D61F30 {
    const Shape_82D61F30 *shape;   /* 0x00 */
} Body_82D61F30;

typedef struct Input_82D61F30 {
    const Body_82D61F30 *bodyA;    /* 0x00 */
    const Body_82D61F30 *bodyB;    /* 0x04 */
} Input_82D61F30;

typedef struct Entry_82D61F30 {
    char pad0[2];
    unsigned char numContactPoints;   /* 0x02 */
} Entry_82D61F30;

typedef struct Data_82D61F30 {
    unsigned short contactPointId[3];   /* 0x00 */
    unsigned short pad6;
    char cache[0x18];                   /* 0x08 */
} Data_82D61F30;

void fn_82D76368(const __vector4 *vertices, void *cache);

Data_82D61F30 *fn_82D61F30(const Input_82D61F30 *input, Entry_82D61F30 *entry, Data_82D61F30 *data)
{
    const Shape_82D61F30 *shape = input->bodyB->shape;

    entry->numContactPoints = 0;
    data->contactPointId[0] = 0xffff;
    data->contactPointId[1] = 0xffff;
    data->contactPointId[2] = 0xffff;
    fn_82D76368(shape->vertices, data->cache);
    return data + 1;
}
