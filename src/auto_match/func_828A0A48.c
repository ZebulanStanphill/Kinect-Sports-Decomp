extern void *fn_8289F2E0(void *a, int id);
extern void fn_8289DB38(void *p);

void fn_828A0A48(void *a, int b, int c)
{
    void *r = fn_8289F2E0(a, b);
    if (r) {
        fn_8289DB38(r);
    }
    if (c != b && c != -1) {
        r = fn_8289F2E0(a, c);
        if (r) {
            fn_8289DB38(r);
        }
    }
}
