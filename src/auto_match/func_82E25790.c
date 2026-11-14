extern int fn_82E4C0D8(void *self, unsigned char *out1, unsigned int *out2, int a4, int a5,
                       int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13,
                       int a14, unsigned char a15, unsigned char a16, unsigned char a17);

int fn_82E25790(void *self, unsigned char *out1, unsigned int *out2)
{
    if (self == 0)
        return 1;
    fn_82E4C0D8(self, out1, out2, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 6);
    return 0;
}
