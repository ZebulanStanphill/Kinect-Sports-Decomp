extern float lbl_8201DFD0;
extern float lbl_8201DFCC;
extern float lbl_8201DFC8;

float fn_8280A2D8(char angle)
{
    float coefficient0 = lbl_8201DFD0;
    float coefficient1 = lbl_8201DFCC;
    float coefficient2 = lbl_8201DFC8;
    float value = (float)(char)(angle << 2);
    float squared = value * value;
    float result = (((value * value) * coefficient0 + coefficient1) * squared + coefficient2) * value;
    if (((unsigned char)angle + 0x20U) & 0x40) {
        result = -1.0f / result;
    }
    return result;
}
