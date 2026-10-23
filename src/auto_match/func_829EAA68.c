extern void fn_829EA350(int p);
extern int fn_82A28E60(int heap, int flags, void *p);
extern int lbl_832179FC;

typedef struct S {
    int pad0;
    void *p4;
} S;

void fn_829EAA68(int param_1)
{
    if (((S *)param_1)->p4 != 0) {
        fn_82A28E60(*(int *)(lbl_832179FC + 0x8f4cc), 0, ((S *)param_1)->p4);
    }
    ((S *)param_1)->p4 = 0;
    fn_829EA350(param_1 + 0x34);
    fn_829EA350(param_1 + 0x6c);
    fn_829EA350(param_1 + 0x54);
}
