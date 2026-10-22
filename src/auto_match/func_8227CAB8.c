extern int fn_82528BF8(void *obj, void *a, unsigned short *out, int n, int b, int c);

void fn_8227CAB8(void *a, void *b, unsigned short *out, void *arg)
{
    if ((a == 0 || fn_82528BF8(a, arg, out, 0x20, 0, 1) == 0) &&
        (b == 0 || fn_82528BF8(b, arg, out, 0x20, 0, 1) == 0)) {
        *out = 0;
    }
}
