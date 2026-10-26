// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind1<_Callable_pmf<void
// (FootballBallHitManager::* const)(void), FootballBallHitManager, 0>, FootballBallHitManager *>
// >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballBallHitManager {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind1<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballBallHitManager::* const)(void), olympus::sport::football::FootballBallHitManager, 0>, olympus::sport::football::FootballBallHitManager *> > Functor;

extern "C" const type_info &fn_823FFDD8(void)
{
    return typeid(Functor);
}
