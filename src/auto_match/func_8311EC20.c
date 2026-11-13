extern int fn_82230040();
extern int fn_8265C9E0();
extern int atexit();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_83292C84;
extern unsigned int uStack_c;


void fn_8311EC20(void)

{
  int iVar1;
  unsigned char **ppuStack_10;
  unsigned int uStack_c;
  
  iVar1 = fn_8265C9E0(0x1c);
  if (iVar1 != 0) {
    lbl_83292C84 = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(lbl_83292C84 + 4) = lbl_83292C84;
    *(int *)(lbl_83292C84 + 8) = lbl_83292C84;
    *(unsigned char *)(lbl_83292C84 + 0x18) = 1;
    *(unsigned char *)(lbl_83292C84 + 0x19) = 1;
    atexit(0xffffffff8313e4f0);
    return;
  }
  uStack_c = 0;
  ppuStack_10 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_10);
}

