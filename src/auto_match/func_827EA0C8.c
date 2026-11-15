extern const float lbl_82005C8C;
extern int fn_827E9E08(void *, void *, void *, void *, void *, float *, float *);

int fn_827EA0C8(void *a, void *b, void *c, void *d, void *e, float limit, float *out)
{
    float lower = lbl_82005C8C;
    float upper = limit;
    if (fn_827E9E08(a, b, c, d, e, &lower, &upper)) {
        if (upper < limit && upper >= 0.0f && lower < 0.0f) {
            *out = upper;
            return 1;
        }
        if (lower < limit && lower < upper && lower >= 0.0f) {
            *out = lower;
            return 1;
        }
    }
    return 0;
}
