// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (TableTennisBallHitManager::* const)(const NetworkTTBallHitServeNotif &),
// TableTennisBallHitManager, 0>, TableTennisBallHitManager *, _Ph<1> > >: returns typeid of the
// functor. It keeps its fn_ name: the function's signature, and so its implementation class, isn't
// known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace tabletennis {
            class TableTennisBallHitManager {};
            struct NetworkTTBallHitServeNotif {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::tabletennis::TableTennisBallHitManager::* const)(const olympus::sport::tabletennis::NetworkTTBallHitServeNotif &), olympus::sport::tabletennis::TableTennisBallHitManager, 0>, olympus::sport::tabletennis::TableTennisBallHitManager *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_823AA0D0(void)
{
    return typeid(Functor);
}
