// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind3<_Callable_pmf<void
// (SportControllerBoxingNetObj::* const)(TeamId::Enum, __vector4), SportControllerBoxingNetObj,
// 0>, SportControllerBoxingNetObj *, _Ph<1>, _Ph<2> > >: returns typeid of the functor. It keeps
// its fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class SportControllerBoxingNetObj {};
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

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (olympus::sport::boxing::SportControllerBoxingNetObj::* const)(olympus::sport::TeamId::Enum, __vector4), olympus::sport::boxing::SportControllerBoxingNetObj, 0>, olympus::sport::boxing::SportControllerBoxingNetObj *, std::tr1::_Ph<1>, std::tr1::_Ph<2> > > Functor;

extern "C" const type_info &fn_82366850(void)
{
    return typeid(Functor);
}
