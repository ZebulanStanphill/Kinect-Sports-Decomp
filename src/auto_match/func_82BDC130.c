extern int fn_82BD7C38();


void fn_82BDC130(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int *piVar4;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    piVar4 = (int *)(param_1 + 100);
    puVar3 = (unsigned int *)(param_1 + 0x50);
    do {
      fn_82BD7C38(*puVar3,0,0,0);
      while (iVar1 = *piVar4, iVar1 != 0) {
        if (iVar1 == piVar4[1]) {
          piVar4[1] = 0;
        }
        *piVar4 = *(int *)(iVar1 + 4);
        *(unsigned int *)(iVar1 + 4) = 0;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar2 < *(unsigned int *)(param_1 + 0x88));
  }
  while (iVar1 = *(int *)(param_1 + 0x74), iVar1 != 0) {
    if (iVar1 == *(int *)(param_1 + 0x78)) {
      *(unsigned int *)(param_1 + 0x78) = 0;
    }
    *(int *)(param_1 + 0x74) = *(int *)(iVar1 + 4);
    *(unsigned int *)(iVar1 + 4) = 0;
  }
  return;
}

