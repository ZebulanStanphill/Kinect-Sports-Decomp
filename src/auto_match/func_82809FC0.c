extern float lbl_8201DFB0;
extern float lbl_8201DFB4;
extern float lbl_8201DFB8;
extern float lbl_8201DFBC;
extern float lbl_8201DFC0;
extern float lbl_8201DFC4;

/* Sine of a 16-bit angle (65536 steps per turn): the angle shifted left by two (the position inside
   the octant) feeds the sine or the cosine series, the top three bits pick the octant. */
float fn_82809FC0(short angle)
{
    float x = (float)(short)(angle << 2);
    float x2 = x * x;

    switch (angle & 0xe000) {
    case 0x2000:
    case 0x4000:
        return -(((lbl_8201DFC4 * (x * x) - lbl_8201DFC0) * x2 + lbl_8201DFBC) * x);
    case 0x6000:
    case 0x8000:
        return -(((lbl_8201DFB4 - lbl_8201DFB8 * (x * x)) * x2 - lbl_8201DFB0) * x2 + 1.0f);
    case 0x0000:
    case 0xe000:
        return ((lbl_8201DFB4 - lbl_8201DFB8 * (x * x)) * x2 - lbl_8201DFB0) * x2 + 1.0f;
    default:
        return ((lbl_8201DFC4 * (x * x) - lbl_8201DFC0) * x2 + lbl_8201DFBC) * x;
    }
}
