#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();


unsigned __int64 fn_8239D7F8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar3 = 0;
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  uVar4 = ZEXT48(piVar1);
  if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8) != 0) {
    do {
      iVar2 = fn_822ABA88(*(unsigned int *)(((int *)uVar4)[4] * 4 + *(int *)uVar4));
      if (((*(int *)(*(int *)(iVar2 + 0x110) + 0x18) != 2) &&
          (*(int *)(*(int *)(iVar2 + 0x110) + 0x1c) == 2)) || (*(int *)(iVar2 + 0x27c) != 0)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) <
             (unsigned __int64)*(unsigned int *)(*(int *)(((int *)uVar4)[4] * 4 + *(int *)uVar4) + 8));
  }
  return 0;
}

