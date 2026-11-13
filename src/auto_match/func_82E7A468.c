extern int fn_82E5AEC8();
extern int fn_82E76830();
extern int fn_82E78738();
extern int fn_82E78ED8();
extern int fn_82EEB240();
extern int fn_82EEB540();
extern unsigned int lbl_8215F018;
extern unsigned int lbl_8215F020;


unsigned int * fn_82E7A468(unsigned int *param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  
  *param_1 = &lbl_8215F020;
  param_1[1] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x4e] = 0;
  fn_82E5AEC8(param_1 + 0x5e);
  fn_82EEB240(param_1 + 0x79);
  param_1[0x86] = 0;
  param_1[0x88] = param_1 + 0x87;
  param_1[0x87] = param_1 + 0x87;
  param_1[0x8b] = param_1 + 0x8a;
  param_1[0x8a] = param_1 + 0x8a;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(unsigned char *)(param_1 + 0x8e) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(unsigned short *)(param_1 + 0x97) = 0;
  *(unsigned char *)((int)param_1 + 0x25e) = 0;
  param_1[0xd4] = 0;
  param_1[0x91] = &lbl_8215F018;
  param_1[0xd5] = 0;
  if ((param_2 & 0xffffffff) == 0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = fn_82E78ED8(param_1);
    if (((-1 < iVar1) && (iVar1 = fn_82E78738(param_1,param_2), -1 < iVar1)) &&
       (iVar1 = fn_82E76830(param_1,param_2), -1 < iVar1)) {
      iVar1 = fn_82EEB540(param_1 + 0x79,0x148,10,1,0);
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  return param_1;
}

