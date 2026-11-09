// _Do_call of a std::tr1::function implementation (<functional>) holding a _Bind of a
// FootballBallHitManager member function pointer with all arguments as placeholders: it calls
// the bound member function on the bound object, forwarding the arguments unchanged. It keeps
// its fn_ name (the implementation class name is not reachable from the code).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

namespace olympus {
    namespace sport {
        namespace football {
            class FootballBallHitManager {};
            struct TackleOutcomeParams;
            struct ReplanAIStateForRecoverBallParams;
            struct BallActionSource { enum Enum {}; };
        }
    }
}

using namespace olympus::sport::football;

typedef void (FootballBallHitManager::*HitFn)(__vector4, TackleOutcomeParams &, bool, bool,
                                             const ReplanAIStateForRecoverBallParams &,
                                             BallActionSource::Enum);

// The implementation object: vtable, then the bound member function pointer and object.
struct BoundCall {
    void *vtable;
    HitFn fn;
    FootballBallHitManager *object;
};

extern "C" void fn_823FEFF8(BoundCall *self, __vector4 a, TackleOutcomeParams &b, bool c, bool d,
                            const ReplanAIStateForRecoverBallParams &e, BallActionSource::Enum f)
{
    (self->object->*self->fn)(a, b, c, d, e, f);
}
