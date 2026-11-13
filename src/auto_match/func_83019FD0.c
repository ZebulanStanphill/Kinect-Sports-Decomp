extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_83019FD0(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(unsigned int *)(param_1 + 0x10);
  if (iVar1 != *(unsigned int *)(param_1 + 0x14)) {
    do {
      if (*(unsigned int *)(iVar1 + 8) != 0) {
        fn_82FA5190(lbl_831BC768,*(unsigned int *)(iVar1 + 8));
        *(unsigned int *)(iVar1 + 8) = 0;
      }
      *(unsigned int *)(iVar1 + 0xc) = 0;
      *(unsigned int *)(iVar1 + 0x10) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(unsigned int *)(param_1 + 0x14));
  }
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_1 + 0x10);
    fn_82FA5190(lbl_831BC768,*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

