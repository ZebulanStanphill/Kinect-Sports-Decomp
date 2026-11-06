extern void *lbl_831E7E64;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_8267F340(void *mem, int a, int b);

void *fn_8267F440(int a, int b)
{
    void *mem = fn_8267B890(lbl_831E7E64, 0x18, 0);
    if (mem != 0) {
        return fn_8267F340(mem, a, b);
    }
    return 0;
}
