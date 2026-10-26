// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind10<_Callable_pmf<void
// (VolleyballController::* const)(__vector4, __vector4, __vector4, float, unsigned int,
// TeamId::Enum, unsigned int, float, float), VolleyballController, 0>, VolleyballController *,
// _Ph<1>, _Ph<2>, _Ph<3>, _Ph<4>, _Ph<5>, _Ph<6>, _Ph<7>, _Ph<8>, _Ph<9> > >: returns typeid of
// the functor. It keeps its fn_ name: the function's signature, and so its implementation class,
// isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace volleyball {
            class VolleyballController {};
        }
        namespace TeamId {
            enum Enum {};
        }
    }
}
// The XDK's VMX vector type.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef std::tr1::_Bind<void, void, std::tr1::_Bind10<std::tr1::_Callable_pmf<void (olympus::sport::volleyball::VolleyballController::* const)(__vector4, __vector4, __vector4, float, unsigned int, olympus::sport::TeamId::Enum, unsigned int, float, float), olympus::sport::volleyball::VolleyballController, 0>, olympus::sport::volleyball::VolleyballController *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3>, std::tr1::_Ph<4>, std::tr1::_Ph<5>, std::tr1::_Ph<6>, std::tr1::_Ph<7>, std::tr1::_Ph<8>, std::tr1::_Ph<9> > > Functor;

extern "C" const type_info &fn_823838C8(void)
{
    return typeid(Functor);
}
