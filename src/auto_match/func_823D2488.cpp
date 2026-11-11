// _Do_call of the std::tr1::function implementation (<functional>) wrapping a _Bind<void, void,
// _Bind3<_Callable_pmf<void (FootballController::* const)(TeamId::Enum, __vector4),
// FootballController, 0>, FootballController *, TeamId::Enum, __vector4> > (the functor whose
// typeid fn_823D24D8 returns): calls the bound member function on the bound object with the bound
// arguments. It keeps its fn_ name: the function's signature, and so its implementation class,
// isn't known. FootballController's member function pointers are 8 bytes (function, this
// adjustment), so the class uses multiple inheritance; its bases are unknown.
#include <functional>

namespace olympus {
    namespace sport {
        namespace football {
            class __multiple_inheritance FootballController;
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

typedef std::tr1::_Bind<void, void, std::tr1::_Bind3<std::tr1::_Callable_pmf<void (olympus::sport::football::FootballController::* const)(olympus::sport::TeamId::Enum, __vector4), olympus::sport::football::FootballController, 0>, olympus::sport::football::FootballController *, olympus::sport::TeamId::Enum, __vector4> > Functor;

// The implementation object: vtable, then the functor.
struct Impl {
    void **vtbl;
    Functor callee;
};

extern "C" void fn_823D2488(Impl *self)
{
    self->callee();
}
