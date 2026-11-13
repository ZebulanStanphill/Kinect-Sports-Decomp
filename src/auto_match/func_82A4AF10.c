extern unsigned int *auStack_60;
extern int fn_82A5B318();


__int64 fn_82A4AF10(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  __int64 lVar1;
  int *piVar2;
  unsigned int *in_stack_00000054;
  unsigned int auStack_60 [24];
  
  piVar2 = (int *)(param_1 + 0x1c);
  (**(int (***)())(*(int *)(param_1 + 0x1c) + 8))(piVar2);
  lVar1 = param_3 + 4;
  if ((param_3 & 0xffffffff) == 0) {
    lVar1 = 0;
  }
  auStack_60[0] = 0;
  lVar1 = fn_82A5B318(param_1 + 4,param_2,lVar1,auStack_60,param_4,param_5,param_6,param_7);
  if (-1 < lVar1) {
    *in_stack_00000054 = auStack_60[0];
  }
  (**(int (***)())(*piVar2 + 0x14))(piVar2);
  return lVar1;
}

