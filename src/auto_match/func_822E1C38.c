extern int fn_822315A0();
extern int fn_8229F618();
extern int fn_822B7340();
extern int fn_822C72E0();
extern int fn_822E2E30();
extern int fn_82372DE8();
extern int fn_82372ED8();
extern int fn_823807F0();
extern int fn_824C97F0();
extern int fn_824D2AE8();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int ltcg_pool_0_0f;


void fn_822E1C38(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int uVar4;
  float fVar5;
  int iVar6;
  unsigned __int64 uVar7;
  int *piVar8;
  double dVar9;
  int iStack_40;
  int iStack_3c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x118);
  *(unsigned char *)(iVar1 + 0x1d4) = 0;
  *(unsigned char *)(iVar1 + 0x254) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x270) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar6 = fn_82372ED8(iVar1);
  if (iVar6 == 0) {
    iVar6 = fn_82372DE8(iVar1,0);
    if ((iVar6 == 0) && (iVar6 = fn_82372DE8(iVar1,1), iVar6 == 0)) {
      uVar7 = 2;
    }
    else {
      uVar7 = 4;
    }
  }
  else {
    uVar7 = 3;
  }
  fn_823807F0(*(unsigned int *)(iVar1 + 0x664),uVar7);
  puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x10) + 0xa8);
  piVar3 = (int *)puVar2[1];
  for (piVar8 = (int *)*puVar2; piVar8 != piVar3; piVar8 = piVar8 + 2) {
    fn_824C97F0(*(unsigned int *)(*piVar8 + 0x28),0xffffffff821add8c);
  }
  fn_824D2AE8(&iStack_40,param_1 + 0x58);
  fVar5 = ltcg_pool_0_0f;
  dVar9 = (double)ltcg_pool_0_0f;
  if (iStack_40 != 0) {
    *(float *)(iStack_40 + 0xe0) = ltcg_pool_0_0f;
    *(float *)(iStack_40 + 0xe4) = fVar5;
    *(unsigned int *)(iStack_40 + 0xd4) = 1;
    fn_822C72E0(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x114) + 0x20),
                      0xffffffff821ad2f4);
  }
  fn_822E2E30(param_1 + 0x58);
  if ((*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x1c0) + 0x204) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x14) + 0x78) != 0)) {
    fn_822B7340();
  }
  uVar4 = *(unsigned int *)(param_1 + 0x34);
  *(float *)(param_1 + 0x3c) = (float)dVar9;
  *(unsigned int *)(param_1 + 0x34) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x38) = uVar4;
  if (*(int *)(param_1 + 0x60) != 0) {
    (**(int (***)())(**(int **)(param_1 + 0x10) + 200))();
    *(unsigned int *)(param_1 + 0x60) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*(int *)(iVar1 + 0x204) == 0) &&
     (*(unsigned int *)(iVar1 + 0x344) = 0,
     *(int *)(*(int *)(*(int *)(iVar1 + 0xd4) + 0xc) + 0x58) != 0)) {
    fn_8229F618();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

