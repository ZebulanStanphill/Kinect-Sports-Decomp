typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmsum3fp(__vector4, __vector4);
void __stvewx(__vector4, void *, int);

typedef struct Motion_82DBC6D8 {
    char reserved[0xd0];
    __vector4 m_linearVelocity;  /* 0xd0 */
    __vector4 m_angularVelocity; /* 0xe0 */
} Motion_82DBC6D8;

float fn_82DBC6D8(Motion_82DBC6D8 *self, float radius)
{
    float linear;
    float angular;
    const __vector4 *linearVelocity = &self->m_linearVelocity;
    const __vector4 *angularVelocity = &self->m_angularVelocity;
    __stvewx(__vmsum3fp(*linearVelocity, *linearVelocity), &linear, 0);
    __stvewx(__vmsum3fp(*angularVelocity, *angularVelocity), &angular, 0);
    return linear + angular * radius * radius;
}
