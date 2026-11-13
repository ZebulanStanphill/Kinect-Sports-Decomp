extern int fn_829F4CD8();
extern int fn_82A0DAE0();
extern int fn_82A0DEE0();


unsigned char fn_82A0E270(unsigned __int64 param_1, unsigned __int64 param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned int in_stack_00000054, int in_stack_0000005c)

{
  unsigned char bVar2;
  int iVar1;
  unsigned char bVar3;


  
  if (in_stack_0000005c == 0) {
    bVar2 = fn_82A0DEE0(param_1,param_2,param_4,param_5,param_6,param_7,param_8,in_stack_00000054)
    ;
  }
  else {
    bVar2 = fn_82A0DAE0();
  }
  iVar1 = fn_829F4CD8(param_3);
  bVar3 = 0xd9;
  if (iVar1 == 0) {
    bVar3 = 0xa7;
  }
  return -(bVar2 < bVar3) & 1;
}

