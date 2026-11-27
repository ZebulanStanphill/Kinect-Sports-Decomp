typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct State_83075A68 {
    __vector4 position; /* 0x00 */
    __vector4 velocity; /* 0x10 */
} State_83075A68;

__vector4 fn_8306ED28(__vector4 a, __vector4 b);
__vector4 fn_8306ED30(__vector4 a, __vector4 b);
float fn_8306EE38(__vector4 v);
float fn_8306E888(float x);
__vector4 fn_8306EC70(__vector4 a, __vector4 b, float t);
float fn_8306E7D8(float a, float b);

static __forceinline __vector4 Replicate(float v)
{
    __vector4 r;
    r.vector4_f32[0] = r.vector4_f32[1] = r.vector4_f32[2] = r.vector4_f32[3] = v;
    return r;
}

void fn_83075A68(State_83075A68 *state, const State_83075A68 *target, float positionGain, float velocityGain,
                 float snapDistance, float dt)
{
    __vector4 predicted;
    __vector4 error;
    float distance;

    distance = fn_8306E888(fn_8306EE38(fn_8306ED30(target->position, state->position)));
    if (distance <= snapDistance && snapDistance > 1e-5f)
        state->position = fn_8306EC70(target->position, state->position, distance / snapDistance);
    predicted =
        fn_8306ED28(target->position, __vmulfp(target->velocity, Replicate(fn_8306E7D8(dt * 30.0f, 1.5f))));
    error = fn_8306ED30(state->position, predicted);
    state->position = fn_8306ED28(predicted, __vmulfp(error, Replicate(positionGain)));
    state->velocity = fn_8306ED28(target->velocity, __vmulfp(error, Replicate(velocityGain)));
}
