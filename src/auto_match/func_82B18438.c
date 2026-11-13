typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AD1750();
extern int fn_82B18360();
extern int fn_82B8F1B0();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_82B18438(unsigned __int64 param_1,int param_2,int param_3)

{
  int *piVar1;
  unsigned __int64 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  struct { int first; int second; } stack_pair_40;

  
  fn_82B18360(param_1,param_3,param_2);
  if ((*(int *)(param_3 + 8) == 0) || (bVar3 = true, *(int *)(*(int *)(param_3 + 8) + 0xc) == 0)) {
    bVar3 = false;
  }
  if (((!bVar3) && ((**(unsigned int **)(param_2 + 0x28) >> 0x13 & 1) != 0)) &&
     (uVar2 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff, iVar4 = param_3, iVar5 = param_3,
     (*(unsigned int *)(((**(unsigned int **)(param_3 + 0x28) & 0x7ffff) + 0x1f >> 3 & 0x1ffffffc) +
                ((int)(uVar2 >> 5) + 1) * 4 + (int)*(unsigned int **)(param_3 + 0x28)) &
     1 << ((unsigned int)uVar2 & 0x1f)) != 0)) {
    while (stack_pair_40.second = iVar5, stack_pair_40.first = iVar4, iVar6 = fn_82AD1750(&stack_pair_40.first), iVar6 != 0) {
      for (piVar1 = *(int **)(iVar6 + 0xc); iVar4 = stack_pair_40.first, iVar5 = stack_pair_40.second,
          piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        uVar2 = (unsigned __int64)*(unsigned int *)(param_3 + 0x30) & 0x7ffff;
        if ((*(unsigned int *)(((int)(uVar2 >> 5) + 1) * 4 + *(int *)(*piVar1 + 0x28)) &
            1 << ((unsigned int)uVar2 & 0x1f)) == 0) {
          fn_82B18360(param_1,*piVar1,iVar6);
        }
      }
    }
  }
  fn_82B8F1B0(param_2,param_3,param_1);
  return;
}

