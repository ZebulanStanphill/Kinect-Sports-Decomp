extern int fn_822606B0();
extern int fn_822ABA88();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C996C;


void fn_823993D0(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned int uVar7;
  int iVar10;
  unsigned __int64 uVar8;
  int iVar11;
  unsigned __int64 uVar9;
  double dVar12;
  
  if (*(int *)(param_1 + 0x178) != 2) {
    iVar10 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x7c))();
    piVar6 = *(int **)(**(int **)(param_1 + 8) + iVar10 * 4);
    uVar8 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x80))(*(int **)(param_1 + 0x2e0));
    iVar10 = *(int *)(piVar6[4] * 4 + *piVar6);
    iVar11 = fn_822ABA88(iVar10,uVar8);
    uVar7 = lbl_831C996C;
    uVar8 = 0xffffffff8219622c;
    if (*(float *)(param_2 + 0x268) <= ltcg_pool_0_0f) {
      if (*(float *)(param_2 + 0x268) < ltcg_pool_0_0f) {
        uVar8 = 0xffffffff821b4ad0;
      }
    }
    else {
      uVar8 = 0xffffffff821a6998;
    }
    dVar12 = (double)*(float *)(param_2 + 0x26c);
    iVar1 = *(int *)(iVar11 + 0x24);
    uVar2 = *(unsigned int *)(iVar11 + 0x214);
    uVar3 = *(unsigned int *)(iVar11 + 0x28);
    uVar4 = *(unsigned int *)(iVar11 + 0x244);
    uVar5 = *(unsigned int *)(iVar10 + 0x10);
    uVar9 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x3c))();
    fn_822606B0(ABS(dVar12),uVar7,uVar9,uVar5,uVar3,iVar1 != 0,uVar2,uVar4,uVar8);
  }
  return;
}

