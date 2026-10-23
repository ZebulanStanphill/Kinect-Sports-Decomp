#include "havok/hkpShape.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float vector4_f32[4]; unsigned int vector4_u32[4]; } __vector4;
extern "C" { __vector4 __vminfp(__vector4,__vector4); __vector4 __vmaxfp(__vector4,__vector4); }
class hkVector4 { public: __vector4 m_quad; };
class hkAabb { public: hkVector4 m_min,m_max; };
class hkTransform { public: hkVector4 data[4]; };
class hkpShapeBuffer { public: __declspec(align(16)) char data[512]; };
class hkpMoppModifier {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpMoppModifier() {}
    virtual hkBool shouldTerminalBeRemoved(unsigned, const hkpShapeKey*);
    virtual void ModifierFinished();
};
class hkpMoppCode;
class hkpRemoveTerminalsMoppModifier : public hkReferencedObject, public hkpMoppModifier {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpRemoveTerminalsMoppModifier(const hkpMoppCode*,const hkpShapeContainer*,const hkArray<hkpShapeKey>&);
    hkArray<hkUint32> m_removeInfo;
    const hkArray<hkpShapeKey>* m_keys;
};
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
        m_keys=&keys;
        fn_82DCDF98(code,aabb,this);
        m_keys=0;
    }
}
