extern double fn_82F65018(double y, double x);
extern float lbl_82079FC0;

void fn_829F3AB0(int x1, int y1, int x0, int y0, int *out)
{
    float angle = (float)fn_82F65018((float)(y1 - y0), (float)(x1 - x0));
    int dir = (int)((angle + 3.53429174f) * lbl_82079FC0 * 4.0f) % 8;

    out[0] = dir;
    out[1] = (dir + 7) % 8;
    out[2] = (dir + 1) % 8;
    out[3] = (dir + 6) % 8;
    out[4] = (dir + 2) % 8;
}
