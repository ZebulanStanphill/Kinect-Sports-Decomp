extern float lbl_8201DF98;
extern float lbl_8201DF9C;
extern float lbl_8201DFA0;
extern float lbl_8201DFA4;
extern float lbl_8201DFA8;
extern float lbl_8201DFAC;

/* Sine of a byte angle (256 steps per turn): the angle shifted left by two (the position inside
   the octant) feeds the sine or the cosine series, the top three bits pick the octant. */
float fn_82809EB8(signed char angle)
{
    float x = (float)(signed char)(angle << 2);
    float x2 = x * x;

    switch (angle & 0xe0) {
    case 0x20:
    case 0x40:
        return -(((lbl_8201DFAC * (x * x) - lbl_8201DFA8) * x2 + lbl_8201DFA4) * x);
    case 0x60:
    case 0x80:
        return -(((lbl_8201DF9C - lbl_8201DFA0 * (x * x)) * x2 - lbl_8201DF98) * x2 + 1.0f);
    case 0x00:
    case 0xe0:
        return ((lbl_8201DF9C - lbl_8201DFA0 * (x * x)) * x2 - lbl_8201DF98) * x2 + 1.0f;
    default:
        return ((lbl_8201DFAC * (x * x) - lbl_8201DFA8) * x2 + lbl_8201DFA4) * x;
    }
}
