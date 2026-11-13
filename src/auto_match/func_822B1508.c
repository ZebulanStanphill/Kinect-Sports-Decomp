#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();
extern int fn_8236A928();
extern int fn_8236BA88();


void fn_822B1508(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar8 = ZEXT48(piVar1);
  uVar7 = 0;
  uVar4 = 0;
  uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
  if (uVar6 != 0) {
    uVar5 = (unsigned __int64)*(unsigned int *)(piVar1[4] * 4 + *piVar1);
    do {
      uVar3 = fn_822ABA88(uVar5);
      iVar2 = *(int *)(*(int *)((int)uVar3 + 0x110) + 0x1c);
      if (iVar2 == 0x14) {
        uVar7 = uVar3;
      }
      if (iVar2 == 0x12) {
        uVar7 = uVar3;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (uVar6 & 0xffffffff));
    if ((uVar7 & 0xffffffff) != 0) {
      fn_8236A928(*(unsigned int *)(param_1 + 0x10),uVar7,2);
      return;
    }
  }
  fn_8236BA88(uVar8);
  return;
}

