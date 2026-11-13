extern int fn_82F68B64();
extern int fn_82FAC3C0();
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642F0;


unsigned __int64 fn_82FAC4B8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*param_1 - 10;
  if (3 < (uVar2 & 0xffffffff)) {
    return 3;
  }
  if ((int)uVar2 == 0) {
    uVar1 = fn_82F68B64(lbl_832642F0,param_1,param_2,(unsigned __int64)lbl_832642E0 + 4);
    return uVar1;
  }
  if ((unsigned __int64)*param_1 == 0xb) {
    uVar1 = fn_82F68B64(lbl_832642F0,param_1,param_2,param_3);
    return uVar1;
  }
  if (uVar2 != 2) {
    uVar1 = fn_82FAC3C0(lbl_832642F0,param_1,param_2,(unsigned __int64)lbl_832642E0 + 4);
    return uVar1;
  }
  uVar1 = fn_82F68B64(lbl_832642F0,param_1,param_2,(unsigned __int64)lbl_832642E0 + 4);
  return uVar1;
}

