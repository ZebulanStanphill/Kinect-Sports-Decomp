extern int fn_82A93C18();
extern unsigned int iStack_10;


unsigned int fn_82A863D0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iStack_10;
  
  uVar1 = param_2 & 0xffffffff;
  uVar2 = param_3 & 0xffffffff;
  uVar4 = 1;
  uVar3 = param_4;
  if (1 < (param_4 & 0xffffffff)) {
    do {
      uVar1 = uVar1 >> 1;
      uVar2 = uVar2 >> 1;
      if ((uVar1 == 0) && (uVar3 = uVar4, uVar2 == 0)) break;
      uVar4 = uVar4 + 1;
      uVar3 = param_4;
    } while ((uVar4 & 0xffffffff) < (param_4 & 0xffffffff));
  }
  fn_82A93C18(param_2,param_3,uVar3,0,param_1,0,0,0);
  return iStack_10 + 0xfffU & 0xfffff000;
}

