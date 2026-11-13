extern unsigned int *auStack_2c;
extern int fn_82A5BF30();
extern int fn_82A772B0();
extern int fn_82A78868();
extern unsigned int uStack_30;


__int64 fn_82A5C010(unsigned __int64 param_1, unsigned __int64 param_2, unsigned int *param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned int in_stack_00000054, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, unsigned int in_stack_0000006c, unsigned int in_stack_00000074)

{
  __int64 lVar1;





  unsigned int uStack_30;
  unsigned int auStack_2c;
  
  uStack_30 = 0;
  auStack_2c = 0;
  lVar1 = fn_82A78868(param_4,param_5,param_6,param_7,param_8,in_stack_00000054,&uStack_30);
  if ((-1 < lVar1) &&
     (lVar1 = fn_82A5BF30(param_1,in_stack_0000006c,param_2,uStack_30,in_stack_0000005c,
                            in_stack_00000074,&auStack_2c), -1 < lVar1)) {
    fn_82A772B0(uStack_30,in_stack_00000064);
    *param_3 = auStack_2c;
  }
  return lVar1;
}

