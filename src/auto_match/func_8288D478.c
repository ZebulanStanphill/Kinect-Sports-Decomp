#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_30;
extern int fn_8288BFA8();
extern unsigned int uStack_38;


unsigned int * fn_8288D478(unsigned int *param_1,int *param_2,int *param_3)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned __int64 *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar7;
  unsigned __int64 uVar6;
  unsigned __int64 uStack_38;
  unsigned char auStack_30 [16];
  
  puVar4 = (unsigned int *)0x0;
  if (((int *)*param_3 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_3, puVar1 != (unsigned int *)0x0)) {
    puVar4 = (unsigned int *)*puVar1;
  }
  if (puVar4 == (unsigned int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  piVar2 = (int *)*param_2;
  puVar4 = (unsigned int *)0x0;
  if ((piVar2 != (int *)0x0) && ((unsigned int *)*piVar2 != (unsigned int *)0x0)) {
    puVar4 = *(unsigned int **)*piVar2;
  }
  if (puVar4 == (unsigned int *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar4;
  }
  uStack_38 = CONCAT44(uVar7,param_2[2]);
  puVar3 = (unsigned __int64 *)fn_8288BFA8(auStack_30,uStack_38,CONCAT44(uVar5,param_3[2]));
  uVar6 = *puVar3;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_38 = ((((unsigned __int64)(uStack_38)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)uVar6)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  param_2[2] = (((unsigned __int64)(uStack_38) >> 32) & 0xFFFFFFFF);
  param_1[2] = (((unsigned __int64)(uStack_38) >> 32) & 0xFFFFFFFF);
  if ((piVar2 != (int *)0x0) && ((unsigned int *)*piVar2 != (unsigned int *)0x0)) {
    *param_1 = *(unsigned int *)*piVar2;
  }
  return param_1;
}

