typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82791650();


unsigned int * fn_82791EF0(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  
  bVar3 = false;
  *param_1 = 0;
  piVar5 = param_1 + 4;
  param_1[3] = param_2 + 0x10;
  param_1[1] = 0;
  *(unsigned short *)(param_1 + 2) = 0;
  fn_82791650(piVar5);
  param_1[6] = param_2;
  param_1[7] = param_3;
  uVar1 = param_1[5];
  if (((int)uVar1 < 0) || (bVar2 = false, *(unsigned int *)(*piVar5 + 4) <= uVar1)) {
    bVar2 = true;
  }
  if (!bVar2) {
    piVar4 = (int *)(uVar1 * 0xc + *(int *)*piVar5);
    if ((*piVar4 <= param_3) && (param_3 <= piVar4[1] + *piVar4 + -1)) {
      bVar3 = true;
    }
    if (((!bVar3) && (*piVar4 < param_3)) && ((int)param_1[5] < *(int *)(*piVar5 + 4))) {
      param_1[5] = param_1[5] + 1;
    }
  }
  return param_1;
}

