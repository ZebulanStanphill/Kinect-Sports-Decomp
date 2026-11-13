extern unsigned int *auStack_74;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_827EECE8();
extern int fn_82810328();


unsigned __int64 fn_827EEDE8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  float *in_stack_00000054;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [12];
  unsigned char auStack_74 [116];
  
  fn_82810328(param_6,param_7,auStack_80);
  fn_82810328(param_6,param_8,auStack_74);
  fn_82810328(param_4,param_6,auStack_90);
  uVar1 = fn_827EECE8(param_1,param_2,param_3,auStack_90,param_5);
  fn_82810328(param_7,param_6,auStack_80);
  fn_82810328(param_7,param_8,auStack_74);
  fn_82810328(param_4,param_7,auStack_90);
  uVar2 = fn_827EECE8(param_1,param_2,(double)*in_stack_00000054,auStack_90,param_5);
  fn_82810328(param_8,param_7,auStack_80);
  fn_82810328(param_8,param_6,auStack_74);
  fn_82810328(param_4,param_8,auStack_90);
  uVar3 = fn_827EECE8(param_1,param_2,(double)*in_stack_00000054,auStack_90,param_5);
  return uVar3 | uVar2 | uVar1;
}

