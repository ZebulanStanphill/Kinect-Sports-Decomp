extern int fn_82643D58();


unsigned __int64 fn_82643E10(int param_1,unsigned __int64 param_2,unsigned int *param_3,__int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  uVar4 = (unsigned __int64)(*param_3 >> 2);
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3b18);
  if ((param_2 & 1) == 0) {
    if (uVar6 == 0) {
      uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30) + 4;
    }
    uVar6 = uVar6 + 0x1f & 0xffffffe0;
    if (uVar4 == 0) {
      uVar4 = 0x38;
    }
    uVar3 = (unsigned __int64)(*(unsigned int *)(param_1 + 0x3b14) >> 2);
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    uVar8 = uVar3 * 4 + uVar6;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 0x3b10) < (uVar8 & 0xffffffff)) {
      uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3b10);
    }
    uVar7 = (unsigned __int64)((int)uVar8 - (int)uVar6 >> 2);
    uVar5 = (int)((~uVar7 & 0xffffffff) >> 0x1f) + (unsigned int)(uVar4 <= uVar7) & 1;
    if (*(unsigned int *)(param_1 + 0x3b2c) <
        (unsigned int)(((int)(*(unsigned int *)(param_1 + 0x3b20) - *(int *)(param_1 + 0x3b0c)) >> 2) << 2)) {
      uVar5 = 1;
    }
    if (uVar5 != 0) {
      uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3b20) + 0x1f & 0xffffffe0;
      *(int *)(param_1 + 0x3b20) = *(int *)(param_1 + 0x3b0c);
      *(int *)(param_1 + 0x3b1c) = *(int *)(param_1 + 0x3b1c) + 1;
      uVar8 = uVar3 * 4 + uVar6;
      *(unsigned char *)(param_1 + 0x2abe) = *(unsigned char *)(param_1 + 0x2abe) | 4;
    }
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3460);
    if (uVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x3464);
      iVar2 = *(int *)(param_1 + 0x3b1c);
      if ((iVar1 - iVar2 == -1) || ((iVar1 == iVar2 && (uVar3 < (uVar8 & 0xffffffff))))) {
        if (iVar2 != iVar1) {
          return 0;
        }
        uVar8 = uVar3;
        if ((int)(*(unsigned int *)(param_1 + 0x3460) - (int)uVar6) >> 2 < (int)uVar4) {
          return 0;
        }
      }
    }
    fn_82643D58(param_1,uVar8,*(unsigned int *)(param_1 + 0x3b1c));
    *param_3 = ((int)uVar8 - (int)uVar6 >> 2) << 2;
    return uVar6;
  }
  if (uVar6 == 0) {
    uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x34) + 0x44;
  }
  uVar5 = *(unsigned int *)(param_1 + 0x3b1c);
  uVar3 = (unsigned __int64)uVar5;
  uVar8 = (uVar6 + param_4) - 1 & ~(param_4 - 1U);
  uVar6 = uVar4 * 4 + uVar8;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x3b10) < (uVar6 & 0xffffffff)) {
    uVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x3b20) + param_4) - 1 & ~(param_4 - 1U);
    uVar6 = uVar4 * 4 + uVar8;
    if ((((unsigned __int64)*(unsigned int *)(param_1 + 0x3460) == 0) ||
        ((*(unsigned int *)(param_1 + 0x3464) != uVar5 &&
         ((*(unsigned int *)(param_1 + 0x3464) - uVar5 != 1 ||
          ((uVar6 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0x3460))))))) &&
       ((uVar6 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0x3b24))) {
      uVar3 = uVar3 + 1;
      *(int *)(param_1 + 0x3b20) = (int)uVar6;
      goto LAB_82643f04;
    }
  }
  else if (((unsigned __int64)*(unsigned int *)(param_1 + 0x3460) == 0) ||
          ((*(unsigned int *)(param_1 + 0x3464) - uVar5 != -1 &&
           ((*(unsigned int *)(param_1 + 0x3464) != uVar5 ||
            ((uVar6 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0x3460))))))) {
    *(int *)(param_1 + 0x3b18) = (int)uVar6;
LAB_82643f04:
    fn_82643D58(param_1,uVar6,uVar3);
    return uVar8;
  }
  return 0;
}

