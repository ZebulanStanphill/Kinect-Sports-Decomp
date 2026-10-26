// _Target_type of the std::tr1::function wrapping a _Bind<void, void, _Bind8<_Callable_pmf<void
// (FootballController::* const)(unsigned int, TeamId::Enum, BodyPart::Enum, Direction::Enum,
// __vector4, __vector4, const ReplanAIStateForRecoverBallParams &), FootballController, 0>,
// FootballController *, unsigned int, TeamId::Enum, BodyPart::Enum, Direction::Enum, __vector4,
// __vector4, ReplanAIStateForRecoverBallParams> >: returns typeid of the functor. It keeps its fn_
// name: the function's signature, and so its implementation class, isn't known.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class FootballController {};
            namespace BodyPart {
                enum Enum {};
            }
            namespace Direction {
                enum Enum {};
            }
            struct ReplanAIStateForRecoverBallParams {};
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

typedef std::tr1::_Bind<void, void, std::tr1::_Bind8<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(unsigned int, olympus::sport::TeamId::Enum, olympus::sport::football::BodyPart::Enum, olympus::sport::football::Direction::Enum, __vector4, __vector4, const olympus::sport::football::ReplanAIStateForRecoverBallParams &), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, unsigned int, olympus::sport::TeamId::Enum, olympus::sport::football::BodyPart::Enum, olympus::sport::football::Direction::Enum, __vector4, __vector4, olympus::sport::football::ReplanAIStateForRecoverBallParams> > Functor;

extern "C" const type_info &fn_82400650(void)
{
    return typeid(Functor);
}
