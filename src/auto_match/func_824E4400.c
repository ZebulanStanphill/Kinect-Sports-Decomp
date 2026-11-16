typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef union Vector_824E4400 {
    __vector4 value;
    float components[4];
} Vector_824E4400;

typedef struct Object_824E4400 {
    void *key;
    int near;
} Object_824E4400;

extern __vector4 __vsubfp(__vector4, __vector4);
extern double sqrt(double);
extern __vector4 *fn_82F512E8(__vector4 *, void *, void *, int);
extern const float lbl_82191EA0[0xd0];

void fn_824E4400(Object_824E4400 *self, void *object)
{
    Vector_824E4400 first;
    Vector_824E4400 second;
    fn_82F512E8(&first.value, object, self->key, 0);
    fn_82F512E8(&second.value, object, 0, 0);
    first.value = __vsubfp(first.value, second.value);
    {
        float distance = (float)sqrt(first.components[0] * first.components[0] +
                                     first.components[2] * first.components[2]);
        self->near = distance <= lbl_82191EA0[0x4a];
    }
}
