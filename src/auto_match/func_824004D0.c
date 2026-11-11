// Deferred call: invokes the stored pointer to member function (code address and this
// adjustment) on the stored target with the six stored arguments.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Arg_824004D0 {
    char data[0x40];
} Arg_824004D0;

typedef void (*Method_824004D0)(void *self, int a, int b, __vector4 c, float d, Arg_824004D0 *e,
                                unsigned char f);

typedef struct MemberPointer_824004D0 {
    Method_824004D0 method;
    int adjust;
} MemberPointer_824004D0;

typedef struct Call_824004D0 {
    MemberPointer_824004D0 method;   // 0x00
    char *target;                    // 0x08
    char pad0c[4];
    int a;                           // 0x10
    char pad14[4];
    int b;                           // 0x18
    char pad1c[4];
    __vector4 c;                     // 0x20
    float d;                         // 0x30
    char pad34[0xc];
    Arg_824004D0 e;                  // 0x40
    unsigned char f;                 // 0x80
} Call_824004D0;

typedef struct Task_824004D0 {
    char pad00[0x10];
    Call_824004D0 call;              // 0x10
} Task_824004D0;

void fn_824004D0(Task_824004D0 *self)
{
    Call_824004D0 *call = &self->call;
    MemberPointer_824004D0 method = call->method;

    method.method(call->target + method.adjust, call->a, call->b, call->c, call->d, &call->e,
                  call->f);
}
