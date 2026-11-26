// hkGeometryProcessing::IFunction<hkVector4, float> scalar deleting destructor.
// IFunction is an interface with no base class (RTTI), so it frees through the
// global operator delete, fn_8265CA20. The function at the end only makes the
// compiler emit the vtable, and with it this function.
#include "havok/hkGeometryProcessing.h"

class hkVector4;

void emitVtable_82D1E668(hkGeometryProcessing::IFunction<hkVector4, float> *p)
{
    p->hkGeometryProcessing::IFunction<hkVector4, float>::~IFunction();
}
