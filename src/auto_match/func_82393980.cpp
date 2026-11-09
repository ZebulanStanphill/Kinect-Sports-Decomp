// _Do_call of a std::tr1::function implementation (<functional>) holding a _Bind of a
// BallHitManager member function pointer with all arguments as placeholders: it calls the
// bound member function on the bound object, forwarding the arguments unchanged. It keeps its fn_
// name (the implementation class name is not reachable from the code).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

namespace olympus {
    namespace sport {
        struct TeamId { enum Enum {}; };
        namespace volleyball {
            namespace network {
                class BallHitManager {};
            }
        }
    }
}

using olympus::sport::TeamId;
using olympus::sport::volleyball::network::BallHitManager;

typedef void (BallHitManager::*HitFn)(__vector4, __vector4, __vector4, float, unsigned int,
                                     TeamId::Enum, unsigned int, float, float);

// The implementation object: vtable, then the bound member function pointer and object.
struct BoundCall {
    void *vtable;
    HitFn fn;
    BallHitManager *object;
};

extern "C" void fn_82393980(BoundCall *self, __vector4 a, __vector4 b, __vector4 c, float d,
                            unsigned int e, TeamId::Enum f, unsigned int g, float h, float i)
{
    (self->object->*self->fn)(a, b, c, d, e, f, g, h, i);
}
