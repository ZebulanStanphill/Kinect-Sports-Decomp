// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind4<_Callable_pmf<void
// (FootballBallHitManager::* const)(unsigned int, TeamId::Enum, ReplanAIStateForRecievePassParams
// &), FootballBallHitManager, 0>, FootballBallHitManager *, _Ph<1>, _Ph<2>, _Ph<3> > >: returns
// typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballBallHitManager {};
            struct ReplanAIStateForRecievePassParams {};
        }
        namespace TeamId {
            enum Enum {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind4<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballBallHitManager::* const)(unsigned int, olympus::sport::TeamId::Enum, olympus::sport::football::ReplanAIStateForRecievePassParams &), olympus::sport::football::FootballBallHitManager, 0>, olympus::sport::football::FootballBallHitManager *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3> > > Functor;

extern "C" const type_info &fn_823FE3A8(void)
{
    return typeid(Functor);
}
