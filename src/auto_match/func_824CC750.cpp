// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (IncidentalStateMachine::* const)(const EventData &), IncidentalStateMachine, 0>,
// IncidentalStateMachine *, _Ph<1> > >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace incidental {
        class IncidentalStateMachine {};
    }
    namespace animation {
        struct EventData {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::incidental::IncidentalStateMachine::* const)(const olympus::animation::EventData &), olympus::incidental::IncidentalStateMachine, 0>, olympus::incidental::IncidentalStateMachine *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_824CC750(void)
{
    return typeid(Functor);
}
