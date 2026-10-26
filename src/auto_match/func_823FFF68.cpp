// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (FootballController::* const)(TeamId::Enum, int), FootballController, 0>, FootballController *,
// TeamId::Enum, unsigned int> >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
        }
        namespace TeamId {
            enum Enum {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(olympus::sport::TeamId::Enum, int), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, olympus::sport::TeamId::Enum, unsigned int> > Functor;

extern "C" const type_info &fn_823FFF68(void)
{
    return typeid(Functor);
}
