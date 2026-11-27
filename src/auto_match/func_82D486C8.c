#include "xdk/vectorintrinsics.h"

typedef struct Shape_82D486C8 Shape_82D486C8;

typedef struct ShapeTable_82D486C8 {
    void *unused[14];
    void (*support)(Shape_82D486C8 *self, const __vector4 *direction, __vector4 *out);
} ShapeTable_82D486C8;

struct Shape_82D486C8 {
    ShapeTable_82D486C8 *vtable;
};

typedef struct ShapeArray_82D486C8 {
    Shape_82D486C8 **m_data;
    int m_size;
    int m_capacityAndFlags;
} ShapeArray_82D486C8;

typedef struct hkpConvexListShape {
    char padding[0x44];
    ShapeArray_82D486C8 m_childShapes; /* 0x44 */
} hkpConvexListShape;

void fn_82D486C8(hkpConvexListShape *self, const __vector4 *direction, __vector4 *out)
{
    hkpConvexListShape *selfCopy = self;
    int best = 0;
    float maximum = -3.40282e38f;
    int index = 0;
    __vector4 support;
    float distance;
    for (; index < selfCopy->m_childShapes.m_size; ++index) {
        Shape_82D486C8 *shape = selfCopy->m_childShapes.m_data[index];
        shape->vtable->support(shape, direction, &support);
        __stvewx(__vmsum3fp(support, *direction), &distance, 0);
        if (distance > maximum) {
            maximum = distance;
            *out = support;
            best = index;
        }
    }
    {
        unsigned int *identifier = (unsigned int *)&out->vector4_f32[3];
        *identifier = ((*identifier & 0xc0ffffff) + best * 0x100) | 0x3f000000;
    }
}
