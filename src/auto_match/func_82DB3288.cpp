// hkpKdTreeWorldManager::castRay (vtable slot 7; keeps its fn_ name): casts a ray through the
// world's kd-tree with an hkpKdTreeCollidableRaycaster built on the stack.
// The two filter members are the hkpRayCollidableFilter and hkpRayShapeCollectionFilter bases of the
// collision filter: each conversion tests the filter pointer (two if/else statements on the same
// condition); the compiler threads them into one branch and merges the last store of both arms, which
// puts the null arm after the return.
#include "havok/hkpCollisionFilter.h"
#include "havok/hkpKdTreeCollidableRaycaster.h"
#include "havok/hkpWorldRayCastInput.h"

extern "C" void fn_83084210(void *result, void *tree, const void *from, const void *to,
                            hkKdTreeCastCollector *collector);

struct hkpKdTreeWorldManager {
    void *m_vtable;
    char m_pad04[0xc];
    void *m_tree;             // +0x10
};

extern "C" void fn_82DB3288(hkpKdTreeWorldManager *self, const hkpWorldRayCastInput &input,
                            const hkpCollisionFilter *filter, hkpWorldRayCastOutput &output)
{
    hkpKdTreeCollidableRaycaster raycaster;
    raycaster.m_output = &output;
    raycaster.m_input = &input;
    raycaster.m_collector = HK_NULL;
    raycaster.m_filter = filter;
    raycaster.m_shapeCollectionFilter = filter;
    __declspec(align(16)) char result[16];
    fn_83084210(result, self->m_tree, &input.m_from, &input.m_to, &raycaster);
}
