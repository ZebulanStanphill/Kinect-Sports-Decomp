extern int fn_829DB450(void *source, float *a, float *b, int *flags, float *c);
extern void fn_829E3810(void *obj, float v);
extern void fn_829E3820(void *obj, float v);
extern void fn_829E3830(void *obj, float v);
extern void fn_829E3840(void *obj, float v);

int fn_829E5558(void *obj, int unused1, int unused2, void **out)
{
    float a;
    float b;
    float c;
    int flags;
    int hr;

    hr = fn_829DB450(obj, &a, &b, &flags, &c);
    if (hr >= 0) {
        fn_829E3830(obj, 30.0f);
        fn_829E3840(obj, b);
        fn_829E3820(obj, a);
        fn_829E3810(obj, c);
        *out = obj;
    }
    return hr;
}
