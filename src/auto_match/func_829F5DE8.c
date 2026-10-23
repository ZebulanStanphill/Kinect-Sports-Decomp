extern void fn_82647460(void *p);
extern void fn_82647538(void *p);
extern void fn_829F54F0(void *p);
extern void fn_82A0D720(void *p);
extern void fn_82BA02A8(void *p);

void fn_829F5DE8(char *param_1)
{
    void **p;

    if (*(void **)(param_1 + 0x10640) != 0) {
        *(void **)(param_1 + 0x10640) = 0;
    }
    fn_829F54F0(param_1 + 0x10);
    fn_82A0D720(param_1 + 0xb0);
    fn_82BA02A8(param_1 + 0xd0);
    p = (void **)(param_1 + 0x10644);
    if (*p != 0) {
        fn_82647538(*p);
        fn_82647460(*p);
        *p = 0;
    }
}
