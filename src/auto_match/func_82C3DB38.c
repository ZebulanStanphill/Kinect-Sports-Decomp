extern int fn_82F691F0();


void fn_82C3DB38(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  
  iVar2 = 0;
  iVar1 = *param_2;
  iVar4 = 0;
  if (0 < (__int64)(int)((unsigned int)*(unsigned short *)(param_1 + 0x22) * (unsigned int)*(unsigned short *)(param_1 + 0x22)) *
          (__int64)iVar1) {
    iVar3 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(unsigned short *)(param_2[7] + iVar3) = 0;
      iVar3 = iVar3 + 2;
    } while (iVar4 < (int)((unsigned int)*(unsigned short *)(param_1 + 0x22) * (unsigned int)*(unsigned short *)(param_1 + 0x22) *
                          iVar1));
  }
  iVar4 = 0;
  if ((__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x22) *
      (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x22) != 0) {
    iVar3 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(unsigned short *)(param_2[9] + iVar3) = 0;
      iVar3 = iVar3 + 2;
    } while (iVar4 < (int)((unsigned int)*(unsigned short *)(param_1 + 0x22) * (unsigned int)*(unsigned short *)(param_1 + 0x22)));
  }
  uVar5 = (unsigned int)*(unsigned short *)(param_1 + 0x22);
  iVar4 = 0;
  if (*(unsigned short *)(param_1 + 0x22) != 0) {
    do {
      iVar3 = uVar5 * iVar4;
      iVar4 = iVar4 + 1;
      *(unsigned short *)(iVar3 * 2 + param_2[9]) = 0;
      uVar5 = (unsigned int)*(unsigned short *)(param_1 + 0x22);
    } while (iVar4 < (int)uVar5);
  }
  if (*(int *)(param_1 + 0x294) == 1) {
    iVar4 = 0;
    if (0 < (__int64)(int)(*(int *)(param_1 + 0x298) * (unsigned int)*(unsigned short *)(param_1 + 0x22)) *
            (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x22)) {
      iVar3 = 0;
      do {
        iVar4 = iVar4 + 1;
        *(unsigned short *)(iVar3 + *(int *)(param_1 + 0x2b4)) =
             *(unsigned short *)(iVar3 + *(int *)(param_1 + 0x2b8));
        iVar3 = iVar3 + 2;
        uVar5 = (unsigned int)*(unsigned short *)(param_1 + 0x22);
      } while (iVar4 < (int)(*(int *)(param_1 + 0x298) * uVar5 * uVar5));
    }
    if ((__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x22) *
        (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x22) != 0) {
      iVar4 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(unsigned short *)(*(int *)(param_1 + 700) + iVar4) =
             *(unsigned short *)(*(int *)(param_1 + 0x2c0) + iVar4);
        iVar4 = iVar4 + 2;
        uVar5 = (unsigned int)*(unsigned short *)(param_1 + 0x22);
      } while (iVar2 < (int)(uVar5 * uVar5));
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2[6],0,((__int64)(int)uVar5 * (__int64)iVar1 & 0x1fffffffU) << 3);
}

