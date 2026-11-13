extern unsigned int *auStack_30;


double fn_83089B00(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  unsigned char auStack_30 [16];
  
  iVar3 = *(char *)(param_2 + 5) + param_2;
  iVar1 = *(int *)(*(char *)(param_2 + 5) + param_2);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x14) != iVar3)) {
    pcVar2 = (char *)(**(int (***)())(**(int **)(param_1 + 8) + 4))
                               (auStack_30,*(int **)(param_1 + 8),*(int *)(param_1 + 0x14),iVar3);
    if (*pcVar2 != '\0') {
      (**(int (***)())((unsigned int)*(unsigned char *)((*(int *)(param_1 + 0x18) + 0xd) * 0x20 + *(int *)(iVar1 + 0xc) +
                                  *(int *)(param_1 + 0x20)) * 0x14 + *(int *)(param_1 + 0x20) +
                  0x9ac))(*(unsigned int *)(param_1 + 0x14),iVar3,param_1 + 0x20,
                          *(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x10));
    }
  }
  return (double)*(float *)(*(int *)(param_1 + 0xc) + 4);
}

