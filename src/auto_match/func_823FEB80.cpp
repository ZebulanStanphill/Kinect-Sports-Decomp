// _Do_call of a std::tr1::function implementation (<functional>) holding a _Bind of a
// BallHitManager member function pointer with all arguments as placeholders: it calls the
// bound member function on the bound object, forwarding the arguments unchanged. The linker
// folded several instantiations into this one, so it keeps its fn_ name.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

namespace olympus {
    namespace sport {
        namespace volleyball {
            namespace network {
                class BallHitManager {};
            }
        }
    }
}

using olympus::sport::volleyball::network::BallHitManager;

typedef void (BallHitManager::*HitFn)(__vector4, __vector4, __vector4, float, unsigned int, bool);

// The implementation object: vtable, then the bound member function pointer and object.
struct BoundCall {
    void *vtable;
    HitFn fn;
    BallHitManager *object;
};

extern "C" void fn_823FEB80(BoundCall *self, __vector4 a, __vector4 b, __vector4 c, float d,
                            unsigned int e, bool f)
{
    (self->object->*self->fn)(a, b, c, d, e, f);
}
