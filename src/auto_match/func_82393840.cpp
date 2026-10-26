// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (BallHitManager::* const)(ShotParams &), BallHitManager, 0>, BallHitManager *, _Ph<1> > >:
// returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace volleyball {
            namespace network {
                class BallHitManager {};
                struct ShotParams {};
            }
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::volleyball::network::BallHitManager::* const)(olympus::sport::volleyball::network::ShotParams &), olympus::sport::volleyball::network::BallHitManager, 0>, olympus::sport::volleyball::network::BallHitManager *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_82393840(void)
{
    return typeid(Functor);
}
