typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267C4C8();
extern int fn_8267C4F0();


int * fn_82791FD0(int *param_1)

{
  unsigned short uVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  bool bVar5;
  int iVar6;
  
  piVar2 = (int *)param_1[6];
  if ((piVar2 == (int *)0x0) || (bVar5 = false, (unsigned int)piVar2[1] <= (unsigned int)param_1[7])) {
    bVar5 = true;
  }
  if (bVar5) {
    *(unsigned short *)(param_1 + 2) = 0;
    param_1[1] = param_1[7];
  }
  else {
    uVar3 = param_1[7];
    uVar1 = *(unsigned short *)(uVar3 * 2 + *piVar2);
    param_1[1] = uVar3;
    *(unsigned short *)(param_1 + 2) = uVar1;
    uVar4 = param_1[5];
    if (((int)uVar4 < 0) || (bVar5 = false, *(unsigned int *)(param_1[4] + 4) <= uVar4)) {
      bVar5 = true;
    }
    if ((!bVar5) &&
       (iVar6 = uVar4 * 0xc + *(int *)param_1[4],
       *(unsigned int *)(uVar4 * 0xc + *(int *)param_1[4]) <= uVar3)) {
      if (*(int *)(iVar6 + 8) != 0) {
        fn_8267C4C8();
      }
      if (*param_1 != 0) {
        fn_8267C4F0();
      }
      *param_1 = *(int *)(iVar6 + 8);
      return param_1;
    }
  }
  if (*param_1 != 0) {
    fn_8267C4F0();
  }
  *param_1 = 0;
  return param_1;
}

