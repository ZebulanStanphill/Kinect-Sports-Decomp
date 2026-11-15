typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float value[4]; /* 0x0 */
} __vector4;

typedef struct Body_82DB4C60 {
    char reserved[0xa4];
    unsigned int m_solverData; /* 0xa4 */
    char reserveda8[0x38];
    char m_motion[0xd0];         /* 0xe0 */
    __vector4 m_linearVelocity;  /* 0x1b0 */
    __vector4 m_angularVelocity; /* 0x1c0 */
} Body_82DB4C60;

typedef struct Array_82DB4C60 {
    Body_82DB4C60 **data; /* 0x0 */
    int size;             /* 0x4 */
    int capacity;         /* 0x8 */
} Array_82DB4C60;

typedef struct Solver_82DB4C60 {
    char reserved[0xc];
    char *accumulators; /* 0xc */
    char reserved10[8];
    char *velocities; /* 0x18 */
} Solver_82DB4C60;

extern void fn_82CE50D8(void *, void *, const void *);

void fn_82DB4C60(Solver_82DB4C60 *self, Array_82DB4C60 *bodies)
{
    int index;
    for (index = 0; index < bodies->size; index++) {
        Body_82DB4C60 *body = bodies->data[index];
        char *accumulator = self->accumulators + body->m_solverData;
        char *motion = body->m_motion;
        __vector4 *velocity = (__vector4 *)(accumulator + 0x50);
        __vector4 previous;
        *(__vector4 *)(accumulator + 0x10) = *(__vector4 *)(motion + 0xd0);
        previous = *velocity;
        *velocity = *(__vector4 *)(self->velocities + ((body->m_solverData >> 2) & 0x3fffffe0) + 0x10);
        fn_82CE50D8(accumulator + 0x20, velocity, motion + 0xe0);
        *velocity = previous;
    }
}
