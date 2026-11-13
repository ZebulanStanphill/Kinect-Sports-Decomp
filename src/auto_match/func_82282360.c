extern unsigned int *auStack_60;
extern int fn_82278260();
extern int fn_822824E8();
extern int fn_822828E0();
extern int fn_8251F720();
extern int fn_82520158();
extern int fn_8265C9E0();


unsigned int *
fn_82282360(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,int param_7,unsigned __int64 param_8)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_60 [96];
  
  param_4[0x2d] = 0;
  param_4[0x33] = 0xffffffff;
  param_4[0x34] = 0xffffffff;
  param_4[0x35] = 0;
  param_4[0x36] = 0;
  param_4[0x37] = 0xffffffff;
  iVar1 = fn_8265C9E0(0x3c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82278260(param_1,param_2);
  }
  param_4[0x2c] = uVar2;
  if (param_7 != 0) {
    param_4[0x2d] = param_7;
    fn_822824E8(param_3,param_4,param_8);
  }
  fn_82520158(0xffffffff821a8a18,auStack_60,0);
  uVar2 = fn_8251F720(auStack_60,0);
  iVar1 = param_4[0x2c];
  *param_4 = uVar2;
  *(int (***)())(iVar1 + 0x2c) = fn_822828E0;
  *(unsigned int **)(iVar1 + 0x30) = param_4;
  *(unsigned int *)(iVar1 + 0x34) = 2;
  return param_4;
}

