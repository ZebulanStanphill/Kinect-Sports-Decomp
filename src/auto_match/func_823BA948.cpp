// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (SpectatorManager::* const)(const Restricted::StreamTerminatorEvent &), SpectatorManager, 0>,
// SpectatorManager *, _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace network {
            class SpectatorManager {};
            namespace Restricted {
                class StreamTerminatorEvent {};
            }
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::network::SpectatorManager::* const)(const olympus::sport::network::Restricted::StreamTerminatorEvent &), olympus::sport::network::SpectatorManager, 0>, olympus::sport::network::SpectatorManager *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_823BA948(void)
{
    return typeid(Functor);
}
