void fn_82815360(int param_1,int param_2,unsigned int param_3,unsigned int *param_4,int param_5,int param_6)

{
  unsigned int outer;
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  if (param_3 != 0) {
    puVar4 = (unsigned int *)(param_2 + 8);
    for (outer=0; outer<param_3; ++outer) {
      uVar2=puVar4[-2]; uVar1 = puVar4[-1];
      if ((uVar1 == uVar2) && (uVar1 == param_6 + 1U)) {
        uVar3 = 0;
        uVar1 = *(unsigned int *)(uVar1 * 0xe + *(int *)(param_1 + 0x44) + -6);
        if (*puVar4 != 0) {
          do {
            uVar2 = *param_4;
            if ((uVar2 < uVar1) && (*(unsigned int *)(uVar2 + param_5) < uVar1)) {
              *(unsigned int *)(uVar2 + param_5) = *(unsigned int *)(uVar2 + param_5) + param_5;
            }
            uVar3 = uVar3 + 1;
            param_4 = param_4 + 1;
          } while (uVar3 < *puVar4);
        }
      }
      else {
        param_4 = param_4 + *puVar4;
      }
      puVar4 = puVar4 + 3;

    }
    return;
  }
  return;
}

