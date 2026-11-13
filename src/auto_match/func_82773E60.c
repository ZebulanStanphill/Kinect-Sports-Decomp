typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int lbl_8200571C;


unsigned __int64 fn_82773E60(int *param_1)

{
  int *piVar1;
  int *piVar2;
  unsigned int uVar3;
  bool bVar4;
  
  piVar1 = (int *)*param_1;
  if (((piVar1 == (int *)0x0) || ((unsigned int)piVar1[1] <= (unsigned int)param_1[2])) ||
     (bVar4 = false, param_1[2] < 0)) {
    bVar4 = true;
  }
  if (bVar4) {
    return 0;
  }
  if (*(char *)(param_1 + 4) != '\0') {
    return 1;
  }
  uVar3 = param_1[2];
  piVar2 = *(int **)(uVar3 * 4 + *piVar1);
  if (uVar3 == piVar1[5]) {
    bVar4 = ((float)piVar1[9] - (float)piVar1[7]) + lbl_8200571C <
            (float)(__int64)piVar2[4] + (float)param_1[3];
  }
  else {
    if (uVar3 <= (unsigned int)piVar1[5]) {
      return 0;
    }
    if (*piVar2 < 0) {
      uVar3 = (unsigned int)*(unsigned short *)((int)piVar2 + 0x16);
    }
    else {
      uVar3 = piVar2[6];
    }
    bVar4 = ((float)piVar1[9] - (float)piVar1[7]) + lbl_8200571C <
            (float)(__int64)(int)(uVar3 + piVar2[4]) + (float)param_1[3];
  }
  if (bVar4) {
    return 0;
  }
  return 1;
}

