extern int fn_83024AD8();


void fn_83036710(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  uVar2 = 0;
  if (param_1[1] - iVar1 >> 4 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + iVar1) != 0) {
        fn_83024AD8();
      }
      if (*(int *)(iVar3 + iVar1 + 4) != 0) {
        fn_83024AD8();
      }
      iVar1 = *param_1;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar2 < (unsigned int)(param_1[1] - iVar1 >> 4));
  }
  return;
}

