extern int fn_82BD7F18();


int fn_82BD7C38(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  
  uVar3 = 0;
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = 0;
  }
  if (*(unsigned *)(param_1 + 4) != 0) {
    puVar1 = *(unsigned int **)(*(int *)(param_1 + 4) + 8);
    if (param_2 != 0) {
      if (puVar1 != 0) { *(unsigned int *)*puVar1=0xc0000001; *param_2=*puVar1; fn_82BD7F18(*(unsigned int *)(param_1+4),puVar1); }
    } else {
      while (puVar1 != 0) { *(unsigned int *)*puVar1=0xc0000001; puVar1=(unsigned int *)fn_82BD7F18(*(unsigned int *)(param_1+4),puVar1); }
    }
  }
  uVar3=0;
  piVar2 = (int *)(param_1 + 8);
  do {
    if (((unsigned)*piVar2 != 0) && ((param_3 == (unsigned int *)0x0 || (uVar3 == param_4)))) {
      puVar1 = *(unsigned int **)(*piVar2 + 8);
      if (param_3 != (unsigned int *)0x0) {
        if (puVar1 == (unsigned int *)0x0) {
          return 0;
        }
        *(unsigned int *)*puVar1 = 0xc0000001;
        *param_3 = *puVar1;
        fn_82BD7F18(*(unsigned int *)((uVar3 + 2) * 4 + param_1),puVar1);
        return 0;
      }
      while (puVar1 != (unsigned int *)0x0) {
        *(unsigned int *)*puVar1 = 0xc0000001;
        puVar1 = (unsigned int *)fn_82BD7F18(*piVar2,puVar1);
      }
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar3 < 2);
  return 0;
}

