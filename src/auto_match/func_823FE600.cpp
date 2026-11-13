// _Do_call of the std::tr1::function implementation (<functional>) holding a _Bind of a
// FootballBallHitManager member function pointer with all seven arguments as placeholders
// (vtable lbl_821B74EC slot 1; slot 2 fn_823FE650 returns the functor's typeid, which gives
// the member's exact signature). The arguments are forwarded unchanged. The implementation
// class isn't named, so it keeps its fn_ name.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

namespace olympus {
    namespace sport {
        namespace football {
            class FootballBallHitManager;
            __declspec(align(16)) struct PassTarget { float v[8]; };
            struct PassParams { unsigned char a, b; };
            namespace ForceAction {
                enum Enum {};
            }
            struct ReplanAIStateForPassParams;
        }
        namespace TeamId {
            enum Enum {};
        }
    }
}

using olympus::sport::football::FootballBallHitManager;
using olympus::sport::football::PassTarget;
using olympus::sport::football::PassParams;
using olympus::sport::football::ReplanAIStateForPassParams;
namespace ForceAction = olympus::sport::football::ForceAction;
namespace TeamId = olympus::sport::TeamId;

class FootballBallHitManager {};

typedef void (FootballBallHitManager::*PassFn)(unsigned int, TeamId::Enum, __vector4, PassTarget,
                                               PassParams, ForceAction::Enum,
                                               ReplanAIStateForPassParams &);

// The implementation object: vtable, then the bound member function pointer and object.
struct BoundCall {
    void *vtable;
    PassFn fn;
    FootballBallHitManager *object;
};

extern "C" void fn_823FE600(BoundCall *self, unsigned int a, TeamId::Enum b, __vector4 c,
                            PassTarget d, PassParams e, ForceAction::Enum f,
                            ReplanAIStateForPassParams &g)
{
    PassFn fn = self->fn;
    (self->object->*fn)(a, b, c, d, e, f, g);
}
