typedef unsigned char bool;
extern unsigned int *auStack_60;
extern int fn_82A5DAC0();
extern int fn_82A5DB28();
extern int fn_82A5DBF8();
extern int fn_82A5DEC8();
extern int fn_82A5DFF8();
extern int fn_82A5E128();


unsigned char fn_82A5F060(short *param_1)

{
  unsigned short uVar3;
  int iVar2;
  __int64 lVar1;
  unsigned int uVar4;
  short sVar5;
  unsigned char bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  unsigned char auStack_60 [72];
  
  bVar6 = 1;
  if (*param_1 != 0x165) {
    bVar6 = -(*(int *)(param_1 + 2) != 0) & -(param_1[1] != 0) & 1U;
  }
  uVar3 = fn_82A5DAC0(param_1);
  if (uVar3 == 1) {
    lVar1 = fn_82A5DB28(param_1);
    bVar6 = -(lVar1 != 0) & bVar6;
    goto code_r0x82a5f208;
  }
  if (uVar3 == 2) {
    iVar2 = fn_82A5DBF8(param_1);
    goto code_r0x82a5f1e8;
  }
  if (uVar3 == 3) {
    bVar7 = param_1[7] == 0x20;
    if ((*param_1 == -2) && (param_1[9] != 0x20)) {
      bVar7 = param_1[9] == 0 && bVar7;
    }
    uVar4 = (unsigned int)(unsigned short)param_1[1] * (unsigned int)(unsigned short)param_1[7];
    bVar8 = (__int64)((int)uVar4 >> 3) + (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 7) != 0) ==
            (unsigned __int64)(unsigned short)param_1[6];
    bVar9 = (__int64)*(int *)(param_1 + 2) * (__int64)(int)(unsigned int)(unsigned short)param_1[6] -
            (unsigned __int64)*(unsigned int *)(param_1 + 4) != 0;
code_r0x82a5f1c4:
    if (!(bool)(!bVar9 & bVar8 & bVar7)) {
code_r0x82a5f1d8:
      bVar6 = 0;
    }
  }
  else if (0x160 < uVar3) {
    if (uVar3 < 0x163) {
      bVar7 = param_1[7] == 0x10;
      if (*param_1 == -2) {
        bVar7 = param_1[9] == 0x10 && bVar7;
      }
      bVar8 = param_1[6] != 0;
      bVar9 = *(int *)(param_1 + 4) == 0;
      goto code_r0x82a5f1c4;
    }
    if (uVar3 == 0x165) {
      iVar2 = fn_82A5DEC8(param_1);
    }
    else {
      if (uVar3 != 0x166) goto code_r0x82a5f208;
      iVar2 = fn_82A5DFF8(param_1);
    }
code_r0x82a5f1e8:
    if (iVar2 != 0) goto code_r0x82a5f208;
    goto code_r0x82a5f1d8;
  }
code_r0x82a5f208:
  if (*param_1 != -2) goto code_r0x82a5f25c;
  if (0x15 < (unsigned short)param_1[8]) {
    uVar4 = *(unsigned int *)(param_1 + 10);
    if (uVar4 == 0) goto code_r0x82a5f25c;
    sVar5 = 0;
    do {
      sVar5 = sVar5 + 1;
      uVar4 = uVar4 - 1 & uVar4;
    } while (uVar4 != 0);
    if (sVar5 == param_1[1]) goto code_r0x82a5f25c;
  }
  bVar6 = 0;
code_r0x82a5f25c:
  if ((bVar6 == 0) && (*param_1 != 0x165)) {
    fn_82A5E128(param_1,auStack_60,0x40);
  }
  return bVar6;
}

