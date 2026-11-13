extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_83075D30();
extern int fn_83075D40();
extern int fn_83075D80();
extern int fn_83075D90();


void fn_83076E58(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  fn_83075D30(auStack_40,param_1,param_2);
  fn_83075D30(auStack_50,param_1,param_3);
  uVar1 = fn_83075D40(param_1,param_2);
  uVar2 = fn_83075D40(param_1,param_3);
  fn_83075D80(param_1,param_2);
  fn_83075D80(param_1,param_3);
  fn_83075D90(uVar2,param_1,param_2);
  fn_83075D90(uVar1,param_1,param_3);
  return;
}

