// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind1<_Callable_pmf<void
// (FootballController::* const)(void), FootballController, 0>, FootballController *> >: returns
// typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind1<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(void), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *> > Functor;

extern "C" const type_info &fn_823FFE80(void)
{
    return typeid(Functor);
}
