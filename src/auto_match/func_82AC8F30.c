void fn_82AC8F30(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  uVar1 = (param_2 & 0xffffffff) >> 2;
  uVar2 = uVar1 & 0x3c;
  uVar1 = ((2L << ((uVar1 & 0x3ffffffc) + 3 & 0x3f)) - 1U &
           *(unsigned __int64 *)((((unsigned int)(param_2 >> 8) & 0xffffff) + 1) * 8 + param_1) & -1L << uVar2) >>
          uVar2 & 0xffffffff & param_2 & 0xf;
  if (uVar1 == 0) {
    return;
  }
  iVar3 = ((int)((param_2 & 0xfffffff0) >> 8) + 1) * 8;
  *(unsigned __int64 *)(iVar3 + param_1) =
       *(__int64 *)(iVar3 + param_1) - (uVar1 << ((param_2 & 0xfffffff0) >> 2 & 0x3c));
  return;
}

