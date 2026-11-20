extern float lbl_8201DFAC;
extern float lbl_8201DFA8;
extern float lbl_8201DFA4;
extern float lbl_8201DFA0;
extern float lbl_8201DF9C;
extern float lbl_8201DF98;

void fn_8280A3A8(char angle, float *sine, float *cosine)
{
    float value = (float)(char)(angle << 2);
    float squared = value * value;
    float sinValue = (((value * value) * lbl_8201DFAC - lbl_8201DFA8) * squared + lbl_8201DFA4) * value;
    float cosValue =
        ((lbl_8201DF9C - (value * value) * lbl_8201DFA0) * squared - lbl_8201DF98) * squared + 1.0f;

    switch (((unsigned char)angle + 0x20) & 0xc0) {
    case 0:
        *sine = sinValue;
        *cosine = cosValue;
        break;
    case 0x40:
        *sine = cosValue;
        *cosine = -sinValue;
        break;
    case 0x80:
        *sine = -sinValue;
        *cosine = -cosValue;
        break;
    default:
        *sine = -cosValue;
        *cosine = sinValue;
        break;
    }
}
