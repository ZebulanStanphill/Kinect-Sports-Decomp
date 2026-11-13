extern int fn_828106A0();
extern int fn_8281D460();
extern int fn_828625D0();
extern int fn_82862648();


void fn_828626F0(int param_1,unsigned __int64 param_2,int param_3)

{
  __int64 lVar1;
  int iVar2;
  
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x54) + (unsigned __int64)*(unsigned int *)(param_3 + 8);
  fn_828106A0(lVar1);
  fn_8281D460(lVar1 + 0xc);
  iVar2 = 0;
  if (*(short *)(param_1 + 0x38) != 0) {
    lVar1 = 0;
    do {
      fn_828625D0((unsigned __int64)*(unsigned int *)(param_1 + 0x34) + lVar1,param_3);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 0x2c;
    } while (iVar2 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x38));
  }
  iVar2 = 0;
  if (*(short *)(param_1 + 0x40) != 0) {
    lVar1 = 0;
    do {
      fn_82862648((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) + lVar1,param_2,param_3);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 0x14;
    } while (iVar2 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x40));
  }
  return;
}

