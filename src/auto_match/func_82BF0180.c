extern int fn_82BE1A10();
extern int fn_82BE1FC0();
extern int fn_82BE1FE8();
extern int fn_82BE5240();
extern int fn_82BEF650();
extern int fn_82BF1318();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82BF0180(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  __int64 lVar6;
  int iVar7;
  
  if (param_2 == 0) {
    uVar2 = fn_82BE5240(param_1,0x197,0xffffffff82196582);
    return uVar2;
  }
  if ((*(int *)(param_1 + 0x3c) == 0) ||
     (iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 0xe0), iVar4 == 0)) {
    return 0x197;
  }
  if (*(int *)(iVar4 + 0x14) == 2) {
    uVar2 = fn_82BE1A10();
    iVar4 = fn_82BE1FC0(uVar2,0x10);
    if (iVar4 != 0) {
      return 0;
    }
  }
  fn_82BE1A10();
  uVar2 = fn_82BE1FE8();
  uVar3 = fn_82BE1A10();
  iVar5 = fn_82BE1FC0(uVar3,0x400);
  iVar7 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 0xe0);
  if (iVar5 == 0) {
    *(float *)(iVar4 + 0x20) = *(float *)(param_2 + 0x18) + *(float *)(iVar4 + 0x20);
    iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 0xe0);
    *(int *)(iVar4 + 0x18) = *(int *)(param_2 + 0x14) + *(int *)(iVar4 + 0x18);
    iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 0xe0);
    *(float *)(iVar4 + 0x28) = *(float *)(param_2 + 0x20) + *(float *)(iVar4 + 0x28);
    iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 0xe0);
    *(short *)(iVar4 + 0x24) = *(short *)(iVar4 + 0x24) + 1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 0xe0);
    *(short *)(iVar4 + 0x1c) = *(short *)(iVar4 + 0x1c) + 1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 0xe0);
    *(short *)(iVar4 + 0x2c) = *(short *)(iVar4 + 0x2c) + 1;
    if (*(__int64 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x40) == 0) {
      *(unsigned __int64 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x40) = uVar2;
    }
    lVar6 = *(__int64 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x50);
    if (lVar6 != 0) {
      iVar7 = (int)uVar2 - (int)lVar6;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 0xe0);
    *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + iVar7;
    iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 0xe0);
    *(int *)(iVar4 + 0x34) = iVar7 + *(int *)(iVar4 + 0x34);
    iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 0xe0);
    *(int *)(iVar4 + 0x38) = *(int *)(iVar4 + 0x38) + iVar7;
    if ((*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x14) == 1) &&
       (iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x1c) + 0x4c), iVar4 != 0)) {
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + iVar7;
      *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + iVar7;
    }
    *(unsigned __int64 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x50) = uVar2;
    *(unsigned __int64 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x48) = uVar2;
    if ((((40000 < *(unsigned short *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x1c)) ||
         (iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + 0xe0), 40000 < *(unsigned short *)(iVar4 + 0x24))) ||
        (40000 < *(unsigned short *)(iVar4 + 0x2c))) && (*(int *)(param_1 + 0x2c) != 0)) {
      fn_82BF1318(*(int *)(param_1 + 0x2c),*(unsigned int *)(param_1 + 0x44));
      fn_82BEF650(param_1,*(unsigned int *)(param_1 + 0x38));
    }
    return 0;
  }
  *(unsigned int *)(iVar4 + 0x18) = 0;
  uVar1 = lbl_821AAD20;
  *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x20) = lbl_821AAD20;
  *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x28) = uVar1;
  *(unsigned short *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x24) = 0;
  *(unsigned short *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x1c) = 0;
  *(unsigned short *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x2c) = 0;
  *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x30) = 0;
  *(unsigned __int64 *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xe0) + 0x50) = 0;
  return 0;
}

