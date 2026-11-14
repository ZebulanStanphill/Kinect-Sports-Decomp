extern void fn_82F55CC8(float *x, float *y);
extern const float lbl_82057270;
extern const float lbl_82010E78;

int fn_82F55D50(void)
{
    float x = 0.0f;
    float y = 0.0f;

    fn_82F55CC8(&x, &y);
    if (x < lbl_82057270 && x > 0.0f && y < lbl_82010E78 && y > 0.0f)
        return 1;
    return 0;
}
