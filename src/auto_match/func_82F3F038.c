extern int fn_82A3F758();
extern int fn_82E4FE40();
extern int fn_82E50BE8();


unsigned __int64 fn_82F3F038(int param_1,short *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  short *psVar4;
  int iVar5;
  unsigned int uVar6;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    fn_82E4FE40();
  }
  *(unsigned int *)(param_1 + 0x50) = 0;
  if (param_2 == (short *)0x0) {
LAB_82f3f11c:
    *(unsigned int *)(param_1 + 0x5c) = uVar6;
    uVar3 = 0;
  }
  else {
    iVar5 = 0x7fffffff;
    psVar4 = param_2;
    do {
      if (*psVar4 == 0) break;
      iVar5 = iVar5 + -1;
      psVar4 = psVar4 + 1;
    } while (iVar5 != 0);
    if (iVar5 != 0) {
      uVar6 = 0x80000000 - iVar5;
      uVar1 = uVar6 & 0x7fffffff;
      if (0x7fffffff < uVar6) {
        uVar1 = 0xffffffff;
      }
      uVar2 = fn_82E50BE8(uVar1,0,0,0,0);
      *(int *)(param_1 + 0x50) = (int)uVar2;
      if ((uVar2 & 0xffffffff) == 0) {
        return 0xffffffff8007000e;
      }
      if (uVar6 < 0x80000000) {
        uVar3 = fn_82A3F758(uVar2,uVar6,param_2);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        *(unsigned short *)(iVar5 * -2 + *(int *)(param_1 + 0x50) + -2) = 0;
        goto LAB_82f3f11c;
      }
    }
    uVar3 = 0xffffffff80070057;
  }
  return uVar3;
}

