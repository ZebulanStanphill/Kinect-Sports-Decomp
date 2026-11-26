// The atexit destructor of the function-local static ConstFunction<IFunction<hkVector4, float> > lbl_8323B6B0 (built and registered in fn_82D1DE40): IFunction's user-written destructor stores its vtable.
// Destructors of statically initialized objects, registered with atexit by
// their initializers. The objects keep their lbl_ names (they are data in the
// original), so these functions are written out under their fn_ names as
// explicit destructor calls on the extern "C" objects; a definition of the
// object would duplicate the data symbol.
#include "havok/hkStaticClassNameRegistry.h"
#include "havok/hkpNullAgent.h"
#include "havok/hkGeometryProcessing.h"

// lbl_8323B6B0 is a function-local static hkGeometryProcessing::ConstFunction<IFunction<hkVector4, float> >,
// built in fn_82D1DE40.
typedef hkGeometryProcessing::ConstFunction<hkGeometryProcessing::IFunction<hkVector4, float> > hkConstVector4ToRealFunction;

extern "C" {
extern hkpNullAgent lbl_83182AFC;
extern hkStaticClassNameRegistry lbl_8323FDA0;
extern hkStaticClassNameRegistry lbl_8323FDC8;
extern hkConstVector4ToRealFunction lbl_8323B6B0;
}

extern "C" void fn_83141B38(void)
{
    lbl_8323B6B0.hkConstVector4ToRealFunction::~hkConstVector4ToRealFunction();
}
