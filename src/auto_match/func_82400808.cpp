// _Do_call of the std::tr1::function implementation (<functional>) wrapping a _Bind<void, void,
// _Bind8<_Callable_pmf<void (FootballController::* const)(__vector4, TackleOutcomeParams &,
// ForceAction::Enum, PassParams &, PassTarget &, const ReplanAIStateForPassParams &,
// BallActionSource::Enum), FootballController, 0>,
// FootballController *, __vector4, TackleOutcomeParams, ForceAction::Enum, PassParams,
// PassTarget, ReplanAIStateForPassParams, BallActionSource::Enum> > (the functor whose typeid fn_82400878 returns): calls the bound member function on the
// bound object with the bound arguments. It keeps its fn_ name: the function's signature, and so
// its implementation class, isn't known. FootballController's member function pointers are 8
// bytes (function, this adjustment), so the class uses multiple inheritance; its bases are
// unknown. The parameter structs' sizes and alignment come from the functor's layout; their
// members are unknown.
#include <functional>

// The XDK's VMX vector type.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

namespace olympus {
    namespace sport {
        namespace football {
            class __multiple_inheritance FootballController;
            struct __declspec(align(16)) TackleOutcomeParams {
                char data[0x30];
            };
            namespace ForceAction {
                enum Enum {};
            }
            struct __declspec(align(16)) PassParams {
                char data[0x10];
            };
            struct __declspec(align(16)) PassTarget {
                char data[0x20];
            };
            struct __declspec(align(16)) ReplanAIStateForPassParams {
                char data[0x60];
            };
            namespace BallActionSource {
                enum Enum {};
            }
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind8<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(__vector4, olympus::sport::football::TackleOutcomeParams &, olympus::sport::football::ForceAction::Enum, olympus::sport::football::PassParams &, olympus::sport::football::PassTarget &, const olympus::sport::football::ReplanAIStateForPassParams &, olympus::sport::football::BallActionSource::Enum), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, __vector4, olympus::sport::football::TackleOutcomeParams, olympus::sport::football::ForceAction::Enum, olympus::sport::football::PassParams, olympus::sport::football::PassTarget, olympus::sport::football::ReplanAIStateForPassParams, olympus::sport::football::BallActionSource::Enum> > Functor;

// The implementation object: vtable, then the functor.
struct Impl {
    void **vtbl;
    Functor callee;
};

extern "C" void fn_82400808(Impl *self)
{
    self->callee();
}
