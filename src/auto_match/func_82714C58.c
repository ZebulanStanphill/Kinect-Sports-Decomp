extern int fn_8267C5B0();
extern int fn_826829A0();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern unsigned int lbl_8200F4C8;
extern unsigned int lbl_8200F51C;


unsigned int * fn_82714C58(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  
  fn_826C0B08();
  *param_1 = &lbl_8200F51C;
  param_1[4] = &lbl_8200F4C8;
  if ((param_3 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8267C5B0(param_3);
  }
  param_1[0xc] = uVar2;
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),0xb);
  fn_826829A0(param_1 + 4,param_2 + 0x78,uVar1);
  return param_1;
}

