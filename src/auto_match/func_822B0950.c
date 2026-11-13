typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();
extern int fn_8236A928();
extern int fn_8236BA88();


void fn_822B0950(int param_1,unsigned __int64 param_2)

{
  bool bVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  piVar2 = *(int **)(param_1 + 0xc);
  uVar8 = ZEXT48(piVar2);
  uVar6 = 0;
  uVar3 = *(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  if (uVar3 != 0) {
    uVar7 = (unsigned __int64)*(unsigned int *)(piVar2[4] * 4 + *piVar2);
    do {
      uVar4 = fn_822ABA88(*(unsigned int *)(((int *)uVar8)[4] * 4 + *(int *)uVar8));
      iVar5 = fn_822ABA88(uVar7);
      iVar5 = *(int *)(*(int *)(iVar5 + 0x110) + 0x1c);
      if ((int)param_2 == 0) {
        if (iVar5 == 0xc) goto code_r0x822b0a24;
        bVar1 = iVar5 == 0x10;
      }
      else {
        if (iVar5 == 0xc) goto code_r0x822b0a24;
        bVar1 = iVar5 == 0xd;
      }
      if ((bVar1) || (iVar5 == 0x1d)) {
code_r0x822b0a24:
        fn_8236A928(*(unsigned int *)(param_1 + 0x10),uVar4,2);
        return;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xffffffff) < (unsigned __int64)uVar3);
  }
  fn_8236BA88(uVar8);
  return;
}

