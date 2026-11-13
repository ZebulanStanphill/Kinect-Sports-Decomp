typedef unsigned char bool;


unsigned __int64 fn_827887E8(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  bool bVar6;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  uVar2 = *(unsigned int *)(*(int *)((*param_3 >> 6 & 0x3fffffc) + iVar1) + (*param_3 & 0xff) * 0xc + 8);
  uVar3 = *(unsigned int *)(*(int *)((*param_2 >> 6 & 0x3fffffc) + iVar1) + (*param_2 & 0xff) * 0xc + 8);
  uVar4 = *(unsigned int *)(*(int *)((param_3[1] >> 6 & 0x3fffffc) + iVar1) + (param_3[1] & 0xff) * 0xc + 8)
  ;
  uVar5 = *(unsigned int *)(*(int *)((param_2[1] >> 6 & 0x3fffffc) + iVar1) + (param_2[1] & 0xff) * 0xc + 8)
  ;
  if (uVar3 == uVar2) {
    if (uVar5 == uVar4) {
      iVar1 = *(int *)(*param_1 + 0xc);
      uVar2 = *(unsigned int *)(*(int *)((param_3[2] >> 6 & 0x3fffffc) + iVar1) + (param_3[2] & 0xff) * 0xc
                       + 8);
      uVar3 = *(unsigned int *)(*(int *)((param_2[2] >> 6 & 0x3fffffc) + iVar1) + (param_2[2] & 0xff) * 0xc
                       + 8);
      bVar6 = uVar2 <= uVar3;
      uVar2 = uVar2 ^ uVar3;
    }
    else {
      bVar6 = uVar4 <= uVar5;
      uVar2 = uVar4 ^ uVar5;
    }
  }
  else {
    bVar6 = uVar2 <= uVar3;
    uVar2 = uVar2 ^ uVar3;
  }
  return ((~(unsigned __int64)uVar2 & 0xffffffff) >> 0x1f) + (unsigned __int64)bVar6 & 1;
}

