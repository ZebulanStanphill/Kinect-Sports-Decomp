extern int fn_82230040();
extern int fn_8265C9E0();
extern int atexit();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_83283E30;
extern unsigned int uStack_c;


void fn_8310AD80(void)

{
  int iVar1;
  unsigned char **ppuStack_10;
  unsigned int uStack_c;
  
  iVar1 = fn_8265C9E0(0xc);
  if (iVar1 != 0) {
    lbl_83283E30 = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(lbl_83283E30 + 4) = lbl_83283E30;
    atexit(0xffffffff8313b5b0);
    return;
  }
  uStack_c = 0;
  ppuStack_10 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_10);
}

