// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind8<_Callable_pmf<void
// (FootballController::* const)(unsigned int, TeamId::Enum, bool, ShootingScenario::Enum,
// KickProfile::Enum, bool, float), FootballController, 0>, FootballController *, unsigned int,
// TeamId::Enum, bool, ShootingScenario::Enum, KickProfile::Enum, bool, float> >: returns typeid of
// the functor. It keeps its fn_ name: the function's signature, and so its implementation class,
// isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
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

typedef std::tr1::_Bind<void, void, std::tr1::_Bind8<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(unsigned int, olympus::sport::TeamId::Enum, bool, olympus::sport::football::ShootingScenario::Enum, olympus::sport::football::KickProfile::Enum, bool, float), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, unsigned int, olympus::sport::TeamId::Enum, bool, olympus::sport::football::ShootingScenario::Enum, olympus::sport::football::KickProfile::Enum, bool, float> > Functor;

extern "C" const type_info &fn_823D2780(void)
{
    return typeid(Functor);
}
