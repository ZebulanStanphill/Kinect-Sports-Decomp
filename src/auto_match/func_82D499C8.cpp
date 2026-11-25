typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" {
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);
}

class hkVector4
{
  public:
    __forceinline void setMin4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vminfp(a.q, b.q);
    }

    __forceinline void setMax4(const hkVector4 &a, const hkVector4 &b)
    {
        q = __vmaxfp(a.q, b.q);
    }

    __vector4 q;
};

class hkTransform;

class hkAabb
{
  public:
    hkVector4 m_min;
    hkVector4 m_max;
};

class hkpShape
{
  public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void getAabb(const hkTransform &localToWorld, float tolerance, hkAabb &out) const;
};

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

    __vector4 minValue = lbl_82138740.q;
    __vector4 maxValue = lbl_82138750.q;
    out.m_max.q = minValue;
    out.m_min.q = maxValue;
    for (unsigned int key = container->getFirstKey(); key != 0xffffffff; key = container->getNextKey(key)) {
        const hkpShape *child = container->getChildShape(key, shapeBuffer);
        hkAabb childAabb;
        child->getAabb(localToWorld, tolerance, childAabb);
        out.m_min.setMin4(out.m_min, childAabb.m_min);
        out.m_max.setMax4(out.m_max, childAabb.m_max);
    }
}
