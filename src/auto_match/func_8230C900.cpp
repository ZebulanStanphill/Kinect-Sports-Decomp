// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (SportsmanMindState_Football_KickOff::* const)(const EventData &),
// SportsmanMindState_Football_KickOff, 0>, SportsmanMindState_Football_KickOff *, _Ph<1> > >:
// returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class SportsmanMindState_Football_KickOff {};
        }
    }
    namespace animation {
        struct EventData {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::football::SportsmanMindState_Football_KickOff::* const)(const olympus::animation::EventData &), olympus::sport::football::SportsmanMindState_Football_KickOff, 0>, olympus::sport::football::SportsmanMindState_Football_KickOff *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_8230C900(void)
{
    return typeid(Functor);
}
