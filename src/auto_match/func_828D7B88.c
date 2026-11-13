#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_828D7848();


void fn_828D7B88(int *param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  puVar2 = (unsigned int *)0x0;
  if (((int *)*param_2 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_2, puVar1 != (unsigned int *)0x0)) {
    puVar2 = (unsigned int *)*puVar1;
  }
  uVar3 = 0;
  if (puVar2 != (unsigned int *)0x0) {
    uVar3 = *puVar2;
  }
  puVar2 = (unsigned int *)0x0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_1, puVar1 != (unsigned int *)0x0)) {
    puVar2 = (unsigned int *)*puVar1;
  }
  uVar4 = 0;
  if (puVar2 != (unsigned int *)0x0) {
    uVar4 = *puVar2;
  }
  fn_828D7848(CONCAT44(uVar4,param_1[2]),CONCAT44(uVar3,param_2[2]),
                (unsigned __int64)(unsigned int)param_2[2] - (unsigned __int64)(unsigned int)param_1[2]);
  return;
}

