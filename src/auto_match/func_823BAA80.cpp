// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind1<_Callable_pmf<void
// (SpectatorManager::* const)(void), SpectatorManager, 0>, SpectatorManager *> >: returns typeid
// of the functor. It keeps its fn_ name: the function's signature, and so its implementation
// class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace network {
            class SpectatorManager {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind1<std::tr1::_Callable_pmf<void (olympus::sport::network::SpectatorManager::* const)(void), olympus::sport::network::SpectatorManager, 0>, olympus::sport::network::SpectatorManager *> > Functor;

extern "C" const type_info &fn_823BAA80(void)
{
    return typeid(Functor);
}
