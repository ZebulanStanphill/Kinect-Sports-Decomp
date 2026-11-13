void fn_82BF7630(int param_1,int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 != 0)) &&
     (iVar4 = *param_2, iVar4 != 0)) {
    if (iVar4 == -1) {
      uVar5 = 0;
      if (*(unsigned int *)(param_1 + 0xc) != 0) {
        iVar2 = 0;
        while (iVar4 = *(int *)(iVar2 + iVar1), iVar4 == 0) {
          uVar5 = uVar5 + 1;
          iVar2 = iVar2 + 4;
          if (*(unsigned int *)(param_1 + 0xc) <= uVar5) {
            *param_2 = 0;
            return;
          }
        }
      }
    }
    iVar2 = *(int *)(iVar4 + 0x10);
    if (iVar2 == 0) {
      uVar5 = *(unsigned int *)(param_1 + 0xc);
      trapWord(6,(unsigned __int64)uVar5,0);
      uVar6 = ((unsigned __int64)*(unsigned int *)(iVar4 + 0x14) -
              (__int64)(int)(*(unsigned int *)(iVar4 + 0x14) / uVar5) * (__int64)(int)uVar5) + 1;
      if ((uVar6 & 0xffffffff) < (unsigned __int64)uVar5) {
        lVar3 = (uVar6 & 0x3fffffff) << 2;
        do {
          iVar2 = *(int *)((int)lVar3 + iVar1);
          if (iVar2 != 0) break;
          uVar6 = uVar6 + 1;
          lVar3 = lVar3 + 4;
        } while ((uVar6 & 0xffffffff) < (unsigned __int64)uVar5);
      }
    }
    *param_2 = iVar2;
    *param_3 = *(unsigned int *)(iVar4 + 8);
    *param_4 = *(unsigned int *)(iVar4 + 0xc);
  }
  return;
}

