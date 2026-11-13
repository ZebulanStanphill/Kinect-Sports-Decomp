extern unsigned int iStack_3c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82F98760(int param_1,int *param_2,int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  char cVar2;
  int iVar1;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  __int64 lVar6;
  int iStack_3c;
  
  *(unsigned int **)(param_1 + 4) = param_4;
  puVar3 = (unsigned int *)(param_1 + 4);
  lVar6 = 5;
  do {
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *param_4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(unsigned char *)(param_1 + 0x3e) = 0;
  uVar4 = 0;
  for (uVar5 = param_5[1] >> 0xe; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
    uVar4 = uVar4 + 1;
  }
  *(unsigned int *)(param_1 + 0x20) = uVar4 & 0xff;
  cVar2 = (**(int (***)())(*param_3 + 4))(param_3);
  *(char *)(param_1 + 0x40) = cVar2;
  if ((((param_5[1] & 0x20000) != 0) && (*(char *)(param_1 + 0x19) == '\0')) &&
     (*(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1, cVar2 != '\0')) {
    *(unsigned char *)(param_1 + 0x3e) = 1;
  }
  iStack_3c = (int)(__int64)((float)*param_5 * *(float *)(param_1 + 8));
  *(int *)(param_1 + 0x28) = iStack_3c;
  if (((__int64)iStack_3c * (__int64)*(int *)(param_1 + 0x20) & 0x3fffffffU) != 0) {
    iVar1 = (**(int (***)())(*param_2 + 4))(param_2);
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 == 0) {
      return 0x34;
    }
  }
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned char *)(param_1 + 0x3c) = 1;
  *(unsigned char *)(param_1 + 0x3d) = 0;
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(unsigned int *)(param_1 + 0xc) = lbl_821AAD20;
  }
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x14);
  *(unsigned int *)(param_1 + 0x38) = *(unsigned int *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(param_1 + 0x10);
  }
  else {
    *(unsigned int *)(param_1 + 0x34) = lbl_82002AE0;
  }
  return 1;
}

