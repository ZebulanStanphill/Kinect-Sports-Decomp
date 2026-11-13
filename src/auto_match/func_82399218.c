extern int fn_822602C0();
extern int fn_822ABA88();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C996C;


void fn_82399218(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  unsigned int uVar5;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  fn_82F6A548();
  iVar8 = fn_82F6DA24();
  iVar9 = (**(int (***)())(**(int **)(iVar8 + 0x2e0) + 0x7c))();
  piVar4 = *(int **)(iVar9 * 4 + **(int **)(iVar8 + 8));
  uVar6 = (**(int (***)())(**(int **)(iVar8 + 0x2e0) + 0x80))(*(int **)(iVar8 + 0x2e0));
  iVar9 = fn_822ABA88(*(unsigned int *)(piVar4[4] * 4 + *piVar4),uVar6);
  uVar5 = lbl_831C996C;
  dVar13 = (double)*(float *)(param_2 + 0x268);
  uVar6 = 0xffffffff8219622c;
  if (dVar13 <= (double)ltcg_pool_0_0f) {
    if (dVar13 < (double)ltcg_pool_0_0f) {
      uVar6 = 0xffffffff821b4ad0;
    }
  }
  else {
    uVar6 = 0xffffffff821a6998;
  }
  uVar1 = *(unsigned int *)(iVar9 + 0x214);
  uVar2 = *(unsigned int *)(iVar9 + 0x244);
  piVar4 = (int *)((int *)**(int **)(iVar8 + 8))[1];
  dVar12 = ABS((double)*(float *)(param_2 + 0x26c));
  piVar3 = *(int **)**(int **)(iVar8 + 8);
  dVar11 = (double)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
  dVar10 = (double)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  uVar7 = (**(int (***)())(**(int **)(iVar8 + 0x2e0) + 0x3c))();
  fn_822602C0(dVar12,dVar13,uVar5,(int)dVar10,(int)dVar11,uVar7,uVar6,uVar1,uVar2);
  fn_82F6DCBC();
  fn_82F6A594();
  return;
}

