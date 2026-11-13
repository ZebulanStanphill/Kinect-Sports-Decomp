extern int fn_82230040();
extern int fn_8265C9E0();
extern int atexit();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_83297008;
extern unsigned int uStack_c;


void fn_831256C8(void)

{
  int iVar1;
  unsigned char **ppuStack_10;
  unsigned int uStack_c;
  
  iVar1 = fn_8265C9E0(0x18);
  if (iVar1 != 0) {
    lbl_83297008 = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(lbl_83297008 + 4) = lbl_83297008;
    *(int *)(lbl_83297008 + 8) = lbl_83297008;
    *(unsigned char *)(lbl_83297008 + 0x14) = 1;
    *(unsigned char *)(lbl_83297008 + 0x15) = 1;
    atexit(0xffffffff8313f940);
    return;
  }
  uStack_c = 0;
  ppuStack_10 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_10);
}

