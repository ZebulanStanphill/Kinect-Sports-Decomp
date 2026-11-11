// Deferred call: invokes the stored pointer to member function (code address and this
// adjustment) on the stored target with the seven stored arguments.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct ArgB_824006F0 {
    char data[0x30];
} ArgB_824006F0;

typedef struct ArgF_824006F0 {
    char data[0x50];
} ArgF_824006F0;

typedef void (*Method_824006F0)(void *self, __vector4 a, ArgB_824006F0 *b, __vector4 c, float d,
                                int e, ArgF_824006F0 *f, int g);

typedef struct MemberPointer_824006F0 {
    Method_824006F0 method;
    int adjust;
} MemberPointer_824006F0;

typedef struct Call_824006F0 {
    MemberPointer_824006F0 method;   // 0x00
    char *target;                    // 0x08
    char pad0c[4];
    __vector4 a;                     // 0x10
    ArgB_824006F0 b;                 // 0x20
    __vector4 c;                     // 0x50
    float d;                         // 0x60
    char pad64[0xc];
    int e;                           // 0x70
    char pad74[0xc];
    ArgF_824006F0 f;                 // 0x80
    int g;                           // 0xd0
} Call_824006F0;

typedef struct Task_824006F0 {
    char pad00[0x10];
    Call_824006F0 call;              // 0x10
} Task_824006F0;

void fn_824006F0(Task_824006F0 *self)
{
    Call_824006F0 *call = &self->call;
    MemberPointer_824006F0 method = call->method;

    method.method(call->target + method.adjust, call->a, &call->b, call->c, call->d, call->e,
                  &call->f, call->g);
}
