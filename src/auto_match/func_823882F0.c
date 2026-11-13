extern unsigned int *auStack_30;
extern int fn_822ABA88();
extern float lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_823882F0(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int auStack_30 [8];
  
  puVar5 = (unsigned int *)param_3;
  puVar6 = (unsigned int *)param_4;
  auStack_30[0] = 0x15;
  auStack_30[1] = 1;
  auStack_30[3] = 2;
  auStack_30[4] = 0x17;
  uVar4 = 0;
  auStack_30[2] = 0x16;
  auStack_30[5] = 3;
  piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 8) + 8) + 4);
  uVar8 = (unsigned __int64)*(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
  if (uVar8 != 0) {
    uVar7 = (unsigned __int64)*(unsigned int *)(piVar1[4] * 4 + *piVar1);
    do {
      iVar3 = fn_822ABA88(uVar7);
      puVar5 = (unsigned int *)param_3;
      puVar6 = (unsigned int *)param_4;
      if (*(int *)(iVar3 + 0x2e0) == 0x15) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        iVar3 = 1 - ((int)(-lbl_83265A28 & ~lbl_83265A28) >> 0x1f);
        goto code_r0x823883ec;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff));
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar3 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192604);
code_r0x823883ec:
  uVar2 = auStack_30[iVar3 * 2 + 1];
  *param_2 = auStack_30[iVar3 * 2];
  *puVar6 = uVar2;
  *puVar5 = 0;
  return;
}

