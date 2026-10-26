// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (ServeHitMindState::* const)(const EventData &), ServeHitMindState, 0>, ServeHitMindState *,
// _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the function's signature, and
// so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace tabletennis {
            class ServeHitMindState {};
        }
    }
    namespace animation {
        struct EventData {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::tabletennis::ServeHitMindState::* const)(const olympus::animation::EventData &), olympus::sport::tabletennis::ServeHitMindState, 0>, olympus::sport::tabletennis::ServeHitMindState *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_822F0C90(void)
{
    return typeid(Functor);
}
