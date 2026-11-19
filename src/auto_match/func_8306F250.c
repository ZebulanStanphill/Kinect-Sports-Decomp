typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

extern float fn_8306EA00(float value);
extern float fn_8306E888(float value);
extern const float lbl_82186E10;
extern const float lbl_82186E14;

unsigned char fn_8306F250(__vector4 point, float margin)
{
    float x;
    float y;
    if (!(point.v[2] > 0.0f)) {
        return 1;
    }
    x = fn_8306EA00(point.v[0] * (1.0f / point.v[2]));
    y = fn_8306EA00(point.v[1] * (1.0f / point.v[2]));
    return fn_8306E888(x) > lbl_82186E14 - margin || fn_8306E888(y) > lbl_82186E10 - margin;
}
