extern unsigned int *auStack_40;
extern int fn_8306ED30();
extern int fn_83075D30();
extern int fn_83075D80();
extern unsigned int lbl_821AAD20;


void fn_8306DA38(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int in_r0;
  __int64 lVar2;
  unsigned char in_vs32 [16];
  unsigned char in_vs35 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  unsigned char auStack_40 [1];
  
  fn_83075D30(auStack_40,param_2,0);
  altv207_13(in_vs32,in_vs35);
  lVar2 = 0;
  puVar1 = (unsigned int *)(in_r0 + param_1 + 0x1a60 & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  *(unsigned int *)(param_1 + 0x1a64) = lbl_821AAD20;
  do {
    fn_83075D30(auStack_40,param_2,lVar2);
    fn_8306ED30();
    fn_83075D80(param_2,lVar2);
    lVar2 = lVar2 + 1;
  } while ((int)lVar2 < 0x14);
  return;
}

