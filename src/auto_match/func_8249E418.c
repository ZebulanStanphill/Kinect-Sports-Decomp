extern int fn_82F4DA20();
extern int fn_82F4EBC0();
extern int fn_82F4ECF8();
extern int fn_82F4EFF8();
extern unsigned int lbl_82186E64;
extern unsigned int lbl_8327F880;


void fn_8249E418(int param_1)

{
  float fVar1;
  float fVar2;
  __int64 lVar3;
  char cVar6;
  int iVar4;
  int iVar5;
  unsigned int uVar7;
  
  if (1 < *(int *)(param_1 + 0xc4)) {
    return;
  }
  iVar4 = *(int *)(param_1 + 200);
  fVar2 = lbl_8327F880 * lbl_82186E64 * lbl_8327F880 * lbl_82186E64;
  if (iVar4 == 1) {
    fVar1 = *(float *)((*(int *)(param_1 + 0xcc) + 0x2e) * 4 + param_1);
  }
  else {
    if (iVar4 != 2) goto LAB_8249e48c;
    if (*(float *)(param_1 + 0xb8) < fVar2) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0xbc);
  }
  if (fVar1 < fVar2) {
    return;
  }
LAB_8249e48c:
  if ((*(int *)(param_1 + 0xc0) != 0) && (0 < iVar4)) {
    uVar7 = *(unsigned int *)(param_1 + 0xcc);
    if ((iVar4 == 2) && (uVar7 = 0, *(float *)(param_1 + 0xbc) < *(float *)(param_1 + 0xb8))) {
      uVar7 = 1;
    }
    lVar3 = fn_82F4EBC0(uVar7 & 0xff);
    if ((lVar3 != 0) && (cVar6 = fn_82F4EFF8(lVar3), cVar6 != '\0')) {
      iVar4 = fn_82F4DA20(2);
      iVar5 = fn_82F4ECF8(lVar3);
      if (*(int *)(iVar5 * 0x1c0 + iVar4 + 0x34) == *(int *)(param_1 + 0xc0)) {
        return;
      }
    }
  }
  if ((((*(int *)(param_1 + 0x14) != 0) &&
       (iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0xd54), iVar4 != -0x10)) &&
      (*(int *)(iVar4 + 0x18) == 0)) && (iVar5 = *(int *)(iVar4 + 0x14), iVar5 != 0)) {
    uVar7 = (unsigned int)(*(int *)(iVar5 + 8) == 9);
    if (*(int *)(iVar5 + 0x2c) != 0) {
      uVar7 = (unsigned int)LZCOUNT(*(unsigned int *)(*(int *)(iVar5 + 0x2c) + 0x2c)) >> 5 & uVar7;
    }
    if (((((uVar7 != 0) && (iVar4 != -0x10)) &&
         ((*(int *)(iVar4 + 0x14) != 0 &&
          ((*(int *)(iVar4 + 0x18) == 0 &&
           (iVar4 = *(int *)(*(int *)(iVar4 + 0x14) + 0x18), iVar4 != 0)))))) &&
        (*(int *)(iVar4 + 0xe8) != 0)) &&
       (*(int *)(*(int *)(*(int *)(iVar4 + 0xd4) + 0x18) + 0xc) == 0)) {
      *(unsigned int *)(iVar4 + 0xec) = 1;
    }
  }
  return;
}

