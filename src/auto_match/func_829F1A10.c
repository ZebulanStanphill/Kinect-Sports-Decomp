extern double tan(double);
extern float lbl_83218BE4;
extern unsigned int lbl_83218BE8;

float fn_829F1A10(float scale, float depth, unsigned int width, float angle)
{
    if ((lbl_83218BE8 & 1) == 0) {
        float tangent;
        lbl_83218BE8 |= 1;
        tangent = (float)tan(angle * 0.008726646192371845f);
        lbl_83218BE4 = ((float)width * 0.5f) / tangent;
    }
    return (lbl_83218BE4 * scale) / depth;
}
