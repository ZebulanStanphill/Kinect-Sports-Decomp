extern unsigned int *auStack_30;


unsigned char * fn_82D03028(unsigned char *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  char *pcVar7;
  unsigned char auStack_30 [4];
  int aiStack_2c;
  
  iVar1 = *(int *)(param_2 + 0xa8);
  pcVar7 = (char *)(**(int (***)())(**(int **)(param_2 + 0x98) + 0x14))
                             (auStack_30,*(int **)(param_2 + 0x98),iVar1,
                              *(unsigned int *)(iVar1 + 0xc),param_3,&aiStack_2c);
  if (*pcVar7 == '\0') {
    *param_1 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0xc);
    iVar3 = *(int *)(param_2 + 0x14);
    iVar4 = *(int *)(param_2 + 0x10);
    *param_1 = 1;
    uVar6 = aiStack_2c - iVar2 & 0xfffffff0;
    uVar5 = *(unsigned int *)(iVar3 + iVar4 + 4);
    *(unsigned int *)(param_2 + 0x14) = iVar3 + uVar6;
    *(int *)(iVar1 + 0xc) = aiStack_2c;
    *(unsigned int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + uVar6;
    *(unsigned int *)(*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x10) + 4) =
         (uVar5 & 0xfffffffc) - uVar6 | 2;
  }
  return param_1;
}

