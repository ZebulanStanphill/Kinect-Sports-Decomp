unsigned __int64 fn_8275FCA0(int param_1)

{
  unsigned char *pbVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  
  pbVar1 = *(unsigned char **)(param_1 + 0x28);
  uVar7 = 0;
  iVar6 = 0;
  uVar5 = 0;
  for (lVar4 = ((unsigned __int64)(*pbVar1 >> 3) & 3) + 1; lVar4 != 0; lVar4 = lVar4 + -1) {
    iVar2 = iVar6 + 1;
    iVar6 = iVar6 + 1;
    uVar7 = (unsigned int)pbVar1[iVar2] << (uVar5 & 0x3f) | uVar7;
    uVar5 = uVar5 + 8;
  }
  uVar3 = 0;
  uVar5 = uVar7;
  if (uVar7 == 0) {
    return uVar3;
  }
  do {
    uVar7 = uVar7 - 1;
    uVar3 = (unsigned __int64)pbVar1[uVar7] ^ uVar3 * 0x21;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  return uVar3;
}

