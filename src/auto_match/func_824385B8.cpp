// _Target_type of the std::tr1::function wrapping a _Bind<int, int, _Bind1<_Callable_pmf<int
// (AthleticsStateMachine<void>::* const)(void) const, AthleticsStateMachine<void>, 0>,
// AthleticsStateMachine<void> *> >: returns typeid of the functor. It keeps its fn_ name: the
// function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace athletics {
            template <class T0>
            class AthleticsStateMachine {};
        }
    }
}

typedef std::tr1::_Bind<int, int, std::tr1::_Bind1<std::tr1::_Callable_pmf<int (olympus::sport::athletics::AthleticsStateMachine<void>::* const)(void) const, olympus::sport::athletics::AthleticsStateMachine<void>, 0>, olympus::sport::athletics::AthleticsStateMachine<void> *> > Functor;

extern "C" const type_info &fn_824385B8(void)
{
    return typeid(Functor);
}
