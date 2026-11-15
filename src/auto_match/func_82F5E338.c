extern int fn_829C8668(int, void *, float *);
extern double fabs(double);
extern float lbl_82167C7C;

unsigned char fn_82F5E338(void *source, float value)
{
    float result = value - 1.0f;
    unsigned char success = fn_829C8668(0, source, &result) == 0;
    return success & (fabs((float)(result - value)) < lbl_82167C7C);
}
