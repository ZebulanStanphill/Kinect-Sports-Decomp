/* Delegate forwarder: calls the bound function on the bound object with all arguments, among them a 4x4 vector
   matrix passed by value (r6-r10 and three stack slots, copied with memcpy) and an int. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix_823FE7F8 {
    __vector4 rows[4];
} Matrix_823FE7F8;

typedef void (*Target_823FE7F8)(void *object, int a, int b, __vector4 v, Matrix_823FE7F8 m, int c);

typedef struct Delegate_823FE7F8 {
    int pad0;
    Target_823FE7F8 fn;     /* 0x04 */
    void *object;           /* 0x08 */
} Delegate_823FE7F8;

void fn_823FE7F8(Delegate_823FE7F8 *self, int a, int b, __vector4 v, Matrix_823FE7F8 m, int c)
{
    self->fn(self->object, a, b, v, m, c);
}
