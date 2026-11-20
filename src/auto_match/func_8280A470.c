extern float lbl_8201DFC4;
extern float lbl_8201DFC0;
extern float lbl_8201DFBC;
extern float lbl_8201DFB8;
extern float lbl_8201DFB4;
extern float lbl_8201DFB0;

void fn_8280A470(short angle, float *sine, float *cosine)
{
    float value = (float)(short)(angle << 2);
    float squared = value * value;
    float sinValue = (((value * value) * lbl_8201DFC4 - lbl_8201DFC0) * squared + lbl_8201DFBC) * value;
    float cosValue =
        ((lbl_8201DFB4 - (value * value) * lbl_8201DFB8) * squared - lbl_8201DFB0) * squared + 1.0f;

    switch (((unsigned short)angle + 0x2000) & 0xc000) {
    case 0:
        *sine = sinValue;
        *cosine = cosValue;
        break;
    case 0x4000:
        *sine = cosValue;
        *cosine = -sinValue;
        break;
    case 0x8000:
        *sine = -sinValue;
        *cosine = -cosValue;
        break;
    default:
        *sine = -cosValue;
        *cosine = sinValue;
        break;
    }
}
