void fn_82639720(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  
  uVar3 = (param_3 & 0x3fffffff) << 2;
  uVar4 = *(unsigned char *)(param_1 + param_2 + 0x2f92);
  iVar5 = (param_2 + 0x30) * 0x18 + param_1;
  uVar2 = uVar4 & 0xfffffffb | uVar3;
  uVar1 = (int)((uVar4 & 0xfffffffb | uVar3) >> 2) - 1;
  *(unsigned int *)(iVar5 + 0x10) =
       *(unsigned int *)(iVar5 + 0x10) & 0xfffffffc |
       ((*(unsigned int *)(iVar5 + 0xc) >> 1 & 0x7ff00000 | *(unsigned int *)(iVar5 + 0xc) & 0x80000) >> 0x13 &
       uVar1) + (uVar2 & ~uVar1) & 3;
  *(char *)(param_1 + param_2 + 0x2f92) = (char)uVar2;
  *(unsigned __int64 *)(param_1 + 0x18) =
       0x8000000000000000U >> (param_2 + 0x20U) | *(unsigned __int64 *)(param_1 + 0x18);
  return;
}

