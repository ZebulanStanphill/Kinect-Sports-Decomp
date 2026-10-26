// _Target_type of the std::tr1::function wrapping a _Bind<int, int, _Bind1<_Callable_pmf<int
// (StateMachine<TeamTacticState, StateId<TeamTacticState> >::* const)(void) const,
// StateMachine<TeamTacticState, StateId<TeamTacticState> >, 0>, StateMachine<TeamTacticState,
// StateId<TeamTacticState> > *> >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    template <class T0, class T1>
    class StateMachine {};
    namespace sport {
        class TeamTacticState {};
    }
    template <class T0>
    class StateId {};
}

typedef std::tr1::_Bind<int, int, std::tr1::_Bind1<std::tr1::_Callable_pmf<int (olympus::StateMachine<olympus::sport::TeamTacticState, olympus::StateId<olympus::sport::TeamTacticState> >::* const)(void) const, olympus::StateMachine<olympus::sport::TeamTacticState, olympus::StateId<olympus::sport::TeamTacticState> >, 0>, olympus::StateMachine<olympus::sport::TeamTacticState, olympus::StateId<olympus::sport::TeamTacticState> > *> > Functor;

extern "C" const type_info &fn_822AF098(void)
{
    return typeid(Functor);
}
