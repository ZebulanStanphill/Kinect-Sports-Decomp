#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8287D1C8();


unsigned int * fn_8287D760(unsigned int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  iVar1 = param_3[2];
  if (param_2[2] != iVar1) {
    if (iVar1 != param_4[2]) {
      puVar4 = (unsigned int *)0x0;
      if (((int *)*param_4 != (int *)0x0) &&
         (puVar2 = *(unsigned int **)*param_4, puVar2 != (unsigned int *)0x0)) {
        puVar4 = (unsigned int *)*puVar2;
      }
      if (puVar4 == (unsigned int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar4;
      }
      puVar4 = (unsigned int *)0x0;
      if (((int *)*param_3 != (int *)0x0) &&
         (puVar2 = *(unsigned int **)*param_3, puVar2 != (unsigned int *)0x0)) {
        puVar4 = (unsigned int *)*puVar2;
      }
      uVar6 = 0;
      if (puVar4 != (unsigned int *)0x0) {
        uVar6 = *puVar4;
      }
      puVar4 = (unsigned int *)0x0;
      if (((int *)*param_2 != (int *)0x0) &&
         (puVar2 = *(unsigned int **)*param_2, puVar2 != (unsigned int *)0x0)) {
        puVar4 = (unsigned int *)*puVar2;
      }
      uVar7 = 0;
      if (puVar4 != (unsigned int *)0x0) {
        uVar7 = *puVar4;
      }
      fn_8287D1C8(CONCAT44(uVar7,param_2[2]),CONCAT44(uVar6,iVar1),CONCAT44(uVar5,param_4[2]),0,0)
      ;
      param_2[2] = (param_4[2] - param_3[2]) + param_2[2];
    }
  }
  piVar3 = (int *)*param_2;
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar3 != (int *)0x0) && (puVar4 = (unsigned int *)*piVar3, puVar4 != (unsigned int *)0x0)) {
    *param_1 = *puVar4;
  }
  param_1[2] = param_2[2];
  return param_1;
}

