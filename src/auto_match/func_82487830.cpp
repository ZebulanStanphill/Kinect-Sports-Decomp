// _Target_type of the std::tr1::function wrapping a _Bind<int, int, _Bind1<_Callable_pmf<int
// (StateMachine<FrontendState, StateId<FrontendState> >::* const)(void) const,
// StateMachine<FrontendState, StateId<FrontendState> >, 0>, StateMachine<FrontendState,
// StateId<FrontendState> > *> >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    template <class T0, class T1>
    class StateMachine {};
    namespace frontend {
        class FrontendState {};
    }
    template <class T0>
    class StateId {};
}

typedef std::tr1::_Bind<int, int, std::tr1::_Bind1<std::tr1::_Callable_pmf<int (olympus::StateMachine<olympus::frontend::FrontendState, olympus::StateId<olympus::frontend::FrontendState> >::* const)(void) const, olympus::StateMachine<olympus::frontend::FrontendState, olympus::StateId<olympus::frontend::FrontendState> >, 0>, olympus::StateMachine<olympus::frontend::FrontendState, olympus::StateId<olympus::frontend::FrontendState> > *> > Functor;

extern "C" const type_info &fn_82487830(void)
{
    return typeid(Functor);
}
