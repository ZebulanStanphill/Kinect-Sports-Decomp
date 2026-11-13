extern unsigned int *auStack_30;


double fn_83099BC0(int param_1,int *param_2)

{
  float fVar1;
  unsigned int iVar2;
  char *pcVar3;
  unsigned char auStack_30 [16];
  
  iVar2 = *param_2;
  if ((iVar2 != 0) && (*(int **)(param_1 + 0x20) != param_2)) {
    pcVar3 = (char *)(*(int (**)())(*(int *)(*(int *)(param_1 + 0x18) + 8) + 4))
                               (auStack_30,*(int *)(param_1 + 0x18) + 8,*(int **)(param_1 + 0x20),
                                param_2);
    if (*pcVar3 != '\0') {
      (*(int (**)())((unsigned int)*(unsigned char *)((*(int *)(param_1 + 0x24) + 0xd) * 0x20 + *(int *)(iVar2 + 0xc) +
                                  *(int *)(param_1 + 0x30)) * 0x14 + *(int *)(param_1 + 0x30) +
                  0x9ac))(*(unsigned int *)(param_1 + 0x20),param_2,param_1 + 0x30,
                          *(unsigned int *)(param_1 + 0x1c),0);
      fVar1 = *(float *)(*(int *)(param_1 + 0x1c) + 4);
      goto switchD_82dbea0c_default;
    }
  }
  fVar1 = *(float *)(*(int *)(param_1 + 0x1c) + 4);
switchD_82dbea0c_default:
  return (double)fVar1;
}

