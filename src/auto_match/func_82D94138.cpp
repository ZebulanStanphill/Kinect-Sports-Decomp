#include "havok/hkTransform.h"
#include "havok/hkAabb.h"

class hkpPhantom
{
  public:
    virtual void slot00();
    virtual void slot04();
    virtual void slot08();
    virtual void slot0c();
    virtual void slot10();
    virtual int getType() const;

    char m_pad04[0xac];
};

class hkpAabbPhantom : public hkpPhantom
{
  public:
    hkAabb m_aabb; // +0xb0
};

class hkpShapePhantom : public hkpPhantom
{
  public:
    hkTransform m_transform; // +0xb0
};

extern "C" void fn_82CE68B8(hkTransform *self, const hkTransform *transform);
extern "C" void fn_82D8CD68(hkpAabbPhantom *self, const hkAabb *aabb);
extern "C" void fn_82D99E00(hkpShapePhantom *self, const hkTransform &transform);

extern "C" void fn_82D94138(hkpPhantom *phantom, const hkTransform *transform)
{
    switch (phantom->getType()) {
    case 0: {
        hkpAabbPhantom *aabbPhantom = static_cast<hkpAabbPhantom *>(phantom);
        hkAabb aabb = aabbPhantom->m_aabb;
        aabb.m_min.add4(transform->m_translation);
        aabb.m_max.add4(transform->m_translation);
        fn_82D8CD68(aabbPhantom, &aabb);
        break;
    }
    case 1:
    case 2: {
        hkpShapePhantom *shapePhantom = static_cast<hkpShapePhantom *>(phantom);
        hkTransform t;
        t = shapePhantom->m_transform;
        fn_82CE68B8(&t, transform);
        fn_82D99E00(shapePhantom, t);
        break;
    }
    }
}
