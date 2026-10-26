// _Target_type of the std::tr1::function wrapping a _Bind_fty<function<void (__vector4, __vector4,
// __vector4, float, unsigned int, TeamId::Enum, unsigned int, float, float)>, _Notforced,
// _Bind9<_Callable_obj<function<void (__vector4, __vector4, __vector4, float, unsigned int,
// TeamId::Enum, unsigned int, float, float)>, 0>, __vector4, __vector4, __vector4, float, unsigned
// int, TeamId::Enum, unsigned int, float, float> >: returns typeid of the functor. It keeps its
// fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

// The XDK's VMX vector type.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
namespace olympus {
    namespace sport {
        namespace TeamId {
            enum Enum {};
        }
    }
}

typedef std::tr1::_Bind_fty<std::tr1::function<void (__vector4, __vector4, __vector4, float, unsigned int, olympus::sport::TeamId::Enum, unsigned int, float, float)>, std::tr1::_Notforced, std::tr1::_Bind9<std::tr1::_Callable_obj<std::tr1::function<void (__vector4, __vector4, __vector4, float, unsigned int, olympus::sport::TeamId::Enum, unsigned int, float, float)>, 0>, __vector4, __vector4, __vector4, float, unsigned int, olympus::sport::TeamId::Enum, unsigned int, float, float> > Functor;

extern "C" const type_info &fn_82393E90(void)
{
    return typeid(Functor);
}
