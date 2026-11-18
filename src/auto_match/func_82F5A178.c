typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const float lbl_821327A4;
extern const float lbl_82006848;
extern __vector4 lbl_832628A0;

extern __vector4 fn_82F59D58(__vector4 v, __vector4 q);
extern float fn_82F534A0(__vector4 a, __vector4 b);
extern __vector4 fn_82F53580(__vector4 v);
extern float fn_82F59428(float cosine);
extern __vector4 fn_82F53528(__vector4 a, __vector4 b);
extern __vector4 fn_82F53548(__vector4 v);
extern __vector4 fn_82F5A0A0(__vector4 axis, float angle);

/* Rotation that takes direction `target` onto `direction` rotated by `rotation`. */
__vector4 fn_82F5A178(__vector4 rotation, __vector4 target)
{
    __vector4 rotated;
    __vector4 axis;
    float cosine;
    float angle;

    rotated = fn_82F59D58(target, rotation);
    cosine = fn_82F534A0(target, rotated);
    if (cosine - 1.0f > lbl_821327A4) {
        return lbl_832628A0;
    }
    if (cosine + 1.0f < lbl_82006848) {
        axis = fn_82F53580(target);
        return fn_82F5A0A0(axis, 3.14159274f);
    }
    angle = fn_82F59428(cosine);
    axis = fn_82F53548(fn_82F53528(target, rotated));
    return fn_82F5A0A0(axis, angle);
}
