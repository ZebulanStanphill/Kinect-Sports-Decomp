// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind8<_Callable_pmf<void
// (SportsmanBoxingNetObj::* const)(__vector4, float, PunchPower::Enum, PunchType::Enum,
// NW::NetObjID_c, Arm::Enum, unsigned int), SportsmanBoxingNetObj, 0>, SportsmanBoxingNetObj *,
// _Ph<1>, _Ph<2>, _Ph<3>, _Ph<4>, _Ph<5>, _Ph<6>, _Ph<7> > >: returns typeid of the functor. It
// keeps its fn_ name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace boxing {
            class SportsmanBoxingNetObj {};
            namespace PunchPower {
                enum Enum {};
            }
            namespace PunchType {
                enum Enum {};
            }
            namespace Arm {
                enum Enum {};
            }
        }
    }
}
// The XDK's VMX vector type.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
namespace NW {
    class NetObjID_c {};
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind8<std::tr1::_Callable_pmf<void (olympus::sport::boxing::SportsmanBoxingNetObj::* const)(__vector4, float, olympus::sport::boxing::PunchPower::Enum, olympus::sport::boxing::PunchType::Enum, NW::NetObjID_c, olympus::sport::boxing::Arm::Enum, unsigned int), olympus::sport::boxing::SportsmanBoxingNetObj, 0>, olympus::sport::boxing::SportsmanBoxingNetObj *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3>, std::tr1::_Ph<4>, std::tr1::_Ph<5>, std::tr1::_Ph<6>, std::tr1::_Ph<7> > > Functor;

extern "C" const type_info &fn_8232A740(void)
{
    return typeid(Functor);
}
