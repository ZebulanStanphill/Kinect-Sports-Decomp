extern int fn_82CFD5F0();


unsigned __int64 fn_82CEB330(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 == 0) || (iVar3 = *(int *)(param_2 * 4 + iVar1), iVar3 < 0)) {
    uVar4 = 1;
  }
  else {
    iVar2 = *param_3;
    uVar4 = fn_82CFD5F0(param_2 * 0x18 + *(int *)(param_1 + 0x18));
    (**(int (***)())(iVar2 + 0x10))(param_3,iVar1 + iVar3,uVar4);
    uVar4 = 0;
  }
  return uVar4;
}

