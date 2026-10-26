// _Target_type of the std::tr1::function wrapping a _Bind<__vector4, __vector4,
// _Bind2<_Callable_pmf<__vector4 (IncidentalStateMachine::* const)(const __vector4 &),
// IncidentalStateMachine, 0>, IncidentalStateMachine *, _Ph<1> > >: returns typeid of the functor.
// It keeps its fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

// The XDK's VMX vector type.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
namespace olympus {
    namespace incidental {
        class IncidentalStateMachine {};
    }
}

typedef std::tr1::_Bind<__vector4, __vector4, std::tr1::_Bind2<std::tr1::_Callable_pmf<__vector4 (olympus::incidental::IncidentalStateMachine::* const)(const __vector4 &), olympus::incidental::IncidentalStateMachine, 0>, olympus::incidental::IncidentalStateMachine *, std::tr1::_Ph<1> > > Functor;

extern "C" const type_info &fn_824CC830(void)
{
    return typeid(Functor);
}
