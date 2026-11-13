typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82B1A538();
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int uStack_3c;
extern unsigned int uStack_4c;


unsigned char fn_82B24030(unsigned __int64 param_1,int param_2,int param_3,int *param_4)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  struct { int first; unsigned int second; } stack_pair_50;

  int iStack_48;
  int iStack_40;
  unsigned int uStack_3c;
  int iStack_38;
  
  iStack_48 = 0;
  iStack_38 = 0;
  uStack_3c = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
  stack_pair_50.second = -(unsigned int)((*(unsigned int *)(param_3 + 4) & 1) == 0) & *(unsigned int *)(param_3 + 4);
  uVar5 = uStack_3c;
  iVar4 = 0;
  stack_pair_50.first = param_3;
  iStack_40 = param_2;
  do {
    do {
      if ((stack_pair_50.second == 0) || (bVar1 = false, iStack_48 == *(int *)(stack_pair_50.second + 8))) {
        bVar1 = true;
      }
      if (bVar1) {
        if ((uVar5 != 0) && (iVar4 != *(int *)(uVar5 + 8))) {
          return 0;
        }
        return 1;
      }
      piVar2 = (int *)fn_82B1A538(&stack_pair_50.first);
    } while ((((param_4 != (int *)0x0) && (*piVar2 == *param_4)) && (piVar2[1] == param_4[1])) &&
            (piVar2[2] == param_4[2]));
    if ((uVar5 == 0) || (bVar1 = false, iVar4 == *(int *)(uVar5 + 8))) {
      bVar1 = true;
    }
  } while (((!bVar1) && (piVar3 = (int *)fn_82B1A538(&iStack_40), *piVar3 == *piVar2)) &&
          ((piVar3[1] == piVar2[1] && (uVar5 = uStack_3c, iVar4 = iStack_38, piVar3[2] == piVar2[2])
           )));
  return 0;
}

