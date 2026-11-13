extern float lbl_8201E048;

int fn_82810470(float *v)
{
    if (v[0] * v[0] + v[1] * v[1] + v[2] * v[2] < lbl_8201E048) {
        return 1;
    }
    return 0;
}
