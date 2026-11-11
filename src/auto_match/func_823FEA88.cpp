// _Do_call of the std::tr1::function implementation (<functional>) holding a _Bind of a
// FootballController member function pointer with all six arguments as placeholders
// (vtable lbl_821B754C slot 1; slot 2 fn_823FEAE0 returns the functor's typeid). The
// function's signature takes KickParams by value and a bool, which convert to the member's
// const KickParams & and int. The implementation class isn't named, so it keeps its fn_ name.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

namespace olympus {
    namespace sport {
        namespace football {
            class __multiple_inheritance FootballController;
            __declspec(align(16)) struct KickParams {
                __vector4 position, direction, target;
                float a;
                unsigned char b, c, d;
                int e, f;
            };
        }
        namespace TeamId {
            enum Enum {};
        }
    }
}

using olympus::sport::football::FootballController;
using olympus::sport::football::KickParams;
using olympus::sport::TeamId::Enum;

typedef void (FootballController::*KickFn)(unsigned int, Enum, __vector4, float, const KickParams &, int);

// The implementation object: vtable, then the bound member function pointer and object.
struct BoundCall {
    void *vtable;
    int pad;
    KickFn fn;
    FootballController *object;
};

extern "C" void fn_823FEA88(BoundCall *self, unsigned int a, Enum b, __vector4 c, float d,
                            KickParams e, bool f)
{
    KickFn fn = self->fn;
    (self->object->*fn)(a, b, c, d, e, f);
}
