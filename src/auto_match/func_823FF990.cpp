// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (NetworkNotifications::SetupCorner::* const)(TeamId::Enum, __vector4),
// NetworkNotifications::SetupCorner, 0>, NetworkNotifications::SetupCorner *, _Ph<1>, _Ph<2> > >:
// returns typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            namespace NetworkNotifications {
                struct SetupCorner {};
            }
        }
        namespace TeamId {
            enum Enum {};
        }
    }
}
// The XDK's VMX vector type.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (olympus::sport::football::NetworkNotifications::SetupCorner::* const)(olympus::sport::TeamId::Enum, __vector4), olympus::sport::football::NetworkNotifications::SetupCorner, 0>, olympus::sport::football::NetworkNotifications::SetupCorner *, std::tr1::_Ph<1>, std::tr1::_Ph<2> > > Functor;

extern "C" const type_info &fn_823FF990(void)
{
    return typeid(Functor);
}
