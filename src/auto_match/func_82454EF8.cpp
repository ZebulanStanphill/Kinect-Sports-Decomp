// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (AthleticsEventThrow::* const)(const NetworkSpectatorEndThrowEvent &), AthleticsEventThrow, 0>,
// AthleticsEventThrow *, _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace athletics {
            class AthleticsEventThrow {};
            class NetworkSpectatorEndThrowEvent {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::athletics::AthleticsEventThrow::* const)(const olympus::sport::athletics::NetworkSpectatorEndThrowEvent &), olympus::sport::athletics::AthleticsEventThrow, 0>, olympus::sport::athletics::AthleticsEventThrow *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_82454EF8(void)
{
    return typeid(Functor);
}
