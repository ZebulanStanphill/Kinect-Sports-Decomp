extern unsigned int *auStack_2c;
extern int fn_827D96A0();
extern int fn_827E0250();
extern int fn_827E0438();
extern int fn_827E0658();
extern int fn_827E8720();
extern unsigned int uStack_30;


unsigned __int64 fn_827DDE28(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uStack_30;
  unsigned int auStack_2c [11];
  
  uStack_30 = fn_827D96A0(param_2);
  fn_827E0658(auStack_2c,param_1,&uStack_30);
  uVar2 = (unsigned __int64)auStack_2c[0];
  if (uVar2 == *(unsigned int *)(param_1 + 4)) {
    uVar1 = 6;
  }
  else {
    uVar1 = fn_827E0250(param_1,uVar2 + 8);
    fn_827E0438(param_1,uVar2,uVar1);
    fn_827E8720(auStack_2c,param_1 + 4,uVar2);
    uVar1 = 0;
  }
  return uVar1;
}

