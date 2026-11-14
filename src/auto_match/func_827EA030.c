extern int fn_827E9E08(void *, void *, void *, void *, void *, float *, float *);

int fn_827EA030(void *a, void *b, void *c, void *d, void *e, float limit, float *out)
{
    float lower = 0.0f, upper = limit;
    if (fn_827E9E08(a, b, c, d, e, &lower, &upper)) {
        if (lower <= upper && lower <= limit && upper >= 0.0f && lower >= 0.0f) {
            *out = lower;
            return 1;
        }
    }
    return 0;
}
