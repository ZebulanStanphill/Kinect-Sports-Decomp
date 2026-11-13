void fn_830972A0(int param_1,int *param_2)

{
  unsigned int iVar1;
  char *pcVar2;
  unsigned char auStack_30 [16];
  
  iVar1 = *param_2;
  if ((iVar1 != 0) && (*(int **)(param_1 + 0x20) != param_2)) {
    pcVar2 = (char *)(*(int (**)())(**(int **)(param_1 + 0x14) + 4))
                               (auStack_30,*(int **)(param_1 + 0x14),*(int **)(param_1 + 0x20),
                                param_2);
    if (*pcVar2 != '\0') {
      (*(int (**)())((unsigned int)*(unsigned char *)((*(int *)(param_1 + 0x24) + 0xd) * 0x20 + *(int *)(iVar1 + 0xc) +
                                  *(int *)(param_1 + 0x30)) * 0x14 + *(int *)(param_1 + 0x30) +
                  0x9ac))(*(unsigned int *)(param_1 + 0x20),param_2,param_1 + 0x30,
                          *(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x1c));
    }
  }
  return;
}

