extern int fn_82FF0838();
extern int fn_83032B08();
extern int fn_83038468();
extern int iRam831bc8e0;
extern unsigned int lbl_8217D264;
extern unsigned int lbl_8217D268;
extern unsigned int lbl_8217D270;
extern unsigned int lbl_821AAD20;


unsigned int * fn_83038550(unsigned int *param_1)

{
  int iVar1;
  unsigned int *in_r7;
  unsigned __int64 in_r9;
  char in_r10;
  int *in_stack_0000005c;
  
  fn_82FF0838();
  *param_1 = &lbl_8217D270;
  param_1[1] = &lbl_8217D268;
  param_1[3] = &lbl_8217D264;
  iVar1 = in_r7[4];
  param_1[0x62] = iVar1;
  if (iVar1 != 0) {
    fn_83032B08();
  }
  param_1[0x74] = 0;
  param_1[0x76] = lbl_821AAD20;
  param_1[0x77] = 0;
  param_1[0x78] = param_1[0x78] & 0xfffffff;
  param_1[0x75] = in_stack_0000005c;
  *(unsigned char *)(param_1 + 0x79) = in_r10 << 7 | *(unsigned char *)(param_1 + 0x79) & 0x1f;
  (**(int (***)())(*in_stack_0000005c + 4))();
  if (param_1[0x19] == 0) {
    iVar1 = iRam831bc8e0 + 1;
    param_1[0x19] = iRam831bc8e0;
    iRam831bc8e0 = iVar1;
  }
  param_1[0x4c] = in_r7[5];
  if (param_1[0x16] == 0) {
    param_1[0x16] = *in_r7;
    *in_r7 = 0;
    *(unsigned char *)(param_1 + 0x18) = *(char *)(in_r7 + 3) << 7 | *(unsigned char *)(param_1 + 0x18) & 0x7f;
  }
  if (param_1[0x17] == 0) {
    param_1[0x17] = in_r7[1];
    in_r7[1] = 0;
    *(unsigned char *)(param_1 + 0x18) =
         (*(unsigned char *)((int)in_r7 + 0xd) & 1) << 6 | *(unsigned char *)(param_1 + 0x18) & 0xbf;
  }
  param_1[99] = 0;
  fn_83038468(param_1,in_r9);
  return param_1;
}

