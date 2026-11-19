typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Transform_82D45660 {
    __vector4 col[4];
} Transform_82D45660;

typedef struct Aabb_82D45660 {
    __vector4 min; /* 0x00 */
    __vector4 max; /* 0x10 */
} Aabb_82D45660;

typedef struct Node_82D45660 {
    __vector4 origin; /* 0x00 */
    void *points;     /* 0x10 */
    int pointCount;   /* 0x14 */
    char pad18[0x2c];
    unsigned short nodeIndex;      /* 0x44 */
    unsigned short transformIndex; /* 0x46 */
    char pad48[0x8];
} Node_82D45660;

typedef struct Owner_82D45660 {
    char pad00[0x54];
    Transform_82D45660 *transforms; /* 0x54 */
    char pad58[0x20];
    Node_82D45660 *nodes; /* 0x78 */
    char pad7c[0x14];
    float scale; /* 0x90 */
} Owner_82D45660;

void fn_82D44F78(const void *points, const __vector4 *origin, float scale, Aabb_82D45660 *out);
void fn_82CE5040(__vector4 *out, const Transform_82D45660 *t, const __vector4 *v);

void fn_82D45660(Owner_82D45660 *self, Node_82D45660 *node, Aabb_82D45660 *out)
{
    Node_82D45660 *source;
    Transform_82D45660 transform;

    if (node->nodeIndex == 0xffff) {
        fn_82D44F78(&node->points, &node->origin, self->scale, out);
    } else {
        source = &self->nodes[node->nodeIndex];
        fn_82D44F78(&source->points, &source->origin, self->scale, out);
    }
    if (node->transformIndex != 0xffff) {
        const Transform_82D45660 *t = &self->transforms[node->transformIndex];
        __vector4 c0 = t->col[0];
        __vector4 c1 = t->col[1];
        __vector4 c2 = t->col[2];
        __vector4 c3 = t->col[3];

        transform.col[0] = c0;
        transform.col[1] = c1;
        transform.col[2] = c2;
        transform.col[3] = c3;
        fn_82CE5040(&out->max, &transform, &out->max);
        fn_82CE5040(&out->min, &transform, &out->min);
    }
}
