// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (FootballController::* const)(const ReplanAIStateForCornerParams &), FootballController, 0>,
// FootballController *, ReplanAIStateForCornerParams> >: returns typeid of the functor. It keeps
// its fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
            struct ReplanAIStateForCornerParams {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(const olympus::sport::football::ReplanAIStateForCornerParams &), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, olympus::sport::football::ReplanAIStateForCornerParams> > Functor;

extern "C" const type_info &fn_823D22C0(void)
{
    return typeid(Functor);
}
