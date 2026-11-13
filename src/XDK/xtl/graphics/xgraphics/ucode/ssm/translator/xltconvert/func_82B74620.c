extern int fn_82AB15D0();


unsigned int * fn_82B74620(int param_1,unsigned short *param_2,unsigned int *param_3)

{
  unsigned short uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar1 = *param_2;
  *(unsigned short *)((int)param_3 + 2) = 0x71;
  *param_3 = *param_3 & 0xe000ffff;
  uVar1 = uVar1 & 7;
  *(short *)((int)param_3 + 6) = (short)*(unsigned int *)(iVar2 + 0x5b40);
  param_3[1] = param_3[1] & 0xff00ffff | 0x40000;
  *(short *)((int)param_3 + 10) = (short)*(unsigned int *)(iVar2 + 0x5b44);
  param_3[2] = param_3[2] & 0xff00ffff | 0x440000;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      uVar3 = 1;
      goto LAB_82b746d4;
    }
    if (uVar1 == 3) {
      uVar3 = 2;
      goto LAB_82b746d4;
    }
    if (uVar1 == 4) {
      uVar3 = 3;
      goto LAB_82b746d4;
    }
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x20b6);
  }
  uVar3 = 0;
LAB_82b746d4:
  param_3[3] = (unsigned int)(uVar3 << 0xc) |
               (unsigned int)((uVar3 << 4 | uVar3) << 4) | param_3[3] & 0xffff8888 | (unsigned int)uVar3;
  return param_3 + 4;
}

