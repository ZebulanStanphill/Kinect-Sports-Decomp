typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82517978();
extern int fn_82674428();


void fn_826744A0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  puVar5 = (unsigned int *)param_1[1];
  if ((puVar5 <= param_2) || (bVar4 = true, param_2 < (unsigned int *)*param_1)) {
    bVar4 = false;
  }
  if (bVar4) {
    uVar1 = *param_1;
    if (puVar5 == (unsigned int *)param_1[2]) {
      fn_82674428(param_1,1);
    }
    puVar5 = (unsigned int *)param_1[1];
    puVar6 = (unsigned int *)(((int)((int)param_2 - uVar1) >> 3) * 8 + *param_1);
    if (puVar5 == (unsigned int *)0x0) goto LAB_8267456c;
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar2 = puVar6[1];
    uVar3 = *puVar6;
  }
  else {
    if (puVar5 == (unsigned int *)param_1[2]) {
      fn_82674428(param_1,1);
    }
    puVar5 = (unsigned int *)param_1[1];
    if (puVar5 == (unsigned int *)0x0) goto LAB_8267456c;
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar2 = param_2[1];
    uVar3 = *param_2;
  }
  fn_82517978(puVar5,uVar3,uVar2,0);
LAB_8267456c:
  param_1[1] = param_1[1] + 8;
  return;
}

