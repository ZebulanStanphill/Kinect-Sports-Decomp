extern unsigned int *auStack_58;
extern int fn_82E3BF28();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;
extern unsigned int lbl_8214C020;
extern unsigned int lbl_8214C030;


__int64 fn_82E3CC08(int *param_1,short *param_2,unsigned char *param_3,unsigned __int64 *param_4,
                      __int64 *param_5,unsigned int *param_6)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar6;
  __int64 lVar5;
  unsigned char *pbVar7;
  int *piVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  int *apiStack_60 [2];
  unsigned char auStack_58 [88];
  
  piVar8 = param_1 + 2;
  fn_82E50CB8(piVar8);
  if ((((param_2 == (short *)0x0) || (param_3 == (unsigned char *)0x0)) ||
      ((param_4 == (unsigned __int64 *)0x0 && (param_6 == (unsigned int *)0x0)))) || (*param_2 != 0x14)) {
LAB_82e3ce10:
    fn_82E50F10(piVar8);
    return -0x7ff8ffa9;
  }
  pbVar6 = (unsigned char *)&lbl_8202E618;
  pbVar4 = pbVar6;
  pbVar7 = param_3;
  do {
    bVar1 = *pbVar4;
    bVar2 = *pbVar7;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar7 = pbVar7 + 1;
  } while (pbVar4 != &lbl_8202E628);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) goto LAB_82e3ce10;
  lVar9 = 0;
  if (param_4 != (unsigned __int64 *)0x0) {
    *param_4 = 0;
    uVar10 = *(unsigned __int64 *)(param_2 + 4);
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar4;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar6 != &lbl_8202E628);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      uVar10 = uVar10 / 10000 + *(__int64 *)(param_1 + 0x16);
    }
    apiStack_60[0] = (int *)0x0;
    iVar3 = fn_82E3BF28(param_1 + 0x6b,param_3,apiStack_60,auStack_58);
    if (iVar3 == 0) {
      lVar9 = -0x3ff2b9aa;
      goto LAB_82e3ce00;
    }
    if (param_5 != (__int64 *)0x0) {
      *param_5 = -1;
    }
    lVar9 = (**(int (***)())(*apiStack_60[0] + 0x10))
                      (apiStack_60[0],uVar10,(unsigned int)param_1[0x11] >> 1 & 1,param_4,param_5);
    if (lVar9 < 0) goto LAB_82e3ce00;
    if ((param_5 != (__int64 *)0x0) && (lVar5 = *param_5, lVar5 != -1)) {
      if (*(__int64 *)(param_1 + 0x16) * 10000 < lVar5) {
        *param_5 = lVar5 + *(__int64 *)(param_1 + 0x16) * -10000;
      }
      else {
        *param_5 = 0;
      }
    }
  }
  if (param_6 != (unsigned int *)0x0) {
    *param_6 = 0;
    pbVar7 = &lbl_8214C020;
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar4;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar7 != &lbl_8214C030);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      lVar9 = (**(int (***)())(*param_1 + 0x44))(param_1,param_2,param_3,param_6);
    }
  }
LAB_82e3ce00:
  fn_82E50F10(piVar8);
  return lVar9;
}

