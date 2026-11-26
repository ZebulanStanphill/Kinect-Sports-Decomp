#include "havok/hkAabb.h"
#include "havok/hkpRemoveTerminalsMoppModifier.h"
class hkpShapeBuffer { public: __declspec(align(16)) char data[512]; };
extern "C" { extern hkTransform lbl_8323B1D0; void fn_82DCDF98(const hkpMoppCode*,const hkAabb&, hkpMoppModifier*); }
hkpRemoveTerminalsMoppModifier::hkpRemoveTerminalsMoppModifier(const hkpMoppCode* code,const hkpShapeContainer* container,const hkArray<hkpShapeKey>& keys) {
    if (keys.getSize()!=0) {
        hkAabb aabb;
        hkpShapeBuffer buffer;
        const hkpShape* child=container->getChildShape(keys[0],buffer);
        child->getAabb(lbl_8323B1D0,0.0f,aabb);
        for (int i=1;i<keys.getSize();++i) {
            hkAabb next;
            hkpShapeKey key=keys[i];
            child=container->getChildShape(key,buffer);
            child->getAabb(lbl_8323B1D0,0.0f,next);
            aabb.m_min.m_quad=__vminfp(aabb.m_min.m_quad,next.m_min.m_quad);
            aabb.m_max.m_quad=__vmaxfp(aabb.m_max.m_quad,next.m_max.m_quad);
        }
        m_tempShapesToRemove=&keys;
        fn_82DCDF98(code,aabb,this);
        m_tempShapesToRemove=0;
    }
}
