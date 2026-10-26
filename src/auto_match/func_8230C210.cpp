// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind6<_Callable_pmf<void
// (SportsmanMindState_Football_GoalKeeper::* const)(Footballer &, BodyPart::Enum, __vector4,
// __vector4, __vector4), SportsmanMindState_Football_GoalKeeper, 0>,
// SportsmanMindState_Football_GoalKeeper *, _Ph<1>, _Ph<2>, _Ph<3>, _Ph<4>, _Ph<5> > >: returns
// typeid of the functor. It keeps its fn_ name: the function's signature, and so its
// implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class SportsmanMindState_Football_GoalKeeper {};
            class Footballer {};
            namespace BodyPart {
                enum Enum {};
            }
        }
    }
}
// The XDK's VMX vector type.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef std::tr1::_Bind<void, void, std::tr1::_Bind6<std::tr1::_Callable_pmf<void (olympus::sport::football::SportsmanMindState_Football_GoalKeeper::* const)(olympus::sport::football::Footballer &, olympus::sport::football::BodyPart::Enum, __vector4, __vector4, __vector4), olympus::sport::football::SportsmanMindState_Football_GoalKeeper, 0>, olympus::sport::football::SportsmanMindState_Football_GoalKeeper *, std::tr1::_Ph<1>, std::tr1::_Ph<2>, std::tr1::_Ph<3>, std::tr1::_Ph<4>, std::tr1::_Ph<5> > > Functor;

extern "C" const type_info &fn_8230C210(void)
{
    return typeid(Functor);
}
