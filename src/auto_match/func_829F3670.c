extern double tan(double);
extern const double lbl_82079FB0;
extern float lbl_83218BFC;
extern unsigned int lbl_83218C00;

/* Projects a screen position at the given depth into a view-space point (x, y, depth, 1). */
void fn_829F3670(float x, float y, float depth, float *out)
{
    float dx;
    float dy;

    if ((lbl_83218C00 & 1) == 0) {
        lbl_83218C00 |= 1;
        lbl_83218BFC = (float)tan(lbl_82079FB0) * 0.025f;
    }
    dx = x - 40.0f;
    dy = 30.0f - y;
    out[0] = dx * lbl_83218BFC * depth;
    out[1] = dy * lbl_83218BFC * depth;
    out[2] = depth;
    out[3] = 1.0f;
}
