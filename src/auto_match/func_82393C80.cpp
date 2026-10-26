// _Target_type of the std::tr1::function wrapping a _Bind_fty<function<void (__vector4, __vector4,
// __vector4, float, unsigned int, bool)>, _Notforced, _Bind6<_Callable_obj<function<void
// (__vector4, __vector4, __vector4, float, unsigned int, bool)>, 0>, __vector4, __vector4,
// __vector4, float, unsigned int, bool> >: returns typeid of the functor. It keeps its fn_ name:
// the function's signature, and so its implementation class, isn't known.
#include <functional>

// The XDK's VMX vector type.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef std::tr1::_Bind_fty<std::tr1::function<void (__vector4, __vector4, __vector4, float, unsigned int, bool)>, std::tr1::_Notforced, std::tr1::_Bind6<std::tr1::_Callable_obj<std::tr1::function<void (__vector4, __vector4, __vector4, float, unsigned int, bool)>, 0>, __vector4, __vector4, __vector4, float, unsigned int, bool> > Functor;

extern "C" const type_info &fn_82393C80(void)
{
    return typeid(Functor);
}
