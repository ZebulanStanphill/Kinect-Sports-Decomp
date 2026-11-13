typedef unsigned char bool;
#define true 1


unsigned int fn_82AC5428(unsigned int param_1,int param_2)

{
  bool bVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar4 = *(unsigned int *)(param_2 + 0x44);
  if (((param_1 < uVar4) || (*(int *)(param_2 + 0x48) + uVar4 < param_1 + 0x18)) ||
     (*(int *)(param_2 + 0x48) + uVar4 < *(unsigned int *)(param_1 + 0x10) + param_1)) {
    return 0x80004005;
  }
  uVar4 = 0;
  puVar5 = (unsigned int *)((*(unsigned int *)(param_1 + 0x10) & 0xfffffffc) + (int)(param_1 + 0x14));
  puVar7 = (unsigned int *)(param_1 + 0x14);
LAB_82ac5578:
  do {
    puVar8 = puVar7;
    if (puVar5 <= puVar7) {
LAB_82ac5580:
      return -(unsigned int)(puVar5 != puVar8) & 0x80004005;
    }
    uVar2 = (unsigned short)*puVar7;
    uVar6 = (unsigned int)uVar2;
    uVar3 = *(unsigned short *)puVar7;
    puVar8 = puVar7 + 1;
    if (uVar6 == 0) {
      uVar4 = uVar4 + 1;
      puVar7 = puVar8;
      if (2 < uVar4) goto LAB_82ac5580;
      goto LAB_82ac5578;
    }
    if (uVar4 == 0) {
      if ((uVar2 & 0xf) != 0) {
        return 0x80004005;
      }
      if (puVar5 <= puVar8) {
        return 0x80004005;
      }
      puVar7 = puVar7 + 2;
      if (*(unsigned int *)(param_2 + 0x50) <= *puVar8) {
        return 0x80004005;
      }
      if (*(unsigned int *)(param_2 + 0x50) < uVar6 * 4 + *puVar8) {
        return 0x80004005;
      }
      bVar1 = 0x200 < (unsigned __int64)(uVar2 >> 2) + (unsigned __int64)uVar3;
    }
    else {
      if (uVar4 == 1) {
        if (uVar3 < 0x2320) {
          return 0x80004005;
        }
        bVar1 = 0x23a0 < uVar6 * 4 + (unsigned int)uVar3;
      }
      else {
        puVar7 = puVar8;
        if (uVar4 != 2) goto LAB_82ac5578;
        if ((uVar2 & 1) != 0) {
          return 0x80004005;
        }
        if (uVar3 < 0x2300) {
          return 0x80004005;
        }
        bVar1 = 0x2320 < (uVar6 & 0xfffe) * 2 + (unsigned int)uVar3;
      }
      if (bVar1) {
        return 0x80004005;
      }
      puVar7 = puVar8 + uVar6;
      bVar1 = puVar5 < puVar7;
    }
    if (bVar1) {
      return 0x80004005;
    }
  } while( true );
}

