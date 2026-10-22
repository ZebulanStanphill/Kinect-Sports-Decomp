extern void fn_826C35B8(void *p, void *a, void (*f)(void));
extern void fn_826B1688(void *p, void *a, void *b, int c);
extern void fn_8273E000(void);
extern char lbl_82012290[];
extern char lbl_820122E8[];
extern char lbl_82012148[];

void **fn_8273E870(void **param_1, void *param_2)
{
    fn_826C35B8(param_1, param_2, fn_8273E000);
    param_1[0] = lbl_820122E8;
    param_1[4] = lbl_82012290;
    param_1[0xd] = 0;
    fn_826B1688(param_1 + 4, param_2, lbl_82012148, 7);
    return param_1;
}
