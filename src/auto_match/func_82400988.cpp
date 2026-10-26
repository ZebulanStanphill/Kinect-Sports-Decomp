// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind7<_Callable_pmf<void
// (FootballController::* const)(__vector4, TackleOutcomeParams &, bool, bool, const
// ReplanAIStateForRecoverBallParams &, BallActionSource::Enum), FootballController, 0>,
// FootballController *, __vector4, TackleOutcomeParams, bool, bool,
// ReplanAIStateForRecoverBallParams, BallActionSource::Enum> >: returns typeid of the functor. It
// keeps its fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
            struct TackleOutcomeParams {};
            struct ReplanAIStateForRecoverBallParams {};
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

typedef std::tr1::_Bind<void, void, std::tr1::_Bind7<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(__vector4, olympus::sport::football::TackleOutcomeParams &, bool, bool, const olympus::sport::football::ReplanAIStateForRecoverBallParams &, olympus::sport::football::BallActionSource::Enum), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, __vector4, olympus::sport::football::TackleOutcomeParams, bool, bool, olympus::sport::football::ReplanAIStateForRecoverBallParams, olympus::sport::football::BallActionSource::Enum> > Functor;

extern "C" const type_info &fn_82400988(void)
{
    return typeid(Functor);
}
