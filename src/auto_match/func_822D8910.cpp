// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind2<_Callable_pmf<void
// (SportsmanMoveState_Volleyball_Jump::* const)(const EventData &),
// SportsmanMoveState_Volleyball_Jump, 0>, SportsmanMoveState_Volleyball_Jump *, _Ph<1> > >:
// returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace volleyball {
            class SportsmanMoveState_Volleyball_Jump {};
        }
    }
    namespace animation {
        struct EventData {};
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind2<std::tr1::_Callable_pmf<void (olympus::sport::volleyball::SportsmanMoveState_Volleyball_Jump::* const)(const olympus::animation::EventData &), olympus::sport::volleyball::SportsmanMoveState_Volleyball_Jump, 0>, olympus::sport::volleyball::SportsmanMoveState_Volleyball_Jump *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_822D8910(void)
{
    return typeid(Functor);
}
