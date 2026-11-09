extern void fn_8280A668(void *self, float *x, float *y);
extern void fn_8281D9B0(void *self, void *arg, float x, float y);

void fn_8281E0D0(void *self, void *arg)
{
    float y;
    float x;

    fn_8280A668(self, &x, &y);
    fn_8281D9B0(self, arg, x, y);
}
