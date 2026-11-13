extern unsigned int lbl_82005CCC;
extern unsigned int uStack_9;


unsigned __int64 fn_83034A08(double param_1,double param_2,int param_3,unsigned int param_4)

{
  unsigned char uVar1;
  unsigned char uStack_9;
  
  if (7 < param_4) {
    return 2;
  }
  uStack_9 = (unsigned char)(__int64)(param_2 * (double)lbl_82005CCC);
  uVar1 = uStack_9;
  uStack_9 = (unsigned char)(__int64)(param_1 * (double)lbl_82005CCC);
  *(unsigned char *)(param_4 + param_3 + 0x48) = uVar1;
  *(unsigned char *)(param_4 + param_3 + 0x40) = uStack_9;
  return 1;
}

