extern int fn_82574268();


void fn_82569A68(int param_1,int param_2)

{
  unsigned int iVar2;
  int uVar1;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xd4)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0xd8) + 0x10);
      if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x8c0), iVar2 != 0)) {
        puVar5 = (unsigned int *)(iVar2 + 0x198);
        if (puVar5 != (unsigned int *)0x0) {
          iVar2 = (*(int (**)())(*(int *)*puVar5 + 0x1c))(*puVar5);
          if (iVar2 != 0) {
            uVar1 = (*(int (**)())(*(int *)*puVar5 + 0x1c))(*puVar5);
            fn_82574268(uVar1,param_2);
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x30;
    } while (iVar3 < *(int *)(param_1 + 0xd4));
  }
  return;
}

