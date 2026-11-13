extern int fn_82522D98();
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A40;
extern unsigned int lbl_83265A48;
extern unsigned int lbl_832760AC;
extern unsigned int lbl_832767BC;


void fn_8225B7C8(void)

{
                    /* WARNING: Subroutine does not return */
  fn_82522D98((((unsigned __int64)lbl_83265A48 + 7 & 0xffffffff) >> 3) +
                    (((unsigned __int64)lbl_83265A40 + 7 & 0xffffffff) >> 3) +
                    (((unsigned __int64)lbl_83265A38 + 7 & 0xffffffff) >> 3) +
                    (((unsigned __int64)lbl_832760AC + 7 & 0xffffffff) >> 3) +
                    ((unsigned __int64)lbl_832767BC + 7 & 0x3fffffff) * 4);
}

