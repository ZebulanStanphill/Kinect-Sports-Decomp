extern int fn_8265C940();
extern int XMemSet();
extern unsigned int lbl_83217B8C;
extern unsigned int lbl_83217B90;
extern unsigned int lbl_83217B94;
extern unsigned int lbl_83217B98;
extern unsigned int lbl_83217B9C;
extern unsigned int lbl_83217BA0;


unsigned __int64 fn_829E1C28(void)

{
  lbl_83217B94 = fn_8265C940(1800000,0xffffffffa79d0000);
  lbl_83217B8C = fn_8265C940(0x3840,0xffffffffa79d0000);
  lbl_83217B90 = fn_8265C940(2000,0xffffffffa79d0000);
  lbl_83217B98 = fn_8265C940(0x3840,0xffffffffa79d0000);
  lbl_83217B9C = fn_8265C940(0xe85,0xffffffffa79d0000);
  lbl_83217BA0 = fn_8265C940(2000,0xffffffffa79d0000);
  if ((((lbl_83217B94 != 0) && (lbl_83217B8C != 0)) && (lbl_83217B90 != 0)) &&
     (((lbl_83217B98 != 0 && (lbl_83217B9C != 0)) && (lbl_83217BA0 != 0)))) {
                    /* WARNING: Subroutine does not return */
    XMemSet(lbl_83217B94,0,4);
  }
  return 0xffffffff8007000e;
}

