// _Target_type of the std::tr1::function wrapping a _Bind<int, int, _Bind1<_Callable_pmf<int
// (StateMachine<SportControllerState, StateId<SportController> >::* const)(void) const,
// StateMachine<SportControllerState, StateId<SportController> >, 0>,
// StateMachine<SportControllerState, StateId<SportController> > *> >: returns typeid of the
// functor. It keeps its fn_ name: the function's signature, and so its implementation class, isn't
// known.
#include <functional>

namespace olympus {
    template <class T0, class T1>
    class StateMachine {};
    namespace sport {
        class SportControllerState {};
        class SportController {};
    }
    template <class T0>
    class StateId {};
}

typedef std::tr1::_Bind<int, int, std::tr1::_Bind1<std::tr1::_Callable_pmf<int (olympus::StateMachine<olympus::sport::SportControllerState, olympus::StateId<olympus::sport::SportController> >::* const)(void) const, olympus::StateMachine<olympus::sport::SportControllerState, olympus::StateId<olympus::sport::SportController> >, 0>, olympus::StateMachine<olympus::sport::SportControllerState, olympus::StateId<olympus::sport::SportController> > *> > Functor;

extern "C" const type_info &fn_8236E1C0(void)
{
    return typeid(Functor);
}
