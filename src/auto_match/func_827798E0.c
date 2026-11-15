extern float lbl_82005328;
extern float lbl_82015438;
extern void fn_82779740(void *, float, float, float);

void fn_827798E0(void *self, int x, int y, int z)
{
    fn_82779740(self, (float)x * lbl_82015438, (float)y * lbl_82005328, (float)z * lbl_82005328);
}
