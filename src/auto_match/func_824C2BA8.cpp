// _Target_type of the std::tr1::function wrapping a _Bind<int, int, _Bind1<_Callable_pmf<int
// (StateMachine<LifetimeState<State>, State::Type>::* const)(void) const,
// StateMachine<LifetimeState<State>, State::Type>, 0>, StateMachine<LifetimeState<State>,
// State::Type> *> >: returns typeid of the functor. It keeps its fn_ name: the function's
// signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    template <class T0, class T1>
    class StateMachine {};
    template <class T0>
    class LifetimeState {};
    namespace review {
        namespace restricted {
            class State {
            public:
                enum Type {};
            };
        }
    }
}

typedef std::tr1::_Bind<int, int, std::tr1::_Bind1<std::tr1::_Callable_pmf<int (olympus::StateMachine<olympus::LifetimeState<olympus::review::restricted::State>, olympus::review::restricted::State::Type>::* const)(void) const, olympus::StateMachine<olympus::LifetimeState<olympus::review::restricted::State>, olympus::review::restricted::State::Type>, 0>, olympus::StateMachine<olympus::LifetimeState<olympus::review::restricted::State>, olympus::review::restricted::State::Type> *> > Functor;

extern "C" const type_info &fn_824C2BA8(void)
{
    return typeid(Functor);
}
