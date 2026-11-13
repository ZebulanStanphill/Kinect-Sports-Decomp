extern unsigned int *auStack_40;
extern int fn_82A1E6A0();
extern int fn_82FE7220();
extern int fn_82FE7428();


unsigned __int64
fn_82FE7C08(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  unsigned char auStack_40 [8];
  int *piStack_38;
  int aiStack_34 [13];
  
  aiStack_34[0] = fn_82A1E6A0(0,0,0,0);
  if (aiStack_34[0] == 0) {
    uVar1 = 2;
  }
  else {
    piStack_38 = aiStack_34;
    uVar1 = fn_82FE7428(0xffffffff82fe72a0,auStack_40,param_1 == 0,param_2,param_3,param_4,
                              param_5,1);
    uVar1 = fn_82FE7220(auStack_40,uVar1);
  }
  return uVar1;
}

