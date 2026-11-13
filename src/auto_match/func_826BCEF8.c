extern unsigned int *auStack_20;
extern int fn_826BCD88();
extern int fn_826BCE88();
extern unsigned int lbl_8200A06A;


unsigned __int64 fn_826BCEF8(unsigned __int64 param_1)

{
  int iVar1;
  unsigned short auStack_20 [4];
  
  iVar1 = fn_826BCD88(0xffffffff82009988,param_1);
  if (iVar1 == 0) {
    param_1 = param_1 & 0xffff;
  }
  else {
    auStack_20[0] = (unsigned short)param_1;
    iVar1 = fn_826BCE88(0xffffffff8200a068,0,0x27c,auStack_20,0xffffffff826bcdf0);
    param_1 = (unsigned __int64)*(unsigned short *)(&lbl_8200A06A + iVar1 * 4);
  }
  return param_1;
}

