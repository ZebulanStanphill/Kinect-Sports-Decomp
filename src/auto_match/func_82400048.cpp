// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (FootballController::* const)(FootballState::StateId::Enum), FootballController, 0>,
// FootballController *, FootballState::StateId::Enum> >: returns typeid of the functor. It keeps
// its fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
            namespace FootballState {
                namespace StateId {
                    enum Enum {};
                }
            }
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(olympus::sport::football::FootballState::StateId::Enum), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, olympus::sport::football::FootballState::StateId::Enum> > Functor;

extern "C" const type_info &fn_82400048(void)
{
    return typeid(Functor);
}
