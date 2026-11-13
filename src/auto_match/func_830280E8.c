extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_830280E8(int param_1)

{
  int iVar1;
  
  iVar1 = *(unsigned int *)(param_1 + 100);
  if (iVar1 != *(unsigned int *)(param_1 + 0x68)) {
    do {
      if (*(unsigned int *)(iVar1 + 0x14) != 0) {
        fn_82FA5190(lbl_831BC768, *(unsigned int *)(iVar1 + 0x14));
        *(unsigned int *)(iVar1 + 0x14) = 0;
      }
      *(unsigned int *)(iVar1 + 0x18) = 0;
      *(unsigned int *)(iVar1 + 0x1c) = 0;
      iVar1 = iVar1 + 0x20;
    } while (iVar1 != *(unsigned int *)(param_1 + 0x68));
  }
  *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_1 + 100);
  return;
}

