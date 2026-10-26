// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind7<_Callable_pmf<void
// (FootballController::* const)(unsigned int, TeamId::Enum, __vector4, float, const KickParams &,
// int), FootballController, 0>, FootballController *, unsigned int, TeamId::Enum, __vector4,
// float, KickParams, bool> >: returns typeid of the functor. It keeps its fn_ name: the function's
// signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
            struct KickParams {};
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

typedef std::tr1::_Bind<void, void, std::tr1::_Bind7<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(unsigned int, olympus::sport::TeamId::Enum, __vector4, float, const olympus::sport::football::KickParams &, int), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, unsigned int, olympus::sport::TeamId::Enum, __vector4, float, olympus::sport::football::KickParams, bool> > Functor;

extern "C" const type_info &fn_82400538(void)
{
    return typeid(Functor);
}
