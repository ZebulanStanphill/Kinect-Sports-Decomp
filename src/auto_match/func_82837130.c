extern unsigned int *auStack_30;
extern int fn_82647308();
extern int fn_82836D68();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8320A7F0;
extern unsigned int lbl_8320A87C;
extern unsigned int lbl_8320A880;
extern unsigned int lbl_8320A884;
extern unsigned int lbl_8320A888;
extern unsigned int lbl_8320A88C;
extern unsigned int lbl_8320A890;
extern unsigned int lbl_8320A8B4;
extern unsigned int uRam8320a7f4;
extern unsigned int uRam8320a7f8;
extern unsigned int uRam8320a7fc;
extern unsigned int uRam8320a894;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82837130(unsigned int *param_1)

{
  unsigned int auStack_30 [12];
  
  uRam8320a894 = 1;
  fn_82836D68(param_1,auStack_30);
  fn_82647308(0,1,0,auStack_30[0],0xffffffff8320a800,0xffffffff8320a898);
  lbl_8320A888 = 0;
  lbl_8320A884 = 1;
  lbl_8320A87C = 0;
  uRam8320a7fc = lbl_821AAD20;
  uRam8320a7f8 = lbl_821AAD20;
  uRam8320a7f4 = lbl_821AAD20;
  lbl_8320A7F0 = lbl_821AAD20;
  lbl_8320A890 = *param_1;
  lbl_8320A88C = param_1[1];
  lbl_8320A8B4 = param_1[9];
  lbl_8320A880 = *(unsigned char *)((int)param_1 + 0x1d);
  return;
}

