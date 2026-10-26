// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind4<_Callable_pmf<void
// (SpectatorManager::* const)(const NW::Network_c &, const unsigned __int64 &,
// shared_ptr<netmemCMem> &), SpectatorManager, 0>, SpectatorManager *, _Ph<1>, _Ph<2>, _Ph<3> > >:
// returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>
#include <memory>

namespace olympus {
    namespace sport {
        namespace network {
            class SpectatorManager {};
        }
    }
}
namespace NW {
    class Network_c {};
}
class netmemCMem {};

typedef std::tr1::_Bind<void, void, std::tr1::_Bind4<std::tr1::_Callable_pmf<void (olympus::sport::network::SpectatorManager::* const)(const NW::Network_c &, const unsigned __int64 &, std::tr1::shared_ptr<netmemCMem> &), olympus::sport::network::SpectatorManager, 0>, olympus::sport::network::SpectatorManager *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3> > > Functor;

extern "C" const type_info &fn_823BA8B0(void)
{
    return typeid(Functor);
}
