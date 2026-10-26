// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (FootballBallHitManager::* const)(const ReplanAIStateForKeeperDeflectionParams &),
// FootballBallHitManager, 0>, FootballBallHitManager *, _Ph<1> > >: returns typeid of the functor.
// It keeps its fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballBallHitManager {};
            struct ReplanAIStateForKeeperDeflectionParams {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballBallHitManager::* const)(const olympus::sport::football::ReplanAIStateForKeeperDeflectionParams &), olympus::sport::football::FootballBallHitManager, 0>, olympus::sport::football::FootballBallHitManager *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_823FF298(void)
{
    return typeid(Functor);
}
