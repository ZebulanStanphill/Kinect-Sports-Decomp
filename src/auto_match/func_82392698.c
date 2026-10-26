typedef struct { unsigned char b[0x90]; } Blob;
extern int fn_8223B610(void *src, void *buf, int n, int a, int b);

void fn_82392698(int param_1, void *param_2, Blob *out)
{
    Blob buf;
    fn_8223B610(param_2, &buf, 0x90, 0, 0);
    if (out != 0) {
        *out = buf;
    }
}
