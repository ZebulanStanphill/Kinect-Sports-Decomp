extern unsigned int *auStack_70;


unsigned char *
fn_82D44790(unsigned char *param_1,int param_2,int param_3,int param_4,
             int param_5,int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  char *pcVar2;
  int uVar3;
  int lVar4;
  unsigned char auStack_70 [16];
  
  uVar3 = *(int *)(param_2 + 0x28) - 1;
  if (uVar3 >= 0) {
    lVar4 = uVar3 * 4;
    do {
      iVar1 = *(int *)(*(int *)(param_2 + 0x24) + (int)lVar4);
      pcVar2 = (char *)(*(int (**)())*(unsigned int *)(iVar1 + 0xc))
                                 (auStack_70,iVar1 + 0xc,param_3,param_4,param_5,param_6,param_7,
                                  param_8,param_9);
      if (*pcVar2 == '\0') {
        *param_1 = 0;
        return param_1;
      }
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + -4;
    } while (uVar3 >= 0);
  }
  *param_1 = 1;
  return param_1;
}

