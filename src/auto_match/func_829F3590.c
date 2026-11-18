extern double tan(double);
extern const double lbl_82079FB0;
extern float lbl_83218BF4;
extern unsigned int lbl_83218BF8;

/* Projects a screen position at the given depth into a view-space point (x, y, depth, 1). */
void fn_829F3590(float x, float y, float depth, float *out)
{
    float dx;
    float dy;

    if ((lbl_83218BF8 & 1) == 0) {
        lbl_83218BF8 |= 1;
        lbl_83218BF4 = (float)tan(lbl_82079FB0) * 0.00625f;
    }
    dx = x - 160.0f;
    dy = 120.0f - y;
    out[0] = dx * lbl_83218BF4 * depth;
    out[1] = dy * lbl_83218BF4 * depth;
    out[2] = depth;
    out[3] = 1.0f;
}
