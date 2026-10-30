extern char *fn_82FF7548(void *h);
extern void fn_8300C968(void *p, void *arg);
extern void *lbl_832642E8;

void fn_8300C920(void *arg)
{
    char *p = fn_82FF7548(lbl_832642E8);
    if (p != 0) {
        fn_8300C968(p + 0x14, arg);
    }
}
