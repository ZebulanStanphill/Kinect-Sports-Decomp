extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_8225F160();
extern int fn_822CF9D8();
extern int fn_822D0068();
extern int fn_822D1720();
extern int fn_822D1E70();
extern int fn_822D4178();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_822CDB00(int param_1,unsigned int param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  unsigned int uVar4;
  int iVar6;
  unsigned __int64 uVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  unsigned int auStack_20 [2];
  
  *(unsigned int *)(param_1 + 0x1c0) = param_2;
  iVar6 = fn_8225F160();
  auStack_20[0] = *(unsigned int *)(iVar6 + 0x14);
  uVar5 = fn_8265C9E0(0xc4);
  if ((uVar5 & 0xffffffff) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_822D0068(uVar5,param_1 + 0x1b0,auStack_20);
  }
  iVar1 = *(int *)(param_1 + 0x1ac);
  *(int *)(param_1 + 0x1ac) = iVar6;
  *(int *)(param_1 + 0x1a8) = iVar6 + 0xc;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  fn_822D1720(*(unsigned int *)(param_1 + 0x110),param_1,*(unsigned int *)(param_1 + 0x1c0),
                    *(unsigned int *)(param_1 + 0x1a8));
  piVar2 = *(int **)**(unsigned int **)(*(int *)(param_1 + 0x1c0) + 8);
  if ((*(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8) == 1) && (*(int *)(param_1 + 0x2c) == 1)) {
    fn_822D4178(*(unsigned int *)(param_1 + 0x114),param_1);
  }
  else {
    fn_822D1E70(*(unsigned int *)(param_1 + 0x114),param_1);
  }
  uVar4 = ltcg_pool_0_0f;
  fVar3 = lbl_821CA460;
  if (*(int *)(param_1 + 0x24) == 0) {
    dVar9 = (double)lbl_821CA460;
    *(float *)(param_1 + 0x1dc) = lbl_821CA460;
    *(float *)(param_1 + 0x1d8) = fVar3;
    *(unsigned int *)(param_1 + 0x1e0) = uVar4;
    dVar8 = (double)fn_822CF9D8(param_1,0);
    dVar7 = (double)lbl_8218E8FC;
    *(float *)(param_1 + 0x108) = (float)(dVar8 * (double)lbl_82192604 + dVar7);
    *(float *)(param_1 + 0x10c) = (float)((double)(float)(dVar8 + dVar9) * dVar7);
  }
  return;
}

