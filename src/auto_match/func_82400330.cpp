// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind8<_Callable_pmf<void
// (FootballController::* const)(unsigned int, TeamId::Enum, __vector4, const PassTarget &, const
// PassParams &, ForceAction::Enum, const ReplanAIStateForPassParams &), FootballController, 0>,
// FootballController *, unsigned int, TeamId::Enum, __vector4, PassTarget, PassParams,
// ForceAction::Enum, ReplanAIStateForPassParams> >: returns typeid of the functor. It keeps its
// fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
            struct PassTarget {};
            struct PassParams {};
            namespace ForceAction {
                enum Enum {};
            }
            struct ReplanAIStateForPassParams {};
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

typedef std::tr1::_Bind<void, void, std::tr1::_Bind8<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(unsigned int, olympus::sport::TeamId::Enum, __vector4, const olympus::sport::football::PassTarget &, const olympus::sport::football::PassParams &, olympus::sport::football::ForceAction::Enum, const olympus::sport::football::ReplanAIStateForPassParams &), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, unsigned int, olympus::sport::TeamId::Enum, __vector4, olympus::sport::football::PassTarget, olympus::sport::football::PassParams, olympus::sport::football::ForceAction::Enum, olympus::sport::football::ReplanAIStateForPassParams> > Functor;

extern "C" const type_info &fn_82400330(void)
{
    return typeid(Functor);
}
