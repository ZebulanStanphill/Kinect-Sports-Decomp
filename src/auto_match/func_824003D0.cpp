// _Do_call of the std::tr1::function implementation (<functional>) wrapping a _Bind<void, void,
// _Bind6<_Callable_pmf<void (FootballController::* const)(unsigned int, TeamId::Enum, __vector4,
// const KickParams &, ReplanAIStateForShootParams &), FootballController, 0>,
// FootballController *, unsigned int, TeamId::Enum, __vector4, KickParams,
// ReplanAIStateForShootParams> > (the functor whose typeid fn_82400430 returns): calls the bound member function on the
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
            struct __declspec(align(16)) KickParams {
                char data[0x40];
            };
            struct __declspec(align(16)) ReplanAIStateForShootParams {
                char data[0x50];
            };
        }
        namespace TeamId {
            enum Enum {};
        }
    }
}

typedef std::tr1::_Bind<void, void, std::tr1::_Bind6<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(unsigned int, olympus::sport::TeamId::Enum, __vector4, const olympus::sport::football::KickParams &, olympus::sport::football::ReplanAIStateForShootParams &), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, unsigned int, olympus::sport::TeamId::Enum, __vector4, olympus::sport::football::KickParams, olympus::sport::football::ReplanAIStateForShootParams> > Functor;

// The implementation object: vtable, then the functor.
struct Impl {
    void **vtbl;
    Functor callee;
};

extern "C" void fn_824003D0(Impl *self)
{
    self->callee();
}
