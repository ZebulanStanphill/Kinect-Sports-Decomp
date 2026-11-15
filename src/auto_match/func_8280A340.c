extern float lbl_8201DFDC;
extern float lbl_8201DFD8;
extern float lbl_8201DFD4;

float fn_8280A340(short angle)
{
    float coefficient0 = lbl_8201DFDC;
    float coefficient1 = lbl_8201DFD8;
    float coefficient2 = lbl_8201DFD4;
    float value = (float)(short)(angle << 2);
    float result = (((value * value) * coefficient0 + coefficient1) * (value * value) + coefficient2) * value;
    if (((unsigned short)angle + 0x2000U) & 0x4000) {
        result = -1.0f / result;
    }
    return result;
}
