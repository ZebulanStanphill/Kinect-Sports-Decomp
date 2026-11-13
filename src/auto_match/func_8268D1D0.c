extern void fn_8268D100(void *self, float *v, int arg);

void fn_8268D1D0(void *self, float a, float b, float c, float d, int arg)
{
    float v[6];
    v[0] = a;
    v[1] = b;
    v[2] = c;
    v[3] = b;
    v[4] = c;
    v[5] = d;
    fn_8268D100(self, v, arg);
}
