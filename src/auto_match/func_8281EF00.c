typedef struct Vec4_8281EF00 {
    float x;
    float y;
    float z;
    float w;
} Vec4_8281EF00;

extern void fn_82811D50(void *out, Vec4_8281EF00 *v, float *w);

void fn_8281EF00(Vec4_8281EF00 *v, void *out)
{
    fn_82811D50(out, v, &v->w);
}
