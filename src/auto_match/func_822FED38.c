extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822EA970();
extern int fn_82365BD8();
extern int fn_82376640();
extern unsigned int iStack_54;


unsigned int * fn_822FED38(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                    unsigned __int64 param_5,unsigned int *param_6,unsigned int *param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned int *in_stack_00000054;
  unsigned int auStack_60 [2];
  unsigned char auStack_58 [4];
  int iStack_54;
  
  auStack_60[0] = 0;
  puVar3 = (unsigned int *)fn_822EA970(auStack_58,param_5,param_4,param_3,param_5,auStack_60);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  uVar1 = *in_stack_00000054;
  uVar2 = fn_822C7578((unsigned __int64)*param_1 + 0x40,(unsigned __int64)*param_8 + 4);
  fn_82230218(uVar2,(unsigned __int64)uVar1 + 4,0,0xffffffffffffffff);
  uVar1 = *param_1;
  iVar4 = fn_82365BD8(auStack_60,param_8);
  fn_82376640((unsigned __int64)uVar1 + 0x30,iVar4);
  if (*(int *)(iVar4 + 4) != 0) {
    fn_822315A0();
  }
  fn_822C8B40(param_2,param_1);
  uVar2 = fn_822C7578((unsigned __int64)*param_6 + 0x40,param_5);
  fn_82230218(uVar2,param_5,0,0xffffffffffffffff);
  uVar2 = fn_822C7578((unsigned __int64)*param_7 + 0x40,param_5);
  fn_82230218(uVar2,param_5,0,0xffffffffffffffff);
  return param_1;
}

