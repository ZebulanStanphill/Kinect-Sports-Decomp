extern int fn_82372F88();
extern unsigned int lbl_831D1B44;


unsigned __int64 fn_8238BB70(int param_1)

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  *(unsigned int *)(param_1 + 0x18) = lbl_831D1B44;
  if (*(int *)(param_1 + 0x20) == 0) {
    if (*(int *)(iVar1 + 0x204) == 0) {
      lVar2 = fn_82372F88(iVar1);
      iVar3 = (int)(lVar2 + 1) - ((int)lVar2 + (unsigned int)(lVar2 + 1 == 0));
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x658);
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(iVar1 + 0x94);
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + 0x50);
  }
  if ((iVar3 != 0) && (*(int *)(iVar1 + 0x1c) != 0)) {
    return 1;
  }
  return 0;
}

