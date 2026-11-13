#define true 1


unsigned __int64 fn_828866B8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  uVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x74);
  iVar2 = *(int *)((int)((uVar3 + 9 & 0xffffffff) << 2) + iVar1);
  while( true ) {
    if (iVar2 == param_2) {
      return 1;
    }
    if ((int)uVar3 == *(int *)(iVar1 + 0x78)) break;
    uVar3 = uVar3 + 1;
    uVar3 = -(((uVar3 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar3 < 0x14)) & uVar3;
    iVar2 = *(int *)((int)((uVar3 + 9 & 0xffffffff) << 2) + iVar1);
  }
  return 0;
}

