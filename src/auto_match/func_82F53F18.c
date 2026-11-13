typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F53EA0();


void fn_82F53F18(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  
  puVar6 = (unsigned int *)param_1[1];
  if ((puVar6 <= param_2) || (bVar4 = true, param_2 < (unsigned int *)*param_1)) {
    bVar4 = false;
  }
  if (bVar4) {
    uVar1 = *param_1;
    if (puVar6 == (unsigned int *)param_1[2]) {
      fn_82F53EA0(param_1,1);
    }
    puVar6 = (unsigned int *)param_1[1];
    if (puVar6 == (unsigned int *)0x0) goto LAB_82f53fdc;
    uVar2 = *param_1;
    iVar3 = ((int)((int)param_2 - uVar1) >> 3) * 8;
    *puVar6 = *(unsigned int *)(iVar3 + uVar2);
    uVar5 = *(unsigned int *)(iVar3 + uVar2 + 4);
  }
  else {
    if (puVar6 == (unsigned int *)param_1[2]) {
      fn_82F53EA0(param_1,1);
    }
    puVar6 = (unsigned int *)param_1[1];
    if (puVar6 == (unsigned int *)0x0) goto LAB_82f53fdc;
    *puVar6 = *param_2;
    uVar5 = param_2[1];
  }
  puVar6[1] = uVar5;
LAB_82f53fdc:
  param_1[1] = param_1[1] + 8;
  return;
}

