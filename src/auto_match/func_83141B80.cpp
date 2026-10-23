// The atexit destructor of the static hkStaticClassNameRegistry lbl_8323FDC8.
// Destructors of statically initialized objects, registered with atexit by
// their initializers. The objects keep their lbl_ names (they are data in the
// original), so these functions are written out under their fn_ names as
// explicit destructor calls on the extern "C" objects; a definition of the
// object would duplicate the data symbol.
#include "havok/hkBase.h"

class hkClass;
class hkVector4;
class hkpContactMgr;

// hkpCollisionAgent / hkpNullAgent (Physics/Collide/Agent/hkpCollisionAgent.h,
// .../NullAgent/hkpNullAgent.h); the static null agent is lbl_83182AFC.
class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpContactMgr *m_contactMgr;   // +0x8
};

class hkpNullAgent : public hkpCollisionAgent {
public:
};

// hkStaticClassNameRegistry (0x18 bytes); static instances lbl_8323FDA0
// (built by fn_82E16018 in fn_831385C0) and lbl_8323FDC8.
class hkClassNameRegistry : public hkReferencedObject {
public:
    virtual const char *getName() const;
    virtual const hkClass *getClassByName(const char *className) const;
    virtual void getClasses(void *classesOut) const;
};

class hkStaticClassNameRegistry : public hkClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    const char *m_name;               // +0x8
    hkClass *const *m_classes;        // +0xC
    int m_classVersion;               // +0x10
    mutable hkUint32 m_ready;         // +0x14
};

// hkGeometryProcessing::IFunction / ConstFunction
// (Common/Internal/GeometryProcessing/hkGeometryProcessing.h): a root
// interface with a user-written destructor, and a constant function; a
// function-local static ConstFunction<IFunction<hkVector4, float>> (value at
// +0x4) is lbl_8323B6B0, built in fn_82D1DE40.
namespace hkGeometryProcessing {
template <typename IN, typename OUT>
struct IFunction {
    virtual ~IFunction() {}
    virtual OUT operator()(const IN &x) const;   // pure in Havok
};

template <typename BASE>
struct ConstFunction : public BASE {
    float m_value;   // +0x4
};
}

typedef hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4, float> > hkConstVector4ToRealFunction;

extern "C" {
extern hkpNullAgent lbl_83182AFC;
extern hkStaticClassNameRegistry lbl_8323FDA0;
extern hkStaticClassNameRegistry lbl_8323FDC8;
extern hkConstVector4ToRealFunction lbl_8323B6B0;
}

extern "C" void fn_83141B80(void)
{
    lbl_8323FDC8.hkStaticClassNameRegistry::~hkStaticClassNameRegistry();
}
