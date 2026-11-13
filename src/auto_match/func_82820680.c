extern int fn_828142D8();


void fn_82820680(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int aiStack_40;
  
  iVar1 = *(int *)(param_1 + 0x20);
  uVar3 = 0;
  if (*(char *)(*(int *)(iVar1 + 0x1c) + 0x38) != '\0') {
    iVar4 = 0;
    do {
      if (*(char *)(*(int *)(iVar1 + 0x28) + uVar3) == '\0') {
        iVar2 = *(int *)(param_1 + 0x30);
        fn_828142D8(*(unsigned int *)(param_1 + 0x34) + *(unsigned int *)(iVar2 + iVar4)
                          ,&aiStack_40);
        if (aiStack_40 != 0) {
          (*(int (**)())(aiStack_40 + 0x10))
                    (*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(iVar2 + iVar4 + 0xd));
        }
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x21;
    } while (uVar3 < *(unsigned char *)(*(int *)(iVar1 + 0x1c) + 0x38));
  }
  return;
}

