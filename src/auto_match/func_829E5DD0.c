extern float lbl_82057B94;
extern unsigned char fn_829E5BC0(void *obj, float a);

unsigned char fn_829E5DD0(void *obj, float a, float b)
{
    float d = lbl_82057B94;
    unsigned char big;

    if (b >= d) {
        d = b;
    }
    big = a > 100.0f && a / d > 2.0f;
    return big || fn_829E5BC0(obj, a);
}
