#include "havok/hkTransform.h"

typedef struct Aabb_82D45660 {
    hkVector4 min; /* 0x00 */
    hkVector4 max; /* 0x10 */
} Aabb_82D45660;

typedef struct Node_82D45660 {
    hkVector4 origin; /* 0x00 */
    void *points;     /* 0x10 */
    int pointCount;   /* 0x14 */
    char pad18[0x2c];
    unsigned short nodeIndex;      /* 0x44 */
    unsigned short transformIndex; /* 0x46 */
    char pad48[0x8];
} Node_82D45660;

typedef struct Owner_82D45660 {
    char pad00[0x54];
    hkTransform *transforms; /* 0x54 */
    char pad58[0x20];
    Node_82D45660 *nodes; /* 0x78 */
    char pad7c[0x14];
    float scale; /* 0x90 */
} Owner_82D45660;

extern "C" void fn_82D44F78(const void *points, const hkVector4 *origin, float scale, Aabb_82D45660 *out);

extern "C" void fn_82D45660(Owner_82D45660 *self, Node_82D45660 *node, Aabb_82D45660 *out)
{
    Node_82D45660 *source;
    hkTransform transform;

    if (node->nodeIndex == 0xffff) {
        fn_82D44F78(&node->points, &node->origin, self->scale, out);
    } else {
        source = &self->nodes[node->nodeIndex];
        fn_82D44F78(&source->points, &source->origin, self->scale, out);
    }
    if (node->transformIndex != 0xffff) {
        const hkTransform *t = &self->transforms[node->transformIndex];
        hkVector4 c0 = t->m_rotation.m_col[0];
        hkVector4 c1 = t->m_rotation.m_col[1];
        hkVector4 c2 = t->m_rotation.m_col[2];
        hkVector4 c3 = t->m_translation;

        transform.m_rotation.m_col[0] = c0;
        transform.m_rotation.m_col[1] = c1;
        transform.m_rotation.m_col[2] = c2;
        transform.m_translation = c3;
        out->max.setTransformedPos(transform, out->max);
        out->min.setTransformedPos(transform, out->min);
    }
}
