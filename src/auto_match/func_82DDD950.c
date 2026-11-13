// Havok penetration query in the "TtPenetration" timer scope: builds the query input on the
// stack (transform, splatted tolerance, squared tolerance, the two bodies, four more arguments),
// runs it, and on result 3 calls the follow-up handler and returns 1.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);

typedef struct ProfTls_82DDD950 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
} ProfTls_82DDD950;

typedef struct Transform_82DDD950 {
    __vector4 col[4];
} Transform_82DDD950;

typedef struct Input_82DDD950 {
    Transform_82DDD950 transform;   /* 0x00 */
    __vector4 tolerance;            /* 0x40 */
    float toleranceSq;              /* 0x50 */
    void *a;                        /* 0x54 */
    void *b;                        /* 0x58 */
    int unk5c;                      /* 0x5c */
    int arg5;                       /* 0x60 */
    int arg6;                       /* 0x64 */
    int arg7;                       /* 0x68 */
    int arg8;                       /* 0x6c */
} Input_82DDD950;

extern unsigned int lbl_8323B4A0;
extern void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);
extern int fn_82DDD738(Input_82DDD950 *input, void *collector);
extern void fn_82DE3730(void *a, void *b, const Transform_82DDD950 *transform, int arg5, int arg6,
                        void *collector);

int fn_82DDD950(void *a, void *b, const Transform_82DDD950 *transform, float tolerance, int arg5,
                int arg6, int arg7, int arg8, void *collector)
{
    ProfTls_82DDD950 *t;
    void **p;
    Input_82DDD950 input;
    int result;

    t = (ProfTls_82DDD950 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"TtPenetration";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }

    input.transform.col[0] = transform->col[0];
    input.transform.col[1] = transform->col[1];
    input.transform.col[2] = transform->col[2];
    input.transform.col[3] = transform->col[3];
    input.tolerance.vector4_f32[0] = tolerance;
    input.tolerance = __vspltw(input.tolerance, 0);
    input.toleranceSq = tolerance * tolerance;
    input.a = a;
    input.b = b;
    input.arg5 = arg5;
    input.arg6 = arg6;
    input.unk5c = 0;
    input.arg7 = arg7;
    input.arg8 = arg8;
    result = fn_82DDD738(&input, collector);
    if (result == 3) {
        fn_82DE3730(a, b, transform, arg5, arg6, collector);
        result = 1;
    }

    t = (ProfTls_82DDD950 *)KeTlsGetValue(lbl_8323B4A0);
    p = t->cur;
    if (p < t->end) {
        p[0] = (void *)"Et";
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
    return result;
}
