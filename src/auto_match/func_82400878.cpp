// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind8<_Callable_pmf<void
// (FootballController::* const)(__vector4, TackleOutcomeParams &, ForceAction::Enum, PassParams &,
// PassTarget &, const ReplanAIStateForPassParams &, BallActionSource::Enum), FootballController,
// 0>, FootballController *, __vector4, TackleOutcomeParams, ForceAction::Enum, PassParams,
// PassTarget, ReplanAIStateForPassParams, BallActionSource::Enum> >: returns typeid of the
// functor. It keeps its fn_ name: the function's signature, and so its implementation class, isn't
// known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
            struct TackleOutcomeParams {};
            namespace ForceAction {
                enum Enum {};
            }
            struct PassParams {};
            struct PassTarget {};
            struct ReplanAIStateForPassParams {};
            namespace BallActionSource {
                enum Enum {};
            }
        }
    }
}
// The XDK's VMX vector type.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef std::tr1::_Bind<void, void, std::tr1::_Bind8<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(__vector4, olympus::sport::football::TackleOutcomeParams &, olympus::sport::football::ForceAction::Enum, olympus::sport::football::PassParams &, olympus::sport::football::PassTarget &, const olympus::sport::football::ReplanAIStateForPassParams &, olympus::sport::football::BallActionSource::Enum), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, __vector4, olympus::sport::football::TackleOutcomeParams, olympus::sport::football::ForceAction::Enum, olympus::sport::football::PassParams, olympus::sport::football::PassTarget, olympus::sport::football::ReplanAIStateForPassParams, olympus::sport::football::BallActionSource::Enum> > Functor;

extern "C" const type_info &fn_82400878(void)
{
    return typeid(Functor);
}
