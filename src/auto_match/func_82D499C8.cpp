#include "havok/hkAabb.h"
#include "havok/hkpShape.h"

struct ShapeBuffer_82D499C8 {
    char data[0x200];
};

class ShapeContainer_82D499C8
{
  public:
    virtual void slot0();
    virtual void slot1();
    virtual unsigned int getFirstKey() const;
    virtual unsigned int getNextKey(unsigned int key) const;
    virtual void slot4();
    virtual const hkpShape *getChildShape(unsigned int key, ShapeBuffer_82D499C8 &buffer) const;
};

struct ShapeCollection_82D499C8 {
    char pad0[0x10];
    ShapeContainer_82D499C8 container; /* 0x10 */
};

extern "C" const hkVector4 lbl_82138740;
extern "C" const hkVector4 lbl_82138750;

extern "C" void fn_82D499C8(const ShapeCollection_82D499C8 *self, const hkTransform &localToWorld,
                            float tolerance, hkAabb &out)
{
    const ShapeContainer_82D499C8 *container = &self->container;
    ShapeBuffer_82D499C8 shapeBuffer;

    __vector4 minValue = lbl_82138740.m_quad;
    __vector4 maxValue = lbl_82138750.m_quad;
    out.m_max.m_quad = minValue;
    out.m_min.m_quad = maxValue;
    for (unsigned int key = container->getFirstKey(); key != 0xffffffff; key = container->getNextKey(key)) {
        const hkpShape *child = container->getChildShape(key, shapeBuffer);
        hkAabb childAabb;
        child->getAabb(localToWorld, tolerance, childAabb);
        out.m_min.setMin4(out.m_min, childAabb.m_min);
        out.m_max.setMax4(out.m_max, childAabb.m_max);
    }
}
