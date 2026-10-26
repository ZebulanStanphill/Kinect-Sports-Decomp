// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind4<_Callable_pmf<void
// (FootballBallHitManager::* const)(TeamId::Enum, __vector4, ReplanAIStateForSetupGoalKickParams
// &), FootballBallHitManager, 0>, FootballBallHitManager *, _Ph<1>, _Ph<2>, _Ph<3> > >: returns
// typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballBallHitManager {};
            struct ReplanAIStateForSetupGoalKickParams {};
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

typedef std::tr1::_Bind<void, void, std::tr1::_Bind4<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballBallHitManager::* const)(olympus::sport::TeamId::Enum, __vector4, olympus::sport::football::ReplanAIStateForSetupGoalKickParams &), olympus::sport::football::FootballBallHitManager, 0>, olympus::sport::football::FootballBallHitManager *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3> > > Functor;

extern "C" const type_info &fn_823FF658(void)
{
    return typeid(Functor);
}
