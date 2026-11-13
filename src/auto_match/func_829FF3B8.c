typedef unsigned char bool;
extern unsigned int *auStack_64;
extern int fn_829F9E30();
extern int fn_829FE8F8();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000040;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned __int64 fn_829FF3B8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  float fVar2;
  int in_r0;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  bool bVar5;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  float in_stack_00000028;
  float in_stack_00000048;
  unsigned int uStack_70;
  struct { unsigned int first; unsigned int second; } stack_pair_6c;

  unsigned int auStack_64 [13];
  
  puVar1 = (unsigned int *)((unsigned int)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fVar2 = lbl_821AAD20;
  bVar5 = in_stack_00000028 == lbl_821AAD20;
  puVar1 = (unsigned int *)((unsigned int)(&stack0x00000040 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  if ((bVar5) || (in_stack_00000048 == fVar2)) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    fn_829FE8F8(&uStack_70,&stack_pair_6c.first);
    fn_829FE8F8(auStack_64,&stack_pair_6c.second);
    uVar3 = fn_829F9E30(param_1,uStack_70,stack_pair_6c.first,param_2,auStack_64[0],stack_pair_6c.second,param_3);
    uVar4 = fn_829F9E30(param_1,uStack_70,stack_pair_6c.second,param_2,auStack_64[0],stack_pair_6c.second,param_3);
    if ((uVar4 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
      uVar3 = uVar4;
    }
    uVar4 = fn_829F9E30(param_1,auStack_64[0],stack_pair_6c.first,param_2,auStack_64[0],stack_pair_6c.second,
                              param_3);
    if ((uVar4 & 0xffffffff) <= (uVar3 & 0xffffffff)) {
      uVar3 = uVar4;
    }
  }
  return uVar3;
}

