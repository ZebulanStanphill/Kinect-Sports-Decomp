extern void fn_8265CA20(void *p);
extern void *fn_82E1F690(int a);
extern void *lbl_8323FDEC[];

void fn_82E200A0(int a)
{
    if (lbl_8323FDEC[1] != 0) {
        fn_8265CA20(lbl_8323FDEC[1]);
        lbl_8323FDEC[1] = 0;
    }
    lbl_8323FDEC[1] = fn_82E1F690(a);
}
