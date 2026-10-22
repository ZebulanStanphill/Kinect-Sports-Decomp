extern int fn_82FA5190(void *a, void *b);
extern int fn_82FA8F70(void *p);
extern int fn_82FAE040(void *p);
extern int fn_82FB3470(void *p);
extern int fn_82FB36E0(void *p);
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216CCE8;
extern unsigned int lbl_8216CCF0;
extern unsigned int lbl_8216CD08;
extern void *lbl_831BC768;

void fn_82FACDB0(void **param_1)
{
    param_1[0] = &lbl_8216CD08;
    param_1[1] = &lbl_8216CCF0;
    param_1[4] = &lbl_8216CCE8;
    param_1[6] = &lbl_8216CC7C;
    fn_82FB36E0(param_1 + 0xe);
    if (param_1[0x1b] != 0) {
        param_1[0x1c] = param_1[0x1b];
        fn_82FA5190(lbl_831BC768, param_1[0x1b]);
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
    }
    if (param_1[0x18] != 0) {
        fn_82FAE040(param_1[0x18]);
    }
    fn_82FB3470(param_1 + 0xe);
    fn_82FA8F70(param_1);
}
