// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (FootballController::* const)(bool, ReplanAIStateForRecoverBallParams &), FootballController,
// 0>, FootballController *, bool, ReplanAIStateForRecoverBallParams> >: returns typeid of the
// functor. It keeps its fn_ name: the function's signature, and so its implementation class, isn't
// known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
            struct ReplanAIStateForRecoverBallParams {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(bool, olympus::sport::football::ReplanAIStateForRecoverBallParams &), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, bool, olympus::sport::football::ReplanAIStateForRecoverBallParams> > Functor;

extern "C" const type_info &fn_82400130(void)
{
    return typeid(Functor);
}
