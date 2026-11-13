extern int fn_82815268();
extern int fn_828162C0();
extern int (*lbl_8320A5C8)();


unsigned __int64 fn_828163A8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  if (param_3 != 0) {
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0xc) | 0x10;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar2 = *(int *)(param_2 + 0x24);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_2 + 0x18);
    }
    iVar1 = *(int *)(param_2 + 8);
    uVar3 = (unsigned __int64)*(unsigned int *)(param_2 + 4) + 0x7f & ~((unsigned __int64)*(unsigned int *)(param_2 + 4) - 1);
    *(int *)(param_2 + 8) = (int)uVar3 + iVar1;
    if ((*(unsigned int *)(param_2 + 0x10) & 2) == 0) {
      uVar4 = (*lbl_8320A5C8)(iVar2,iVar1,uVar3,*(unsigned int *)(param_2 + 0x1c));
      uVar4 = fn_828162C0(param_1,param_2,uVar4);
    }
    else {
      (**(int (***)())(param_1 + 4))();
    }
  }
  else {
    uVar4 = fn_82815268(param_1,param_2,*(unsigned int *)(param_2 + 0x14));
  }
  return uVar4;
}

