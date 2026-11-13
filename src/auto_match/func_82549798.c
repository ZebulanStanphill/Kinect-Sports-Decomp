extern unsigned int fn_8280A620(unsigned int n);
extern void fn_82A1F198(void *base, int size, unsigned int align, unsigned int flags);
extern void *lbl_83297844;

void fn_82549798(void *base, unsigned int align, unsigned int flags)
{
    if (lbl_83297844 != 0 && lbl_83297844 == base) {
        __debugbreak();
    }
    fn_82A1F198(base, -1, fn_8280A620(align), flags);
}
