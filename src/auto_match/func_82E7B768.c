extern int fn_82E7F520(void *p, int n, const unsigned short *s);
extern void fn_82E80190(void *p);

void fn_82E7B768(void *a, void *p)
{
    if (fn_82E7F520(p, 0x1f, L"en-US") >= 0)
        fn_82E80190(p);
}
