extern int fn_82F0F9A0();


void fn_82F01538(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  if (((param_3 < 0x1001) && (*(__int64 *)(param_1 + 0x2e0) != 1)) && (0xb < param_3)) {
    iVar4 = 0;
    if ((*(int *)(param_1 + 0x7660) == 0) || (iVar2 = *(int *)(param_1 + 0x7610), iVar2 < 2)) {
      if (*(int *)(param_1 + 0x78b8) == 0) {
        iVar2 = *(int *)(param_1 + 0x588);
        iVar1 = *(int *)(param_1 + 0x10) * 4;
        if (iVar2 <= *(int *)(iVar1 + -0x7ce567c8)) {
          return;
        }
        if (iVar2 < *(int *)(iVar1 + -0x7ce567b8)) {
          iVar4 = 0;
        }
        else if (iVar2 < *(int *)(iVar1 + -0x7ce567a8)) {
          iVar4 = 1;
        }
        else if (iVar2 < *(int *)(iVar1 + -0x7ce56798)) {
          iVar4 = 2;
        }
        else if (iVar2 < *(int *)(iVar1 + -0x7ce56788)) {
          iVar4 = 3;
        }
        else {
          iVar4 = 4;
          if (*(int *)(iVar1 + -0x7ce56778) <= iVar2) {
            iVar4 = 5;
          }
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x78f0);
      }
      iVar2 = iVar4 * 0x10;
      uVar3 = *(unsigned int *)(iVar2 + -0x7ce56828);
    }
    else {
      if (iVar2 == 2) {
        iVar4 = 1;
      }
      else if (iVar2 == 3) {
        iVar4 = 2;
      }
      iVar2 = iVar4 * 0x10;
      uVar3 = *(unsigned int *)(iVar2 + -0x7ce56828);
    }
    *(unsigned int *)(param_1 + 0x530c) = uVar3;
    *(unsigned int *)(param_1 + 0x5310) = *(unsigned int *)(iVar2 + -0x7ce56824);
    *(unsigned int *)(param_1 + 0x5314) = *(unsigned int *)(iVar2 + -0x7ce56820);
    *(unsigned int *)(param_1 + 0x5318) = *(unsigned int *)(iVar2 + -0x7ce5681c);
    *(int *)(param_1 + 0x531c) = iVar4 * 0x28 + -0x7ce56768;
    fn_82F0F9A0(param_1,0x16);
  }
  return;
}

