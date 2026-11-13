extern int fn_82865170();
extern int fn_82866400();


unsigned __int64 fn_82874940(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0x20260000;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    uVar5 = 0;
    if (iVar2 != *(int *)(param_1 + 8)) {
      iVar3 = iVar2 + 4;
      iVar4 = iVar2;
      do {
        if (iVar3 == *param_2) {
          *(unsigned char *)(uVar5 * 0x70 + iVar2) = 0;
          *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) & ~(1 << (uVar5 & 0x3f));
          *param_2 = 0;
          fn_82865170();
          iVar2 = fn_82866400();
          *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + -1;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          return 0x20260000;
        }
        iVar4 = iVar4 + 0x70;
        iVar3 = iVar3 + 0x70;
        uVar5 = uVar5 + 1;
      } while (iVar4 != *(int *)(param_1 + 8));
    }
    uVar1 = 0xffffffffa0260000;
  }
  return uVar1;
}

