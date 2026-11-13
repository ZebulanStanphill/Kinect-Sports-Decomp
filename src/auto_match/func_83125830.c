extern int fn_82230040();
extern int fn_8265C9E0();
extern int atexit();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_83297038;
extern unsigned int uStack_c;


void fn_83125830(void)

{
  int iVar1;
  unsigned char **ppuStack_10;
  unsigned int uStack_c;
  
  iVar1 = fn_8265C9E0(0x14);
  if (iVar1 != 0) {
    lbl_83297038 = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(lbl_83297038 + 4) = lbl_83297038;
    *(int *)(lbl_83297038 + 8) = lbl_83297038;
    *(unsigned char *)(lbl_83297038 + 0x10) = 1;
    *(unsigned char *)(lbl_83297038 + 0x11) = 1;
    atexit(0xffffffff8313fa00);
    return;
  }
  uStack_c = 0;
  ppuStack_10 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_10);
}

