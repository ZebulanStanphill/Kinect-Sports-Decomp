extern unsigned int *auStack_60;
extern int fn_8262FEC8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_8263C7F0();
extern int fn_8263C910();
extern int fn_82F68CC0();
extern unsigned int lbl_8320A88C;
extern unsigned int lbl_8320A890;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8320A89C;
extern unsigned int lbl_8320A8A0;
extern unsigned int lbl_8320A8A4;
extern unsigned int lbl_8320A8A8;
extern unsigned int lbl_8320A8B0;
extern unsigned int lbl_8320A8B4;
extern unsigned int lbl_8320A8B8;
extern unsigned int uRam8320a840;
extern unsigned int uStack_58;


void fn_828373B8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned int param_6)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned char auStack_60 [8];
  unsigned __int64 uStack_58;
  
  if (lbl_8320A8B4 == 0) {
    return;
  }
  fn_8263A1B8(lbl_8320A898,0,0);
  fn_8263A508(lbl_8320A898,0);
  fn_82F68CC0(0xffffffff8320a7b0,param_1,(param_2 & 0xfffffff) << 4);
  lbl_8320A89C = (int)param_2;
  uVar2 = 0;
  uVar3 = 0;
  if (0 < lbl_8320A89C) {
    piVar4 = (int *)(param_1 + 0xc);
    do {
      if ((int)uVar3 < piVar4[-1] - piVar4[-3]) {
        uVar3 = piVar4[-1] - piVar4[-3];
      }
      if ((int)uVar2 < *piVar4 - piVar4[-2]) {
        uVar2 = *piVar4 - piVar4[-2];
      }
      piVar4 = piVar4 + 4;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  if ((param_5 & 0xffffffff) == 0) {
    uVar2 = uVar2 + 0xf & 0xfffffff0;
  }
  else {
    if ((param_5 & 0xffffffff) != 1) {
      if ((param_5 & 0xffffffff) < 3) {
        uVar2 = uVar2 + 7 & 0xfffffff8;
        uVar3 = uVar3 + 0x27 & 0xffffffd8;
      }
      goto LAB_828374c4;
    }
    uVar2 = uVar2 + 7 & 0xfffffff8;
  }
  uVar3 = uVar3 + 0x4f & 0xffffffb0;
LAB_828374c4:
  uVar3 = uVar3 + 0x1f & 0xffffffe0;
  uVar2 = uVar2 + 0x1f & 0xffffffe0;
  if (lbl_8320A8A0 != 0) {
    fn_8262FEC8();
    lbl_8320A8A0 = 0;
  }
  uStack_58 = 0;
  lbl_8320A8A0 = fn_8263C910(uVar3,uVar2,param_3,param_5,auStack_60);
  fn_8263A1B8(lbl_8320A898,0);
  if (lbl_8320A8A4 != 0) {
    fn_8262FEC8();
    lbl_8320A8A4 = 0;
  }
  lbl_8320A8A4 = fn_8263C910(uVar3,uVar2,param_4,param_5,auStack_60);
  fn_8263A508(lbl_8320A898);
  piVar4 = (int *)&lbl_8320A8A8;
  do {
    if (*piVar4 != 0) {
      fn_8262FEC8();
      *piVar4 = 0;
    }
    iVar1 = fn_8263C7F0(lbl_8320A890,lbl_8320A88C,1,1,0,uRam8320a840,0,3);
    *piVar4 = iVar1;
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < -0x7cdf5750);
  lbl_8320A8B8 = 0;
  lbl_8320A8B0 = param_6;
  return;
}

