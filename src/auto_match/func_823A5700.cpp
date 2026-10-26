// _Target_type of the std::tr1::function wrapping a _Bind<int, int, _Bind1<_Callable_pmf<int
// (StateMachine<ServeBallInPlaySubState, StateId<ServeBallInPlaySubState> >::* const)(void) const,
// StateMachine<ServeBallInPlaySubState, StateId<ServeBallInPlaySubState> >, 0>,
// StateMachine<ServeBallInPlaySubState, StateId<ServeBallInPlaySubState> > *> >: returns typeid of
// the functor. It keeps its fn_ name: the function's signature, and so its implementation class,
// isn't known.
#include <functional>

namespace olympus {
    template <class T0, class T1>
    class StateMachine {};
    namespace sport {
        namespace tabletennis {
            class ServeBallInPlaySubState {};
        }
    }
    template <class T0>
    class StateId {};
}

typedef std::tr1::_Bind<int, int, std::tr1::_Bind1<std::tr1::_Callable_pmf<int (olympus::StateMachine<olympus::sport::tabletennis::ServeBallInPlaySubState, olympus::StateId<olympus::sport::tabletennis::ServeBallInPlaySubState> >::* const)(void) const, olympus::StateMachine<olympus::sport::tabletennis::ServeBallInPlaySubState, olympus::StateId<olympus::sport::tabletennis::ServeBallInPlaySubState> >, 0>, olympus::StateMachine<olympus::sport::tabletennis::ServeBallInPlaySubState, olympus::StateId<olympus::sport::tabletennis::ServeBallInPlaySubState> > *> > Functor;

extern "C" const type_info &fn_823A5700(void)
{
    return typeid(Functor);
}
