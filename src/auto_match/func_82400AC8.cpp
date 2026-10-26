// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (FootballController::* const)(const ReplanAIStateForKeeperDeflectionParams &),
// FootballController, 0>, FootballController *, ReplanAIStateForKeeperDeflectionParams> >: returns
// typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
            struct ReplanAIStateForKeeperDeflectionParams {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(const olympus::sport::football::ReplanAIStateForKeeperDeflectionParams &), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, olympus::sport::football::ReplanAIStateForKeeperDeflectionParams> > Functor;

extern "C" const type_info &fn_82400AC8(void)
{
    return typeid(Functor);
}
