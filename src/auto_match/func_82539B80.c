typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vsubfp(__vector4 a, __vector4 b);

extern int fn_82539A78(float minimum, float maximum, float start, float end, float delta, float *entry,
                       float *exit);

int fn_82539B80(const __vector4 *start, const __vector4 *end, const __vector4 *minimum,
                const __vector4 *maximum)
{
    float entry = 0.0f;
    float exit = 1.0f;
    __vector4 delta = __vsubfp(*end, *start);

    if (!fn_82539A78(minimum->vector4_f32[0], maximum->vector4_f32[0], start->vector4_f32[0],
                     end->vector4_f32[0], delta.vector4_f32[0], &entry, &exit))
        return 0;
    if (!fn_82539A78(minimum->vector4_f32[1], maximum->vector4_f32[1], start->vector4_f32[1],
                     end->vector4_f32[1], delta.vector4_f32[1], &entry, &exit))
        return 0;
    return fn_82539A78(minimum->vector4_f32[2], maximum->vector4_f32[2], start->vector4_f32[2],
                       end->vector4_f32[2], delta.vector4_f32[2], &entry, &exit) != 0;
}
