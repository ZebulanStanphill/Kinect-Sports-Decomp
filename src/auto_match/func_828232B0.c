#define true 1
extern unsigned int lbl_8320A778;


void fn_828232B0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  uVar4 = lbl_8320A778;
  uVar1 = param_1[1];
  *param_2 = uVar1;
  if (uVar1 == uVar4) {
    *param_2 = 0;
  }
  uVar1 = *param_2;
  if (uVar1 == 0) {
    uVar1 = *param_1;
    *param_2 = uVar1;
    while( true ) {
      if (uVar1 == uVar4) {
        *param_2 = 0;
      }
      if (*param_2 == 0) break;
      puVar3 = (unsigned int *)*param_2;
      if ((unsigned int *)(-(unsigned int)(uVar4 != puVar3[1]) & puVar3[1]) != param_1) {
        return;
      }
      uVar1 = *puVar3;
      *param_2 = uVar1;
      param_1 = puVar3;
    }
    return;
  }
  uVar2 = *(unsigned int *)(uVar1 + 8);
  *param_2 = uVar2;
  if (uVar2 == uVar4) {
    *param_2 = 0;
  }
  uVar4 = lbl_8320A778;
  uVar2 = *param_2;
  if (*param_2 == 0) {
    *param_2 = uVar1;
    return;
  }
  do {
    uVar5 = uVar2;
    uVar1 = *(unsigned int *)(uVar5 + 8);
    *param_2 = uVar1;
    if (uVar1 == uVar4) {
      *param_2 = 0;
    }
    uVar2 = *param_2;
  } while (*param_2 != 0);
  *param_2 = uVar5;
  return;
}

