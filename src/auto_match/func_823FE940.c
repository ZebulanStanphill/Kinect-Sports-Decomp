/* Delegate forwarder: calls the bound function on the bound object with all arguments, among them a 4x4 vector
   matrix passed by value (r7-r10 and four stack slots, copied with memcpy) and a byte flag. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix_823FE940 {
    __vector4 rows[4];
} Matrix_823FE940;

typedef void (*Target_823FE940)(void *object, int a, int b, __vector4 v, float x, Matrix_823FE940 m,
                                unsigned char flag);

typedef struct Delegate_823FE940 {
    int pad0;
    Target_823FE940 fn;     /* 0x04 */
    void *object;           /* 0x08 */
} Delegate_823FE940;

void fn_823FE940(Delegate_823FE940 *self, int a, int b, __vector4 v, float x, Matrix_823FE940 m, unsigned char flag)
{
    self->fn(self->object, a, b, v, x, m, flag);
}
