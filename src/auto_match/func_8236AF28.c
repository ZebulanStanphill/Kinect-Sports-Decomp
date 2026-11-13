#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();
extern int fn_822C3FA8();
extern unsigned int lbl_831D1ACC;


unsigned __int64
fn_8236AF28(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = ZEXT48(*(unsigned int **)(param_1 + 8));
  uVar1 = **(unsigned int **)(param_1 + 8);
  uVar5 = (unsigned __int64)uVar1;
  piVar2 = *(int **)(param_3 * 4 + uVar1);
  uVar3 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2));
  piVar2 = *(int **)((int)((param_5 & 0xffffffff) << 2) + (int)uVar5);
  fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),param_4);
  iVar7 = 0;
  if (((unsigned __int64)*(unsigned int *)((int)uVar6 + 4) - (uVar5 & 0xffffffff) & 0xfffffffc) != 0) {
    iVar8 = 0;
    do {
      iVar4 = fn_822C3FA8((double)lbl_831D1ACC,uVar3,*(unsigned int *)(*(int *)uVar6 + iVar8));
      if (iVar4 != 0) {
        return 0;
      }
      piVar2 = *(int **)(param_1 + 8);
      uVar6 = ZEXT48(piVar2);
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar7 < piVar2[1] - *piVar2 >> 2);
  }
  return 1;
}

