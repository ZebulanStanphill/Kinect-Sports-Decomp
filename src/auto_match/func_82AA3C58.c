extern int fn_82631D60();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82AA1BA8();
extern int fn_82AA3B58();
extern int fn_82AA5540();
extern int fn_82D7E470();
extern unsigned int iStack_254;
extern unsigned int uStack_260;


unsigned __int64 fn_82AA3C58(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned int *param_5,unsigned __int64 param_6,unsigned __int64 param_7,int (**param_8)())

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int in_stack_00000064;
  int aiStack_270 [4];
  unsigned int uStack_260;
  int (**pcStack_25c)();
  short sStack_258;
  int iStack_254;
  
  lVar3 = fn_8265C940(param_4,0x24870000);
  if (lVar3 == 0) {
    uVar4 = 0xffffffff8007000e;
  }
  else {
    uVar4 = fn_82AA3B58(param_1,param_2,lVar3,param_4,param_5,param_6,param_7,param_8);
    if (-1 < (__int64)uVar4) {
      fn_82631D60(param_3,lVar3,*param_5);
    }
    fn_8265C990(lVar3,0x24870000);
    if ((-1 < (int)uVar4) && ((param_6 & 0x10) == 0)) {
      aiStack_270[0] = 0;
      iVar2 = (in_stack_00000064 & 0x7f) << 10;
      uVar4 = fn_82D7E470(param_3,*param_5,iVar2,0,0xffffffff82aa0550,aiStack_270);
      if (((__int64)uVar4 < 0) || (aiStack_270[0] != 0)) {
        uVar1 = (uVar4 & 0xffffffff) >> 0x1f;
        uStack_260 = (unsigned int)param_7;
        iStack_254 = (int)uVar1;
        sStack_258 = 0;
        if ((int)uVar4 < 0) {
          uVar5 = 0xffffffff82033f00;
        }
        else {
          uVar5 = 0xffffffff82033ecc;
        }
        pcStack_25c = param_8;
        (*param_8)(param_7,uVar1,(unsigned __int64)(iStack_254 == 0) + 0x1bbd,uVar5);
        fn_82D7E470(param_3,*param_5,iVar2,0,0xffffffff82aa1c88,&uStack_260);
        if (sStack_258 != 0) {
          fn_82AA1BA8(&uStack_260);
        }
        fn_82AA5540(param_3,*param_5,0x44,0xffffffff82aa1c88,&uStack_260,0,0);
        if (sStack_258 != 0) {
          fn_82AA1BA8(&uStack_260);
        }
      }
    }
  }
  return uVar4;
}

