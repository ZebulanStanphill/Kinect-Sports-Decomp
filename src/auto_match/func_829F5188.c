extern void *lbl_83218C38;
extern int fn_829F8170(void *ctx, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8,
                       int a9, int a10, int a11, int a12, int a13, int a14, int a15, void *a16);

int fn_829F5188(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8,
                int a9, int a10, int a11, int a12, int a13, int a14, int a15, void *a16)
{
    if (a16 == 0 || lbl_83218C38 == 0) {
        return 0x57;
    }
    return fn_829F8170(lbl_83218C38, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}
