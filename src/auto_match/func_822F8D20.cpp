// _Target_type of the std::tr1::function wrapping a _Bind<float, float, _Bind3<_Callable_pmf<float
// (WaitingToHitMindState::* const)(__vector4, __vector4) const, WaitingToHitMindState, 0>,
// WaitingToHitMindState *, _Ph<1>, _Ph<2> > >: returns typeid of the functor. It keeps its fn_
// name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace tabletennis {
            class WaitingToHitMindState {};
        }
    }
}
// The XDK's VMX vector type.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef std::tr1::_Bind<float, float, std::tr1::_Bind3<std::tr1::_Callable_pmf<float (olympus::sport::tabletennis::WaitingToHitMindState::* const)(__vector4, __vector4) const, olympus::sport::tabletennis::WaitingToHitMindState, 0>, olympus::sport::tabletennis::WaitingToHitMindState *, std::tr1::_Ph<1>, std::tr1::_Ph<2> > > Functor;

extern "C" const type_info &fn_822F8D20(void)
{
    return typeid(Functor);
}
