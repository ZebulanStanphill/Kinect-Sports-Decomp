extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_827F1148();
extern int fn_82811438();
extern int XMemSet();
extern unsigned int lbl_821C4CB8;
extern unsigned int *lbl_832823E0;


void fn_82554260(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  __int64 lVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int auStack_90 [4];
  unsigned char auStack_80 [128];
  
  fn_827F1148(param_1,param_2,0);
  uVar2 = (param_3 & 0xffffffff) << 2;
  uVar8 = uVar2 & 0xfffffffc;
  iVar5 = (int)param_3;
  param_1[99] = iVar5;
  *param_1 = &lbl_821C4CB8;
  lVar6 = uVar8 + ((__int64)((int)uVar8 >> 4) + (unsigned __int64)((int)uVar8 < 0 && (uVar2 & 0xc) != 0) &
                  0xfffffff) * -0x10;
  iVar7 = (int)lVar6;
  if (lVar6 < 1) {
    uVar2 = uVar8;
    if (iVar7 < 0) {
      uVar2 = uVar8 - lVar6;
    }
  }
  else {
    uVar2 = (uVar8 - lVar6) + 0x10;
  }
  if (iVar7 < 1) {
    uVar3 = uVar8;
    if (iVar7 < 0) {
      uVar3 = uVar8 - lVar6;
    }
  }
  else {
    uVar3 = (uVar8 - lVar6) + 0x10;
  }
  uVar8 = uVar8 - 4;
  lVar6 = uVar8 + ((__int64)((int)uVar8 >> 4) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 0xf) != 0) &
                  0xfffffff) * -0x10;
  if (lVar6 < 1) {
    if ((int)lVar6 < 0) {
      uVar8 = uVar8 - lVar6;
    }
  }
  else {
    uVar8 = (uVar8 - lVar6) + 0x10;
  }
  lVar6 = param_3 + ((__int64)(iVar5 >> 4) + (unsigned __int64)(iVar5 < 0 && (param_3 & 0xf) != 0) &
                    0xfffffff) * -0x10;
  if (lVar6 < 1) {
    uVar4 = param_3;
    if ((int)lVar6 < 0) {
      uVar4 = param_3 - lVar6;
    }
  }
  else {
    uVar4 = (param_3 - lVar6) + 0x10;
  }
  auStack_90[0] = 0;
  lVar6 = param_3 * 0x3b0 + -0xf0 + uVar4 + uVar8 + uVar3 + uVar2;
  fn_82811438(auStack_80,auStack_90,0x10);
  uVar1 = (**(int (***)())(*lbl_832823E0 + 0xc))(lbl_832823E0,lVar6,auStack_80);
                    /* WARNING: Subroutine does not return */
  XMemSet(uVar1,0,lVar6);
}

