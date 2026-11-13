#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8287D120();
extern unsigned int uStack_20;


void fn_8287D470(int *param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned char uStack_20;
  
  puVar3 = (unsigned int *)0x0;
  if (((int *)*param_2 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_2, puVar1 != (unsigned int *)0x0)) {
    puVar3 = (unsigned int *)*puVar1;
  }
  uVar2 = 0;
  if (puVar3 != (unsigned int *)0x0) {
    uVar2 = *puVar3;
  }
  puVar3 = (unsigned int *)0x0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_1, puVar1 != (unsigned int *)0x0)) {
    puVar3 = (unsigned int *)*puVar1;
  }
  uVar4 = 0;
  if (puVar3 != (unsigned int *)0x0) {
    uVar4 = *puVar3;
  }
  fn_8287D120(CONCAT44(uVar4,param_1[2]),CONCAT44(uVar2,param_2[2]),uStack_20);
  return;
}

