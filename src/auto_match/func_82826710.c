extern void fn_828278F8(void);
extern void fn_82822510(void *list, void (*fn)(void), int *arg, void *out);

void fn_82826710(char *p, int v)
{
    int arg = v;
    int out;
    fn_82822510(p + 0x2fc, fn_828278F8, &arg, &out);
}
