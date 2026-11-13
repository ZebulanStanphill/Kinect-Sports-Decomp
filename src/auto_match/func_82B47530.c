extern __int64 fn_82AD17B0();
extern int fn_82B47420();


void fn_82B47530(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned int param_6,unsigned __int64 param_7,unsigned int param_8, int param_9)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar1 = fn_82AD17B0(param_1,param_2);
  uVar2 = fn_82AD17B0(param_1,param_4);
  uVar4 = 0;
  if ((param_6 & 0xffffffff) != 0) {
    uVar4 = fn_82AD17B0(param_1,param_6);
  }
  uVar3 = 0;
  if ((param_8 & 0xffffffff) != 0) {
    uVar3 = fn_82AD17B0(param_1,param_8);
  }
  fn_82B47420(param_1,uVar1,param_3,uVar2,param_5,uVar4,param_7,uVar3,param_9);
  return;
}

