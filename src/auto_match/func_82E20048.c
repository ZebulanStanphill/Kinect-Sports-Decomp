extern void fn_8265CA20(void *);
extern void *fn_82E1F690(int);
extern void *lbl_8323FDEC;
void fn_82E20048(int param_1)
{
  if (lbl_8323FDEC != 0) {
    fn_8265CA20(lbl_8323FDEC);
    lbl_8323FDEC = 0;
  }
  lbl_8323FDEC = fn_82E1F690(param_1);
}
