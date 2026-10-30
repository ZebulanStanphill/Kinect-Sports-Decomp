extern void fn_8265CA20(unsigned int p);
extern unsigned int lbl_8323FDEC[];

void fn_82E1FFE8(void)
{
  if (lbl_8323FDEC[0] != 0) {
    fn_8265CA20(lbl_8323FDEC[0]);
    lbl_8323FDEC[0] = 0;
  }
  if (lbl_8323FDEC[1] != 0) {
    fn_8265CA20(lbl_8323FDEC[1]);
    lbl_8323FDEC[1] = 0;
  }
}
