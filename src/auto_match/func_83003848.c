typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_83000688();


void fn_83003848(int param_1,unsigned __int64 param_2,int param_3,int *param_4)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_3 == 0) {
    piVar3 = *(int **)(param_1 + 0x48);
    if (param_4 == (int *)0x0) {
      if (piVar3 != *(int **)(param_1 + 0x4c)) {
        do {
          fn_83000688(param_1,param_2,*piVar3,piVar3 + 1);
          piVar3 = piVar3 + 2;
        } while (piVar3 != *(int **)(param_1 + 0x4c));
        *(short *)(param_1 + 0x32) = (short)param_2;
        return;
      }
    }
    else if (piVar3 != *(int **)(param_1 + 0x4c)) {
      do {
        piVar2 = (int *)*param_4;
        bVar1 = false;
        if (piVar2 != (int *)param_4[1]) {
          do {
            if (*piVar2 == *piVar3) {
              bVar1 = true;
              break;
            }
            piVar2 = piVar2 + 1;
          } while (piVar2 != (int *)param_4[1]);
        }
        if (!bVar1) {
          fn_83000688(param_1,param_2,*piVar3,piVar3 + 1);
        }
        piVar3 = piVar3 + 2;
      } while (piVar3 != *(int **)(param_1 + 0x4c));
    }
    *(short *)(param_1 + 0x32) = (short)param_2;
  }
  else if (((*(unsigned char *)(param_1 + 0x3d) & 0x20) != 0) || (*(int *)(param_1 + 0x10) == 0)) {
    for (piVar3 = *(int **)(param_1 + 0x48);
        (piVar3 != *(int **)(param_1 + 0x4c) && (*piVar3 != param_3)); piVar3 = piVar3 + 2) {
    }
    if ((-(unsigned int)(*(int **)(param_1 + 0x4c) != piVar3) & (unsigned int)(piVar3 + 1)) != 0) {
      fn_83000688(param_1,param_2);
    }
  }
  return;
}

