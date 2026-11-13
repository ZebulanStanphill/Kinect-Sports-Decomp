extern __int64 fn_828AFF88();
extern int fn_828BDDA0();
extern unsigned int lbl_820257F0;
extern unsigned int lbl_820257F8;


unsigned int * fn_828DA5D8(unsigned int *param_1,__int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  
  fn_828BDDA0();
  *param_1 = &lbl_820257F8;
  param_1[0x14] = &lbl_820257F0;
  *(unsigned char *)(param_1 + 0x20) = 0;
  *(unsigned __int64 *)(param_1 + 0x22) = *(unsigned __int64 *)(param_3 + 0x88);
  *(unsigned __int64 *)(param_1 + 0x24) = 0xffffffffffffffff;
  uVar1 = fn_828AFF88(param_2 + 0x278);
  *(unsigned __int64 *)(param_1 + 0x26) = uVar1;
  *(unsigned __int64 *)(param_1 + 0x2a) = 0xffffffffffffffff;
  return param_1;
}

