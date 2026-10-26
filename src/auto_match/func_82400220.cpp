// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind4<_Callable_pmf<void
// (FootballController::* const)(unsigned int, TeamId::Enum, ReplanAIStateForRecievePassParams &),
// FootballController, 0>, FootballController *, unsigned int, TeamId::Enum,
// ReplanAIStateForRecievePassParams> >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
            struct ReplanAIStateForRecievePassParams {};
        }
        namespace TeamId {
            enum Enum {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind4<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(unsigned int, olympus::sport::TeamId::Enum, olympus::sport::football::ReplanAIStateForRecievePassParams &), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, unsigned int, olympus::sport::TeamId::Enum, olympus::sport::football::ReplanAIStateForRecievePassParams> > Functor;

extern "C" const type_info &fn_82400220(void)
{
    return typeid(Functor);
}
