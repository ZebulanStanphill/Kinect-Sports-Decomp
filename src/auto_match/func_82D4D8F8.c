extern unsigned int *auStack_30;
extern int fn_82D6F590();
extern unsigned int lbl_83182A98;


int fn_82D4D8F8(int param_1,int param_2)

{
  char *pcVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned char auStack_30 [48];
  
  param_2 = param_2 + 1;
  if (param_2 < *(int *)(param_1 + 0x18)) {
    iVar4 = param_2 * 0x10;
    do {
      uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
      puVar3 = (unsigned int *)(*(int *)(param_1 + 0x14) + iVar4);
      pcVar1 = (char *)fn_82D6F590((double)lbl_83182A98,auStack_30,
                                    ((unsigned __int64)*puVar3 & 0xfffffff) * 0x10 + uVar2,
                                    ((unsigned __int64)puVar3[1] & 0xfffffff) * 0x10 + uVar2,
                                    ((unsigned __int64)puVar3[2] & 0xfffffff) * 0x10 + uVar2);
      if (*pcVar1 == '\0') {
        return param_2;
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 0x10;
    } while (param_2 < *(int *)(param_1 + 0x18));
  }
  return -1;
}

