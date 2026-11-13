extern int fn_82CFAE20();
extern int fn_82CFC050();


__int64 fn_82CFAEB0(int param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  lVar4 = *(unsigned int *)(param_1 + 0x14) - uVar2;
  lVar3 = param_3;
  if ((int)lVar4 < (int)param_3) {
    do {
      fn_82CFC050(uVar2 + *(unsigned int *)(param_1 + 0xc),param_2,lVar4);
      param_2 = param_2 + lVar4;
      lVar3 = lVar3 - lVar4;
      iVar5 = *(int *)(param_1 + 0x10) + (int)lVar4;
      *(int *)(param_1 + 0x10) = iVar5;
      iVar1 = fn_82CFAE20(param_1);
      if (iVar1 != iVar5) {
        return param_3 - lVar3;
      }
      uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
      lVar4 = *(unsigned int *)(param_1 + 0x14) - uVar2;
    } while ((int)lVar4 < (int)lVar3);
  }
  fn_82CFC050((unsigned __int64)*(unsigned int *)(param_1 + 0xc) + (unsigned __int64)*(unsigned int *)(param_1 + 0x10),param_2,
               lVar3);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (int)lVar3;
  return param_3;
}

