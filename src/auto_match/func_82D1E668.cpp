// hkGeometryProcessing::IFunction<hkVector4, float> scalar deleting destructor.
// IFunction is an interface with no base class (RTTI), so it frees through the
// global operator delete, fn_8265CA20. The function at the end only makes the
// compiler emit the vtable, and with it this function.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkVector4;

struct hkGeometryProcessing {
    template <typename IN, typename OUT>
    class IFunction {
    public:
        static void operator delete(void *p) { fn_8265CA20(p); }
        virtual ~IFunction() {}
        virtual OUT evaluate(const IN &x) const;
    };
};

void emitVtable_82D1E668(hkGeometryProcessing::IFunction<hkVector4, float> *p)
{
    p->hkGeometryProcessing::IFunction<hkVector4, float>::~IFunction();
}
