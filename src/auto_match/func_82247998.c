int fn_82A1BB50(int a, int b, int c, int *handle);
void fn_82A1BB28(int handle, unsigned char *buf, unsigned int *size, int src, int max);
void fn_82A1BC70(int handle);
void fn_8223C478(void *w, int a, int b);
void fn_828E9DB8(void *w, int v, int n);
void fn_828EA2D8(void *w, unsigned char *buf, unsigned int n);

static void WriteBits(void *w, int v, int n)
{
    fn_8223C478(w, n, 0);
    fn_828E9DB8(w, v, n);
}

static void WriteBytes(void *w, unsigned char *buf, unsigned int n)
{
    fn_8223C478(w, n << 3, 0);
    fn_828EA2D8(w, buf, n);
}

void fn_82247998(int unused, void *w, int src)
{
    int hr;
    unsigned int size;
    int handle;
    unsigned char buf[1000];

    handle = 0;
    size = 0;
    hr = fn_82A1BB50(0, 0, 0, &handle);
    if (hr >= 0) {
        size = 1000;
        fn_82A1BB28(handle, buf, &size, src, 1000);
        fn_82A1BC70(handle);
        WriteBits(w, size, 0x20);
        if (size != 0) {
            WriteBytes(w, buf, size);
        }
    }
}
