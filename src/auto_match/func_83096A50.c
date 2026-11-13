extern unsigned int *auStack_30;


unsigned char * fn_83096A50(unsigned char *param_1,int param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  unsigned char auStack_30 [1];
  
  iVar1 = *param_3;
  if (((iVar1 != 0) && (*(int **)(param_2 + 0x14) != param_3)) &&
     (pcVar2 = (char *)(**(int (***)())(**(int **)(param_2 + 8) + 4))
                                 (auStack_30,*(int **)(param_2 + 8),*(int **)(param_2 + 0x14),
                                  param_3), *pcVar2 != '\0')) {
    (**(int (***)())((unsigned int)*(unsigned char *)((*(int *)(param_2 + 0x18) + 0xd) * 0x20 + *(int *)(iVar1 + 0xc) +
                                *(int *)(param_2 + 0x20)) * 0x14 + *(int *)(param_2 + 0x20) + 0x9ac)
    )(*(unsigned int *)(param_2 + 0x14),param_3,param_2 + 0x20,*(unsigned int *)(param_2 + 0xc),
      *(unsigned int *)(param_2 + 0x10));
    *param_1 = 1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

