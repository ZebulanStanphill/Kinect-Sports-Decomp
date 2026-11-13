extern int fn_82FA5190();
extern unsigned int lbl_831BC770;


void fn_8304E9D8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  if (*(unsigned int *)(param_1 + 8) != 0) {
    uVar1 = 0;
    if (*(unsigned int *)(param_1 + 4) > 0) {
      iVar2 = 0;
      do {
        if (*(unsigned int *)(iVar2 + *(unsigned int *)(param_1 + 8) + 8) != 0) {
          fn_82FA5190(lbl_831BC770,*(unsigned int *)(iVar2 + *(unsigned int *)(param_1 + 8) + 8));
          *(unsigned int *)(iVar2 + *(unsigned int *)(param_1 + 8) + 8) = 0;
        }
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0xc;
      } while (uVar1 < *(unsigned int *)(param_1 + 4));
    }
    fn_82FA5190(lbl_831BC770,*(unsigned int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned int *)(param_1 + 4) = 0;
    return;
  }
  *(unsigned int *)(param_1 + 4) = 0;
  return;
}

