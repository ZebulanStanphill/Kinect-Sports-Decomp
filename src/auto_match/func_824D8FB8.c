extern int fn_824D9D48();
extern int fn_8255A070();
extern int fn_8255AE78();


__int64 fn_824D8FB8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                      unsigned int *param_5,int param_6,unsigned __int64 param_7)

{
  unsigned int *puVar1;
  int in_r0;
  __int64 lVar2;
  unsigned int in_register_00010030;
  unsigned int in_register_00010034;
  unsigned int in_register_00010038;
  unsigned int in_vr3;
  
  fn_8255A070();
  fn_8255AE78();
  puVar1 = (unsigned int *)(in_r0 + param_6 & 0xfffffff0);
  *puVar1 = in_register_00010030;
  puVar1[1] = in_register_00010034;
  puVar1[2] = in_register_00010038;
  puVar1[3] = in_vr3;
  lVar2 = fn_824D9D48(param_2,param_3,param_4,*param_5,param_7);
  return lVar2 * 0x30 + param_4;
}

