typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822AA770();
extern int fn_822AA7E0();
extern int fn_822ABA88();
extern int fn_82520780();
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_83265A28;


void fn_823735F0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  bool bVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  
  iVar9 = *(int *)(param_1 + 0x1e0);
  iVar1 = *(int *)(param_1 + 0x1f0);
  uVar5 = (unsigned int)((unsigned __int64)LZCOUNT(iVar9) >> 3) & 4;
  piVar2 = *(int **)(uVar5 + **(int **)(param_1 + 8));
  piVar3 = *(int **)(iVar9 * 4 + **(int **)(param_1 + 8));
  uVar10 = *(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  uVar7 = fn_822AA7E0(piVar2);
  if (((*(int *)(param_1 + 0x21c) != 0) || (*(int *)(param_1 + 0x220) != 0)) ||
     (bVar6 = false, *(int *)(param_1 + 0x200) == 1)) {
    bVar6 = true;
  }
  iVar8 = fn_82520780((double)lbl_82191FC8,0xffffffff83265a28);
  if (((iVar8 == 0) || (bVar6)) || (uVar10 <= uVar7)) {
    if (((unsigned int)LZCOUNT(iVar9 - iVar1) >> 5 == 0) ||
       (uVar10 = *(unsigned int *)(param_1 + 500), uVar10 == 0xffffffff)) {
      piVar2 = *(int **)(*(int *)(param_1 + 0x20) + iVar9 * 4);
      if ((piVar2[1] - *piVar2 & 0xfffffffcU) == 4) {
        fn_822AA770(piVar3);
        return;
      }
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      uVar4 = *(unsigned int *)(piVar3[4] * 4 + *piVar3);
      uVar10 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
      goto LAB_823737a8;
    }
    piVar2 = *(int **)(*(int *)(param_1 + 0x1f0) * 4 + **(int **)(param_1 + 8));
  }
  else {
    if (uVar7 == 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      uVar10 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
    }
    else {
      iVar9 = fn_822AA770(piVar2);
      uVar10 = (unsigned int)(*(int *)(iVar9 + 0x28) == 0);
    }
    piVar2 = *(int **)(**(int **)(param_1 + 8) + uVar5);
  }
  uVar4 = *(unsigned int *)(piVar2[4] * 4 + *piVar2);
LAB_823737a8:
  fn_822ABA88(uVar4,uVar10);
  return;
}

