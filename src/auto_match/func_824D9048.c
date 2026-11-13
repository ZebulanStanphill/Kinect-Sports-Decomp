extern unsigned int *auStack_100;
extern int fn_824D9220();
extern int fn_824D94E0();
extern int fn_824D9D48();
extern int fn_8255A070();
extern int fn_8255AE78();
extern int fn_82F6D9FC();
extern int fn_82F6DC94();
extern unsigned int lbl_821CA460;


void fn_824D9048(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  unsigned __int64 param_9,unsigned __int64 param_10,unsigned __int64 param_11)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int in_stack_000000d4;
  int in_stack_000000dc;
  int in_stack_00000114;
  int in_stack_0000011c;
  int in_stack_00000124;
  int *in_stack_0000012c;
  int *in_stack_00000134;
  unsigned int *in_stack_0000013c;
  unsigned char auStack_100 [256];
  
  uVar3 = fn_82F6D9FC();
  fn_8255A070();
  uVar2 = fn_8255AE78();
  puVar1 = (unsigned int *)(in_r0 + in_stack_00000124 & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  *in_stack_00000134 = 0;
  *in_stack_0000013c = lbl_821CA460;
  if (in_stack_000000dc == 0) {
    uVar2 = fn_824D9D48(param_5,param_8,param_9,param_11,auStack_100);
    *in_stack_00000134 = (int)uVar2;
    *in_stack_0000012c = *(int *)((int)uVar2 * 0x30 + (int)param_9 + 0x24);
  }
  else {
    *in_stack_0000012c = in_stack_00000114;
  }
  if (*in_stack_0000012c == 1) {
    fn_824D9220(uVar3,uVar2,param_11,-(unsigned int)(in_stack_0000011c == 0) & in_stack_000000d4,
                      in_stack_00000124,in_stack_0000013c);
  }
  else if (*in_stack_0000012c == 2) {
    fn_824D94E0(uVar3,param_2,param_3,param_5);
  }
  fn_82F6DC94();
  return;
}

