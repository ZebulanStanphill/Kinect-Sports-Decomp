extern unsigned int stack0x00000010;
extern unsigned int stack0xfffffff8;
extern unsigned int uStack00000010;
extern unsigned int uStack_10;


unsigned __int64 fn_82AC4830(unsigned __int64 param_1,int *param_2,int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char *pbVar6;
  unsigned int uVar7;
  unsigned __int64 *puVar8;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack_10;
  
  uStack00000010 = param_1;
  uStack00000010 = ((((unsigned __int64)(uStack00000010)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)param_1)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  puVar8 = &uStack_10;
  pbVar6 = (unsigned char *)&stack0x00000010;
  uStack_10 = param_1 & 0x70000f700;
  do {
    bVar1 = *(unsigned char *)puVar8;
    bVar2 = *pbVar6;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    puVar8 = (unsigned __int64 *)((int)puVar8 + 1);
    pbVar6 = pbVar6 + 1;
  } while (puVar8 != (unsigned __int64 *)&stack0xfffffff8);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
    return 0xffffffff80004005;
  }
  iVar3 = *param_2;
  uVar5 = (((unsigned __int64)(uStack00000010) >> 32) & 0xFFFFFFFF) >> 9 & 3;
  uVar4 = param_2[iVar3 * 4 + 3];
  uVar7 = uVar4 & 0xffffefff;
  param_2[iVar3 * 4 + 3] = uVar7;
  if (uVar5 == 0) {
    return 0xffffffff80004005;
  }
  if (uVar5 == 1) {
    if ((param_1 & 0x700000000) != 0) {
      return 0xffffffff80004005;
    }
    if (*(char *)(param_3 + 0x28) != '\0') {
      return 0xffffffff80004005;
    }
    if ((uVar4 & 0x800) != 0) {
      return 0xffffffff80004005;
    }
    uVar7 = uVar7 | 0x1800;
  }
  else {
    if (2 < uVar5) {
      if (uVar5 == 3) {
        return 0xffffffff80004005;
      }
      goto LAB_82ac4928;
    }
    if ((param_1 & 0x700000000) != 0) {
      return 0xffffffff80004005;
    }
    if ((uVar4 & 0x400) != 0) {
      return 0xffffffff80004005;
    }
    uVar7 = uVar7 | 0x400;
  }
  param_2[iVar3 * 4 + 3] = uVar7;
LAB_82ac4928:
  uVar4 = param_2[iVar3 * 4 + 3];
  param_2[iVar3 * 4 + 3] = uVar4 | 0x200;
  if ((param_1 & 0x100) == 0) {
    param_2[iVar3 * 4 + 3] = uVar4 & 0xffffffbf | 0x200;
  }
  return 0;
}

