typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern double __fctid(double);
extern double __fcfid(double);
extern double sqrt(double);

typedef struct Body_825DB900 {
    char pad00[0xd0];
    __vector4 velocity; /* 0xd0 */
} Body_825DB900;

typedef struct Player_825DB900 {
    char pad000[0x460];
    char facing[4]; /* 0x460 */
} Player_825DB900;

/* pi / 2 */
extern float lbl_831E4E38;

extern int fn_82559FF0(__vector4 v, float *out);
extern void fn_8261E4B8(void *facing, float *out, int flags);
extern float fn_8261FD18(void *source);

/* Maps an angle to (-2 pi, 2 pi) by dropping whole turns. */
static __forceinline float WrapTurns(float angle)
{
    double turns = (float)(angle * 0.15915494f);

    return (float)((turns - (float)__fcfid(__fctid(turns))) * 6.2831854820251465);
}

float fn_825DB900(Player_825DB900 *player, void *source, Body_825DB900 *body, float amount)
{
    float blend = 0.0f;
    float value;
    float result;

    if (source == 0) {
        value = 0.0f;
    } else {
        value = fn_8261FD18(source);
    }
    result = value * 0.7853982f;
    if (value == 0.0f && amount > 0.0f) {
        __vector4 velocity = body->velocity;
        float heading;
        float facing;
        float speed;
        float delta;

        fn_82559FF0(velocity, &heading);
        speed = (float)sqrt(velocity.vector4_f32[0] * velocity.vector4_f32[0] +
                            velocity.vector4_f32[2] * velocity.vector4_f32[2]) *
                0.125f;
        if (speed > 1.0f) {
            speed = 1.0f;
        }
        if (speed >= 0.3f) {
            blend = (speed - 0.3f) * 1.4285715f;
        }
        fn_8261E4B8(player->facing, &facing, 0);
        delta = WrapTurns(heading - facing);
        if (delta > lbl_831E4E38) {
            delta = 3.1415927f - delta;
        } else if (delta < -1.5707964f) {
            delta = -3.1415927f - delta;
        }
        result = result - delta * blend * amount;
    }
    return result;
}
