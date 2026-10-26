// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind8<_Callable_pmf<void
// (FootballBallHitManager::* const)(unsigned int, TeamId::Enum, bool, ShootingScenario::Enum,
// KickProfile::Enum, bool, float), FootballBallHitManager, 0>, FootballBallHitManager *, _Ph<1>,
// _Ph<2>, _Ph<3>, _Ph<4>, _Ph<5>, _Ph<6>, _Ph<7> > >: returns typeid of the functor. It keeps its
// fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballBallHitManager {};
            namespace ShootingScenario {
                enum Enum {};
            }
            namespace KickProfile {
                enum Enum {};
            }
        }
        namespace TeamId {
            enum Enum {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind8<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballBallHitManager::* const)(unsigned int, olympus::sport::TeamId::Enum, bool, olympus::sport::football::ShootingScenario::Enum, olympus::sport::football::KickProfile::Enum, bool, float), olympus::sport::football::FootballBallHitManager, 0>, olympus::sport::football::FootballBallHitManager *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3>, std::tr1::_Ph<4>, std::tr1::_Ph<5>, std::tr1::_Ph<6>, std::tr1::_Ph<7> > > Functor;

extern "C" const type_info &fn_823FF5C0(void)
{
    return typeid(Functor);
}
