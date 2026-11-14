#include "havok/hkBase.h"

class hkpShape;

class hkpShapeContainer {
public:
    virtual ~hkpShapeContainer();
    virtual int getNumChildShapes() const;
    virtual hkUint32 getFirstKey() const;
    virtual hkUint32 getNextKey(hkUint32 oldKey) const;
    virtual hkUint32 getCollisionFilterInfo(hkUint32 key) const;
};

struct hkpShapeRayCastInput {
    hkUint32 m_fromTo[8];   // hkVector4 m_from, m_to
    hkUint32 m_filterInfo;
};

class hkpGroupFilter;
extern "C" hkBool fn_82D4B3C0(const hkpGroupFilter *self, hkUint32 infoA, hkUint32 infoB);

extern "C" hkBool fn_82D4B450(const char *self, const hkpShapeRayCastInput &aInput, const hkpShape &bShape,
                              const hkpShapeContainer &bContainer, hkUint32 bKey)
{
    hkUint32 infoB = bContainer.getCollisionFilterInfo(bKey);
    return fn_82D4B3C0((const hkpGroupFilter *)(self - 16), aInput.m_filterInfo, infoB);
}
