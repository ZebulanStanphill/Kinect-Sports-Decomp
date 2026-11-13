extern int fn_82CEA280();


int fn_82DEACE8(int param_1,int param_2,unsigned char *param_3,int *param_4,unsigned char *param_5)

{
  unsigned int iVar1;
  int iVar2;
  unsigned char cVar3;
  unsigned int uVar4;
  
  uVar4 = *(unsigned char *)(param_2 + 0xf) >> 2 & 1;
  iVar1 = *(int *)(*(int *)((uVar4 + 0x16) * 4 + param_1) + 0x98);
  *param_5 = *(unsigned char *)(param_2 + 0xe);
  if (iVar1 != 0) {
    iVar2 = *(int *)((*(unsigned char *)(*(int *)(param_1 + 0x3c) + 8) * uVar4 + 5) * 4 + param_2);
    *param_4 = iVar2;
    if ((iVar2 != -1) && (cVar3 = fn_82CEA280(iVar1 + 0x1c,iVar2,0), cVar3 != '\0')) {
      return iVar1;
    }
    if (*(char *)(iVar1 + 0x14) != '\0') {
      *param_3 = 1;
      return iVar1;
    }
  }
  return 0;
}

