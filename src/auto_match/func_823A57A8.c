extern int fn_82359698();
extern int fn_82508078();
extern unsigned int ltcg_pool_0_0f;


void fn_823A57A8(double param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float fVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  fVar7 = ltcg_pool_0_0f;
  iVar4 = *(int *)(param_2 + 8);
  fVar1 = (float)((double)*(float *)(iVar4 + 0x204) + param_1);
  *(float *)(iVar4 + 0x204) = fVar1;
  if (fVar1 <= fVar7) {
    return;
  }
  piVar5 = *(int **)**(int **)(iVar4 + 8);
  piVar6 = (int *)((int *)**(int **)(iVar4 + 8))[1];
  uVar2 = (unsigned int)*(float *)(*(int *)(piVar6[4] * 4 + *piVar6) + 0x20);
  uVar3 = (unsigned int)*(float *)(*(int *)(piVar5[4] * 4 + *piVar5) + 0x20);
  uVar9 = uVar3;
  if (((int)uVar2 <= (int)uVar3) || (uVar9 = uVar2, uVar10 = uVar3, (int)uVar2 <= (int)uVar3)) {
    uVar10 = uVar2;
  }
  iVar4 = *(int *)(param_2 + 8);
  if (((uVar9 - uVar10 < *(unsigned int *)(iVar4 + 0x284)) && (*(unsigned int *)(iVar4 + 0x288) < uVar3)) &&
     (uVar3 < *(unsigned int *)(iVar4 + 0x28c))) {
    if (*(int *)(iVar4 + 0x178) != 0) goto LAB_823a58c0;
    uVar8 = 0xffffffff821b4d34;
  }
  else {
    if ((uVar9 - uVar10 <= *(unsigned int *)(iVar4 + 0x290)) || (*(int *)(iVar4 + 0x178) != 0))
    goto LAB_823a58c0;
    uVar8 = 0xffffffff821b4dc0;
  }
  fn_82508078(*(unsigned int *)(iVar4 + 0xa4),uVar8,0);
LAB_823a58c0:
  fn_82359698(*(unsigned int *)(param_2 + 8),5);
  return;
}

