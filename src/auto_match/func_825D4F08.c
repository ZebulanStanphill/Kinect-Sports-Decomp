extern int lbl_832700D8[];
extern unsigned int lbl_8327F940[];
extern void fn_82547F50(unsigned int, int, void *);
extern void fn_82631920(void *, unsigned int);
extern void fn_82631578(void *, unsigned int);

void fn_825D4F08(void *param_1, unsigned int param_2, unsigned int param_3, int param_4)
{
    if (lbl_832700D8[-1] != param_2) {
        fn_82547F50(param_2, 0, param_1);
        lbl_832700D8[-1] = param_2;
    }
    if (param_3 != 0 && lbl_832700D8[-2] != param_3) {
        fn_82547F50(param_3, 2, param_1);
        lbl_832700D8[-2] = param_3;
    }
    if (param_4 != 0) {
        if (lbl_832700D8[0] != 2) {
            fn_82631920(param_1, lbl_8327F940[-14]);
            fn_82631578(param_1, lbl_8327F940[18]);
            lbl_832700D8[0] = 2;
        }
    } else if (lbl_832700D8[0] != 1) {
        fn_82631920(param_1, lbl_8327F940[-15]);
        fn_82631578(param_1, lbl_8327F940[17]);
        lbl_832700D8[0] = 1;
    }
}
