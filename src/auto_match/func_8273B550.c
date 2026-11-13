extern int fn_82681898();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_82739680();
extern unsigned int lbl_82005710;
extern unsigned int lbl_820116D8;
extern unsigned int lbl_82011DEC;
extern unsigned int lbl_82011FA0;
extern unsigned int lbl_82011FA8;
extern unsigned int lbl_82011FB0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8273B550(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = lbl_82005710;
  if (1 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    dVar7 = (double)fn_826972E0(uVar3,uVar1);
    uVar4 = (unsigned int)dVar7;
    uVar6 = (unsigned __int64)uVar4;
    if (((int)uVar4 < 100) && (-1 < (int)uVar4)) {
      uVar6 = uVar6 + 0x76c;
    }
    iVar2 = (int)uVar6;
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = iVar2 - 0x7b1;
    dVar9 = (double)(__int64)
                    (int)(((iVar2 + -0x641) / 400 - (iVar2 + -0x76d) / 100) +
                          ((int)uVar4 >> 2) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 3) != 0) +
                         (iVar2 + -0x7b2) * 0x16d);
    dVar7 = lbl_82005710;
    uVar3 = fn_826957D0(param_1,1);
    dVar8 = (double)fn_826972E0(uVar3,uVar1);
    uVar5 = (unsigned __int64)(unsigned int)(int)dVar8;
    if ((int)dVar8 != 0) {
      uVar6 = fn_82739680(uVar6);
      dVar9 = (double)(__int64)
                      *(int *)(&lbl_82011DEC +
                              (int)(((uVar6 & 0xff) * 0xc + uVar5 & 0xffffffff) << 2)) + dVar9;
    }
    if (2 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,2);
      dVar8 = (double)fn_826972E0(uVar3,uVar1);
      dVar9 = (double)(__int64)((int)dVar8 + -1) + dVar9;
    }
    if (3 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,3);
      dVar7 = (double)fn_826972E0(uVar3,uVar1);
      dVar7 = dVar7 * lbl_82011FB0;
    }
    if (4 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,4);
      dVar8 = (double)fn_826972E0(uVar3,uVar1);
      dVar7 = dVar8 * lbl_82011FA8 + dVar7;
    }
    if (5 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,5);
      dVar8 = (double)fn_826972E0(uVar3,uVar1);
      dVar7 = dVar8 * lbl_820116D8 + dVar7;
    }
    if (6 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,6);
      dVar8 = (double)fn_826972E0(uVar3,uVar1);
      dVar7 = dVar8 + dVar7;
    }
    dVar7 = dVar9 * lbl_82011FA0 + dVar7;
  }
  fn_82681898(dVar7,*(unsigned int *)(param_1 + 4));
  return;
}

