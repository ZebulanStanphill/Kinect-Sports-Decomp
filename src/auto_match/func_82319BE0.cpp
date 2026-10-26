// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (SportsmanMindState_Football_Pass::* const)(const EventData &),
// SportsmanMindState_Football_Pass, 0>, SportsmanMindState_Football_Pass *, _Ph<1> > >: returns
// typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class SportsmanMindState_Football_Pass {};
        }
    }
    namespace animation {
        struct EventData {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::football::SportsmanMindState_Football_Pass::* const)(const olympus::animation::EventData &), olympus::sport::football::SportsmanMindState_Football_Pass, 0>, olympus::sport::football::SportsmanMindState_Football_Pass *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_82319BE0(void)
{
    return typeid(Functor);
}
