extern int fn_82FA5CA0();


unsigned __int64 fn_82FA5E98(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  
  puVar1 = (unsigned int *)param_2;
  if ((puVar1[1] & 2) != 0) {
    uVar3 = (unsigned __int64)*puVar1;
    fn_82FA5CA0();
    iVar2 = (int)uVar3;
    uVar4 = (puVar1[1] & 0xfffffffc) + *(int *)(iVar2 + 4) + 4;
    *(unsigned int *)(iVar2 + 4) = uVar4;
    *(int *)((uVar4 & 0xfffffffc) + iVar2 + 4) = iVar2;
    return uVar3;
  }
  return param_2;
}

