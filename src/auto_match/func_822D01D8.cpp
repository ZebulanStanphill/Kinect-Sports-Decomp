// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (Volleyballer::* const)(const EventData &), Volleyballer, 0>, Volleyballer *, _Ph<1> > >:
// returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace volleyball {
            class Volleyballer {};
        }
    }
    namespace animation {
        struct EventData {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::volleyball::Volleyballer::* const)(const olympus::animation::EventData &), olympus::sport::volleyball::Volleyballer, 0>, olympus::sport::volleyball::Volleyballer *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_822D01D8(void)
{
    return typeid(Functor);
}
