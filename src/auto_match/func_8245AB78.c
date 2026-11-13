extern int fn_8245AAA8();
extern int fn_8245B458();
extern int fn_8245B630();
extern int fn_82A1DD38();


void fn_8245AB78(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned short uVar5;
  unsigned __int64 uVar4;
  
  iVar3 = (int)param_3;
  if (((iVar3 == 0xb) || (iVar3 == 5)) && (*(int *)(param_2 + 0x800bc) != 0)) {
    uVar2 = 0xc;
    goto LAB_8245ad5c;
  }
  *(unsigned int *)(param_2 + 0x38) = *(unsigned int *)(*(int *)(param_2 + 4) + 0x5c0);
  if (iVar3 == 0xb) {
    uVar5 = *(short *)(param_2 + 0x24) + 1;
    *(unsigned short *)(param_2 + 0x24) = uVar5;
    uVar1 = *(unsigned int *)(param_2 + 0x80074);
    *(unsigned int *)(param_2 + 0x80088) = 0;
    if ((unsigned int)*(unsigned short *)(param_2 + 0x26) <= (unsigned int)uVar5) {
      uVar2 = 0xb;
      goto LAB_8245ad5c;
    }
    if ((unsigned int)uVar5 == *(unsigned short *)(param_2 + 0x26) - 1) {
      uVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x8006c) -
              (__int64)(int)(*(unsigned int *)(param_2 + 0x8006c) / uVar1) * (__int64)(int)uVar1;
      if (uVar4 == 0) {
        uVar4 = (unsigned __int64)uVar1;
      }
      *(int *)(param_2 + 0x20) = (int)uVar4;
    }
    else {
      *(unsigned int *)(param_2 + 0x20) = uVar1;
    }
    fn_82A1DD38(param_2 + 0x66,
                      (__int64)(int)(unsigned int)*(unsigned short *)(param_2 + 0x24) * (__int64)(int)uVar1 +
                      (unsigned __int64)*(unsigned int *)(param_2 + 0x80070),*(unsigned int *)(param_2 + 0x20));
    uVar4 = ((unsigned __int64)*(unsigned int *)(param_2 + 0x80074) - (unsigned __int64)uVar1) +
            (unsigned __int64)*(unsigned int *)(param_2 + 0x20);
LAB_8245acd0:
    uVar2 = fn_8245B458();
    iVar3 = fn_8245B630(uVar2,param_2 + 0xc,uVar4 + 0x5a,param_2);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = fn_8245B458();
    if (*(int *)(iVar3 + 0x588) == 0) {
LAB_8245ac74:
      uVar2 = 1;
      goto LAB_8245ad5c;
    }
    iVar3 = fn_8245B458();
    if (*(int *)(iVar3 + 0x6a4) == 3) {
      uVar2 = 10;
      goto LAB_8245ad5c;
    }
  }
  else {
    if (iVar3 != 5) {
      iVar3 = fn_8245B458();
      if (*(int *)(iVar3 + 0x588) != 0) {
        iVar3 = fn_8245B458();
        uVar2 = 2;
        if (*(int *)(iVar3 + 0x6a4) == 3) {
          uVar2 = param_3;
        }
        goto LAB_8245ad5c;
      }
      goto LAB_8245ac74;
    }
    iVar3 = *(int *)(param_2 + 0x80088) + 1;
    *(int *)(param_2 + 0x80088) = iVar3;
    if (iVar3 < 3) {
      uVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x20);
      goto LAB_8245acd0;
    }
    iVar3 = fn_8245B458();
    if (*(int *)(iVar3 + 0x588) == 0) goto LAB_8245ac74;
    iVar3 = fn_8245B458();
    if (*(int *)(iVar3 + 0x6a4) == 3) {
      uVar2 = 5;
      goto LAB_8245ad5c;
    }
  }
  uVar2 = 2;
LAB_8245ad5c:
  fn_8245AAA8(param_2,uVar2);
  return;
}

