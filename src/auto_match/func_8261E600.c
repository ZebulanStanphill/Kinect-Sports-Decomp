extern int fn_8261E8E8();
extern int fn_8261FF40();
extern int fn_826200B0();
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8261E600(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  iVar4 = *(int *)(param_1 + 0x21c);
  if (iVar4 == 2) {
    if ((*(int *)(param_1 + 0x330) == 0) || ((*(unsigned int *)(param_1 + 0x310) & 0x40) != 0))
    goto LAB_8261e634;
LAB_8261e66c:
    if (*(int *)(param_1 + 0x218) == 2) goto LAB_8261e634;
  }
  else {
    if ((iVar4 != 1) && (iVar4 != 0)) goto LAB_8261e66c;
LAB_8261e634:
    iVar4 = *(int *)(param_1 + 0x218);
    if (iVar4 == 2) {
      if ((*(int *)(param_1 + 0x330) == 0) || ((*(unsigned int *)(param_1 + 0x310) & 0x40) != 0)) {
LAB_8261e690:
        iVar4 = 0x10;
        if (*(char *)(param_1 + 0x200) != '\x03') {
          iVar4 = 0x20;
        }
      }
    }
    else if ((iVar4 == 1) || (iVar4 == 0)) goto LAB_8261e690;
  }
  iVar1 = *(int *)(param_1 + 0x220);
  if (((param_2 == 0) || (param_3 == 0)) || (*(int *)(param_1 + 0x1fc) == 0)) {
    *(unsigned int *)(param_1 + 0x1f8) = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 == 0) {
      uVar3 = fn_8261FF40(param_1,param_2,param_3,*(unsigned int *)(param_2 + 8));
    }
    else {
      if (iVar2 == 1) {
        uVar5 = 0;
      }
      else {
        if (iVar2 != 3) {
          uVar3 = 0;
          goto LAB_8261e710;
        }
        uVar5 = 1;
      }
      uVar3 = fn_826200B0(param_1,param_2,param_3,*(unsigned int *)(param_2 + 8),uVar5);
    }
LAB_8261e710:
    *(unsigned int *)(param_1 + 0x1f8) = uVar3;
  }
  if (iVar4 == iVar1) {
    return 0;
  }
  if (iVar4 == 2) {
    iVar2 = *(int *)(param_1 + 0x330);
    if ((iVar2 == 0) || ((*(unsigned int *)(param_1 + 0x310) & 0x40) != 0)) {
      if ((param_2 != 0) && (param_3 != 0)) {
        iVar4 = fn_8261E8E8(param_1);
      }
      if (iVar4 == iVar1) {
        return 0;
      }
      if (iVar4 != 2) goto LAB_8261e79c;
      if (iVar2 == 0) {
        return 0;
      }
      if ((*(unsigned int *)(param_1 + 0x310) & 0x40) != 0) {
        return 0;
      }
    }
  }
  else {
LAB_8261e79c:
    if (iVar1 != 2) goto LAB_8261e7c0;
  }
  uVar3 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x450) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x44c) = uVar3;
  *(unsigned int *)(param_1 + 0x448) = uVar3;
  *(unsigned int *)(param_1 + 0x1c0) = 1;
  *(unsigned int *)(param_1 + 0x1c4) = 1;
LAB_8261e7c0:
  if (*(int *)(param_1 + 0x22c) == 0) {
    *(unsigned int *)(param_1 + 0x224) = *(unsigned int *)(param_1 + 0x220);
  }
  *(int *)(param_1 + 0x220) = iVar4;
  *(unsigned int *)(param_1 + 0x228) = 1;
  *(unsigned int *)(param_1 + 0x22c) = (unsigned int)LZCOUNT(iVar4 - *(int *)(param_1 + 0x21c)) >> 5;
  return 1;
}

