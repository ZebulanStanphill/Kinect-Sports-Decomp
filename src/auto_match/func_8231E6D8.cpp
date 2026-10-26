// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (SportsmanMindState_Football_Shooting::* const)(const EventData &),
// SportsmanMindState_Football_Shooting, 0>, SportsmanMindState_Football_Shooting *, _Ph<1> > >:
// returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class SportsmanMindState_Football_Shooting {};
        }
    }
    namespace animation {
        struct EventData {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::football::SportsmanMindState_Football_Shooting::* const)(const olympus::animation::EventData &), olympus::sport::football::SportsmanMindState_Football_Shooting, 0>, olympus::sport::football::SportsmanMindState_Football_Shooting *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_8231E6D8(void)
{
    return typeid(Functor);
}
