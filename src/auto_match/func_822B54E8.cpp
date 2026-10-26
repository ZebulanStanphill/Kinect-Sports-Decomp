// _Target_type of the std::tr1::function wrapping a _Bind<int, int, _Bind1<_Callable_pmf<int
// (StateMachine<SportsmanMindState, StateId<SportsmanMoveStateMan> >::* const)(void) const,
// StateMachine<SportsmanMindState, StateId<SportsmanMoveStateMan> >, 0>,
// StateMachine<SportsmanMindState, StateId<SportsmanMoveStateMan> > *> >: returns typeid of the
// functor. It keeps its fn_ name: the function's signature, and so its implementation class, isn't
// known.
#include <functional>

namespace olympus {
    template <class T0, class T1>
    class StateMachine {};
    namespace sport {
        class SportsmanMindState {};
        class SportsmanMoveStateMan {};
    }
    template <class T0>
    class StateId {};
}

typedef std::tr1::_Bind<int, int, std::tr1::_Bind1<std::tr1::_Callable_pmf<int (olympus::StateMachine<olympus::sport::SportsmanMindState, olympus::StateId<olympus::sport::SportsmanMoveStateMan> >::* const)(void) const, olympus::StateMachine<olympus::sport::SportsmanMindState, olympus::StateId<olympus::sport::SportsmanMoveStateMan> >, 0>, olympus::StateMachine<olympus::sport::SportsmanMindState, olympus::StateId<olympus::sport::SportsmanMoveStateMan> > *> > Functor;

extern "C" const type_info &fn_822B54E8(void)
{
    return typeid(Functor);
}
