// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (SpectatorManager::* const)(const unsigned __int64 &, shared_ptr<netmemCMem> &),
// SpectatorManager, 0>, SpectatorManager *, _Ph<1>, _Ph<2> > >: returns typeid of the functor. It
// keeps its fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>
#include <memory>

namespace olympus {
    namespace sport {
        namespace network {
            class SpectatorManager {};
        }
    }
}
class netmemCMem {};

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (olympus::sport::network::SpectatorManager::* const)(const unsigned __int64 &, std::tr1::shared_ptr<netmemCMem> &), olympus::sport::network::SpectatorManager, 0>, olympus::sport::network::SpectatorManager *, std::tr1::_Ph<1>, std::tr1::_Ph<2> > > Functor;

extern "C" const type_info &fn_823BA9F0(void)
{
    return typeid(Functor);
}
