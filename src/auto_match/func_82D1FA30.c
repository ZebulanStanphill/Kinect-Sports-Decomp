typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Result_82D1FA30 {
    __vector4 position; // 0x0
    __vector4 normal;   // 0x10
    __vector4 extra;    // 0x20
    int shape;          // 0x30
    float fraction;     // 0x34
    char hit;           // 0x38
} Result_82D1FA30;

extern const __vector4 lbl_8323B1A0;
extern void fn_82D1F838(void *self, void *input, Result_82D1FA30 *result);

float fn_82D1FA30(void *self, void *input, __vector4 *position, unsigned char *hit)
{
    Result_82D1FA30 result;

    result.position = lbl_8323B1A0;
    result.normal = lbl_8323B1A0;
    result.extra = lbl_8323B1A0;
    result.shape = 0;
    result.fraction = 3.40282e38f;
    result.hit = 0;
    fn_82D1F838(self, input, &result);
    if (hit != 0) {
        *hit = result.hit != 0;
    }
    *position = result.position;
    return result.fraction;
}
