#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();
extern int fn_8236A928();
extern int fn_8236BA88();


void fn_822B0FC0(int param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar7 = ZEXT48(piVar1);
  uVar5 = 0;
  uVar3 = 0;
  uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
  if (uVar6 != 0) {
    uVar4 = (unsigned __int64)*(unsigned int *)(piVar1[4] * 4 + *piVar1);
    do {
      uVar2 = fn_822ABA88(uVar4);
      if (*(int *)(*(int *)((int)uVar2 + 0x110) + 0x1c) == 8) {
        uVar5 = uVar2;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (uVar6 & 0xffffffff));
    if ((uVar5 & 0xffffffff) != 0) {
      fn_8236A928(*(unsigned int *)(param_1 + 0x10),uVar5,6);
      return;
    }
  }
  fn_8236BA88(uVar7);
  return;
}

