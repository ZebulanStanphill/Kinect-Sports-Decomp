extern unsigned int *auStack_30;
extern int fn_82D6F590();
extern unsigned int lbl_83182A98;


__int64 fn_82D4D858(int param_1)

{
  char *pcVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  int iVar5;
  unsigned char auStack_30 [48];
  
  lVar4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar5 = 0;
    do {
      uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
      puVar3 = (unsigned int *)(iVar5 + *(int *)(param_1 + 0x14));
      pcVar1 = (char *)fn_82D6F590((double)lbl_83182A98,auStack_30,
                                    ((unsigned __int64)*puVar3 & 0xfffffff) * 0x10 + uVar2,
                                    ((unsigned __int64)puVar3[1] & 0xfffffff) * 0x10 + uVar2,
                                    ((unsigned __int64)puVar3[2] & 0xfffffff) * 0x10 + uVar2);
      if (*pcVar1 == '\0') {
        return lVar4;
      }
      lVar4 = lVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while ((int)lVar4 < *(int *)(param_1 + 0x18));
  }
  return -1;
}

