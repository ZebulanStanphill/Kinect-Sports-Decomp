// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (FootballBallHitManager::* const)(TeamId::Enum, unsigned int), FootballBallHitManager, 0>,
// FootballBallHitManager *, _Ph<1>, _Ph<2> > >: returns typeid of the functor. It keeps its fn_
// name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballBallHitManager {};
        }
        namespace TeamId {
            enum Enum {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballBallHitManager::* const)(olympus::sport::TeamId::Enum, unsigned int), olympus::sport::football::FootballBallHitManager, 0>, olympus::sport::football::FootballBallHitManager *, std::tr1::_Ph<1>, std::tr1::_Ph<2> > > Functor;

extern "C" const type_info &fn_823FFC10(void)
{
    return typeid(Functor);
}
