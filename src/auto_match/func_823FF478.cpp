// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind5<_Callable_pmf<void
// (FootballController::* const)(bool, TeamId::Enum, unsigned int, __vector4), FootballController,
// 0>, FootballController *, _Ph<1>, _Ph<2>, _Ph<3>, _Ph<4> > >: returns typeid of the functor. It
// keeps its fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
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

typedef std::tr1::_Bind<void, void, std::tr1::_Bind5<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(bool, olympus::sport::TeamId::Enum, unsigned int, __vector4), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3>, std::tr1::_Ph<4> > > Functor;

extern "C" const type_info &fn_823FF478(void)
{
    return typeid(Functor);
}
