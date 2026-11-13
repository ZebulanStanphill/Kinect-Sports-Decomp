extern unsigned int *auStack_30;
extern int fn_82A1E6A0();
extern int fn_82FE7220();
extern int fn_82FE7320();


unsigned __int64 fn_82FE7A60(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned char auStack_30 [8];
  int *piStack_28;
  int aiStack_24 [9];
  
  aiStack_24[0] = fn_82A1E6A0(0,0,0,0);
  if (aiStack_24[0] == 0) {
    uVar1 = 2;
  }
  else {
    piStack_28 = aiStack_24;
    uVar1 = fn_82FE7320(param_1,0xffffffff82fe72a0,auStack_30,param_2,param_3,1);
    uVar1 = fn_82FE7220(auStack_30,uVar1);
  }
  return uVar1;
}

