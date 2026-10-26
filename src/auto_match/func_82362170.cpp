// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (Lane::* const)(const NetworkSpectatorBallEvent &), Lane, 0>, Lane *, _Ph<1> > >: returns typeid
// of the functor. It keeps its fn_ name: the function's signature, and so its implementation
// class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace bowling {
            class Lane {};
            class NetworkSpectatorBallEvent {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::bowling::Lane::* const)(const olympus::sport::bowling::NetworkSpectatorBallEvent &), olympus::sport::bowling::Lane, 0>, olympus::sport::bowling::Lane *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_82362170(void)
{
    return typeid(Functor);
}
