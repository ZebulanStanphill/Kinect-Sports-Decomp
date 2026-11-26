// The atexit destructor of the static hkStaticClassNameRegistry lbl_8323FDC8.
// Destructors of statically initialized objects, registered with atexit by
// their initializers. The objects keep their lbl_ names (they are data in the
// original), so these functions are written out under their fn_ names as
// explicit destructor calls on the extern "C" objects; a definition of the
// object would duplicate the data symbol.
#include "havok/hkpCollisionAgent.h"
#include "havok/hkStaticClassNameRegistry.h"

class hkpNullAgent : public hkpCollisionAgent {
public:
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
