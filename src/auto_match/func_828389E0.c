extern int fn_82F68B58();
extern unsigned int lbl_8320A898;


void fn_828389E0(int param_1,__int64 param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  if (*(int *)(param_1 + 0x1c) == 4) {
    uVar3 = 0x8000000000000000 >> (param_2 + 0x20U & 0x7f);
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x34) + param_3 * 4);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      uVar2 = *(unsigned int *)(param_1 + 0x34);
      uVar3 = 0x8000000000000000 >> (param_2 + 0x20U & 0x7f);
    }
    else if (iVar1 == 2) {
      uVar2 = *(unsigned int *)(param_1 + 0x34);
      uVar3 = 0x8000000000000000 >> (param_2 + 0x20U & 0x7f);
    }
    else if (iVar1 == 3) {
      uVar2 = *(unsigned int *)(param_1 + 0x34);
      uVar3 = 0x8000000000000000 >> (param_2 + 0x20U & 0x7f);
    }
    else if (iVar1 == 4) {
      uVar2 = **(unsigned int **)(param_1 + 0x34);
      uVar3 = 0x8000000000000000 >> (param_2 + 0x20U & 0x7f);
    }
    else {
      if (iVar1 != 5) {
        return;
      }
      uVar2 = *(unsigned int *)(param_1 + 0x34);
      uVar3 = 0x8000000000000000 >> (param_2 + 0x20U & 0x7f);
    }
  }
  fn_82F68B58(lbl_8320A898,param_2,uVar2,uVar3);
  return;
}

