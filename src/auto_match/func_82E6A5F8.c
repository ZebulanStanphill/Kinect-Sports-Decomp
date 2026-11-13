extern int fn_82F68CC0();


void fn_82E6A5F8(int *param_1)

{
  int iVar1;
  unsigned int uVar3;
  __int64 lVar2;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_1;
  iVar4 = 0;
  if ((unsigned __int64)*(unsigned short *)(param_1 + 0x4234) != 0xffffffffffffffff) {
    uVar3 = (unsigned int)*(unsigned short *)(iVar1 + 0x22);
    do {
      iVar5 = 0;
      if (uVar3 != 0) {
        do {
          uVar3 = param_1[0x1df7];
          lVar2 = (__int64)(int)((unsigned int)*(unsigned short *)(iVar1 + 0x22) * iVar4 + iVar5) *
                  (__int64)*(int *)(iVar1 + 0xe4) * 0x70;
          fn_82F68CC0(lVar2 + (unsigned __int64)(unsigned int)param_1[0x1df6],param_1 + 0x1e3b,0x70);
          fn_82F68CC0(lVar2 + (unsigned __int64)uVar3,param_1 + 0x1e3b,0x70);
          uVar3 = (unsigned int)*(unsigned short *)(iVar1 + 0x22);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(unsigned short *)(param_1 + 0x4234) + 1));
  }
  return;
}

