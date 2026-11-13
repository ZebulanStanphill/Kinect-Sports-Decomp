#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_828D5268();
extern unsigned int iStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_40;


unsigned int * fn_828D68F8(unsigned int *param_1,int *param_2,int *param_3,int *param_4)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned char uStack_40;
  unsigned int uStack_28;
  int iStack_24;
  
  puVar5 = (unsigned int *)0x0;
  if (((int *)*param_4 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_4, puVar1 != (unsigned int *)0x0)) {
    puVar5 = (unsigned int *)*puVar1;
  }
  uVar3 = 0;
  if (puVar5 != (unsigned int *)0x0) {
    uVar3 = *puVar5;
  }
  puVar5 = (unsigned int *)0x0;
  if (((int *)*param_3 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_3, puVar1 != (unsigned int *)0x0)) {
    puVar5 = (unsigned int *)*puVar1;
  }
  uVar4 = 0;
  if (puVar5 != (unsigned int *)0x0) {
    uVar4 = *puVar5;
  }
  puVar5 = (unsigned int *)0x0;
  if (((int *)*param_2 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_2, puVar1 != (unsigned int *)0x0)) {
    puVar5 = (unsigned int *)*puVar1;
  }
  iStack_24 = param_2[2];
  uStack_28 = 0;
  if (puVar5 != (unsigned int *)0x0) {
    uStack_28 = *puVar5;
  }
  fn_828D5268(&uStack_28,CONCAT44(uStack_28,iStack_24),CONCAT44(uVar4,param_3[2]),
                CONCAT44(uVar3,param_4[2]),uStack_40);
  piVar2 = (int *)*param_4;
  *param_1 = 0;
  param_1[1] = 0;
  param_4[2] = iStack_24;
  param_1[2] = iStack_24;
  if ((piVar2 != (int *)0x0) && (puVar5 = (unsigned int *)*piVar2, puVar5 != (unsigned int *)0x0)) {
    *param_1 = *puVar5;
  }
  return param_1;
}

