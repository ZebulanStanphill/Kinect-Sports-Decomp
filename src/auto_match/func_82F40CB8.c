unsigned __int64 fn_82F40CB8(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 4);
  if ((param_2 != 0) && (iVar1 == 2)) {
    return uVar2;
  }
  if (iVar1 == 1) {
    return uVar2;
  }
  if (iVar1 == 3) {
    return uVar2;
  }
  return 0xffffffff80004001;
}

